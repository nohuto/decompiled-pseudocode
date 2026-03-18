/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1407939B4
 * Callers:
 *     NtFilterBootOption @ 0x14079357C (NtFilterBootOption.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140793E04 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 */

__int64 SepSecureBootCorrectBcd()
{
  __int64 v0; // rdi
  NTSTATUS v1; // eax
  int updated; // ebx
  PVOID PoolWithTag; // r15
  unsigned int v4; // r14d
  unsigned __int16 *v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rsi
  _DWORD *v8; // r9
  __int16 v9; // r8
  unsigned int v11; // [rsp+70h] [rbp+40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+48h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF
  __int64 v14; // [rsp+88h] [rbp+58h] BYREF

  v13 = 0LL;
  v0 = 0LL;
  v11 = 0;
  LODWORD(NumberOfBytes) = 0;
  v14 = 0LL;
  v1 = BiAcquireBcdSyncMutant(0);
  updated = v1;
  if ( v1 >= 0 )
  {
    updated = BiOpenSystemStore(&v14, 0);
    BiReleaseBcdSyncMutant(0);
    v0 = v14;
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v1);
  }
  if ( updated >= 0 )
  {
    v14 = 1LL;
    updated = BcdEnumerateObjects(v0, &v14, 0LL, &NumberOfBytes, &v11);
    if ( updated == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x62536553u);
      if ( PoolWithTag )
      {
        updated = BcdEnumerateObjects(v0, &v14, PoolWithTag, &NumberOfBytes, &v11);
        if ( updated >= 0 )
        {
          v4 = 0;
          if ( v11 )
          {
            while ( 1 )
            {
              NumberOfBytes = (SIZE_T)PoolWithTag + 24 * v4;
              updated = BcdOpenObject(v0, (unsigned int *)NumberOfBytes, &v13);
              if ( updated < 0 )
                break;
              v5 = (unsigned __int16 *)qword_1403E98E8;
              v6 = 0;
              v7 = v13;
              if ( *((_WORD *)qword_1403E98E8 + 18) )
              {
                do
                {
                  v8 = (_DWORD *)(qword_1403EC8D0 + 12LL * v6);
                  if ( !*v8 || *v8 == *(_DWORD *)(*(_QWORD *)(NumberOfBytes + 16) + 4LL) )
                  {
                    v9 = *(_WORD *)((unsigned int)v8[2] + qword_1403EC8E8);
                    if ( ((v9 & 0x20) == 0 || (dword_1403D1664 & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_1403D1664 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_1403EC8D0 + 12LL * v6, v7);
                      if ( updated < 0 )
                        goto LABEL_24;
                      v5 = (unsigned __int16 *)qword_1403E98E8;
                    }
                  }
                  ++v6;
                }
                while ( v6 < v5[18] );
              }
              BcdCloseObject(v7);
              v7 = 0LL;
              ++v4;
              v13 = 0LL;
              if ( v4 >= v11 )
                goto LABEL_24;
            }
            v7 = v13;
LABEL_24:
            if ( v7 )
              BcdCloseObject(v7);
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
  if ( v0 )
    BcdCloseStore(v0);
  return (unsigned int)updated;
}
