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
  __int64 v1; // rsi
  NTSTATUS v2; // eax
  int v3; // edi
  int updated; // ebx
  PVOID PoolWithTag; // r15
  unsigned int v6; // r14d
  int v7; // eax
  HANDLE v8; // rdi
  unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r10
  __int16 v12; // r9
  unsigned int v14; // [rsp+70h] [rbp+40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+50h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v0 = 0;
  Handle = 0LL;
  v1 = 0LL;
  v14 = 0;
  LODWORD(NumberOfBytes) = 0;
  v17 = 0LL;
  v2 = BiAcquireBcdSyncMutant(0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v3 = BiOpenSystemStore(&v17, 0);
    BiReleaseBcdSyncMutant(0);
    v1 = v17;
  }
  else
  {
    BiLogMessage(4u, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
  }
  updated = v3;
  if ( v3 >= 0 )
  {
    v17 = 1LL;
    updated = BcdEnumerateObjects(v1, &v17, 0LL, &NumberOfBytes, &v14);
    if ( updated == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(v1, &v17, PoolWithTag, &NumberOfBytes, &v14);
        if ( updated >= 0 )
        {
          v6 = 0;
          if ( v14 )
          {
            do
            {
              NumberOfBytes = (SIZE_T)PoolWithTag + 24 * v6;
              v7 = BcdOpenObject(v1, (unsigned int *)NumberOfBytes, &Handle);
              v8 = Handle;
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
                  if ( !*v11 || *v11 == *(_DWORD *)(*(_QWORD *)(NumberOfBytes + 16) + 4LL) )
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
              Handle = 0LL;
            }
            while ( v6 < v14 );
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
