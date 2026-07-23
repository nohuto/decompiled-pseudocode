/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1406F7E44
 * Callers:
 *     NtFilterBootOption @ 0x1406F79EC (NtFilterBootOption.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14058A528 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x1407349D0 (BcdEnumerateObjects.c)
 */

__int64 SepSecureBootCorrectBcd()
{
  unsigned int v0; // r12d
  void *v1; // rsi
  NTSTATUS v2; // eax
  int v3; // edi
  NTSTATUS updated; // ebx
  char *PoolWithTag; // r15
  ULONG v6; // r14d
  NTSTATUS v7; // eax
  HANDLE v8; // rdi
  unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r10
  __int16 v12; // r9
  ULONG ObjectCount; // [rsp+70h] [rbp+40h] BYREF
  const GUID *BufferSize; // [rsp+78h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+80h] [rbp+50h] BYREF
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor; // [rsp+88h] [rbp+58h] BYREF

  v0 = 0;
  BcdObjectHandle = 0LL;
  v1 = 0LL;
  ObjectCount = 0;
  LODWORD(BufferSize) = 0;
  BcdEnumDescriptor = 0LL;
  v2 = BiAcquireBcdSyncMutant(0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v3 = BiOpenSystemStore((__int64 *)&BcdEnumDescriptor, 0);
    BiReleaseBcdSyncMutant(0);
    v1 = (void *)BcdEnumDescriptor;
  }
  else
  {
    BiLogMessage(4u, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
  }
  updated = v3;
  if ( v3 >= 0 )
  {
    BcdEnumDescriptor = (_BCD_OBJECT_DESCRIPTION)1LL;
    updated = BcdEnumerateObjects(v1, &BcdEnumDescriptor, 0LL, (PULONG)&BufferSize, &ObjectCount);
    if ( updated == -1073741789 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)BufferSize, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(v1, &BcdEnumDescriptor, PoolWithTag, (PULONG)&BufferSize, &ObjectCount);
        if ( updated >= 0 )
        {
          v6 = 0;
          if ( ObjectCount )
          {
            do
            {
              BufferSize = (const GUID *)&PoolWithTag[24 * v6];
              v7 = BcdOpenObject(v1, BufferSize, &BcdObjectHandle);
              v8 = BcdObjectHandle;
              updated = v7;
              if ( v7 < 0 )
                break;
              v9 = (unsigned __int16 *)qword_140387F50;
              if ( *((_WORD *)qword_140387F50 + 18) )
              {
                v10 = (unsigned int)dword_14036EFEC;
                do
                {
                  v11 = (_DWORD *)(qword_14038C448 + 12LL * v0);
                  if ( !*v11 || *v11 == *(_DWORD *)(*(_QWORD *)&BufferSize[1].Data1 + 4LL) )
                  {
                    v12 = *(_WORD *)(qword_14038C450 + (unsigned int)v11[2]);
                    if ( ((v12 & 0x20) == 0 || (v10 & 4) != 0) && ((v12 & 0x40) == 0 || (v10 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_14038C448 + 12LL * v0, v8, v10);
                      if ( updated < 0 )
                        goto LABEL_23;
                      v9 = (unsigned __int16 *)qword_140387F50;
                      v10 = (unsigned int)dword_14036EFEC;
                    }
                  }
                  ++v0;
                }
                while ( v0 < v9[18] );
              }
              BcdCloseObject(v8);
              v0 = 0;
              ++v6;
              v8 = 0LL;
              BcdObjectHandle = 0LL;
            }
            while ( v6 < ObjectCount );
LABEL_23:
            if ( v8 )
              BcdCloseObject(v8);
          }
        }
        ExFreePoolWithTag(PoolWithTag, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( v1 )
    BcdCloseStore(v1);
  return (unsigned int)updated;
}
