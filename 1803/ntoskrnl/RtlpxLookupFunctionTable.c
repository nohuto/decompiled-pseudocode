/*
 * XREFs of RtlpxLookupFunctionTable @ 0x14012EDA0
 * Callers:
 *     RtlPcToFileHeader @ 0x1400CE8C0 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x1400CF450 (RtlLookupFunctionTable.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14012D2E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x14012EA90 (RtlLookupFunctionEntry.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14028F66C (RtlGuardCheckLongJumpTarget.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x14089E270 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x1408BA460 (KiVerifyPdata.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14013F788 (MmUnlockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID v2; // rbp
  unsigned __int64 v3; // rdi
  int *v5; // r11
  int v6; // r14d
  int v7; // esi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int *v11; // r10
  PVOID result; // rax
  int v13; // r9d
  int v14; // edx
  int *v15; // r8
  unsigned __int64 v16; // rcx
  PVOID *v17; // rdx
  PVOID v18; // rcx
  unsigned __int8 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = RtlpInvertedFunctionTable;
  v6 = 1;
  v7 = RtlpInvertedFunctionTable[2];
  if ( (v7 & 1) != 0 )
    goto LABEL_14;
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    v8 = *RtlpInvertedFunctionTable - 1;
    v9 = 1;
    while ( v8 >= v9 )
    {
      v10 = (v8 + v9) >> 1;
      v11 = &RtlpInvertedFunctionTable[6 * v10];
      a2 = *((_QWORD *)v11 + 3);
      if ( a1 >= a2 )
      {
        if ( a1 < a2 + (unsigned int)v11[8] )
        {
          *(_OWORD *)v3 = *((_OWORD *)v11 + 1);
          *(_QWORD *)(v3 + 16) = *((_QWORD *)v11 + 4);
          result = *(PVOID *)v3;
LABEL_13:
          if ( v5[2] != v7 )
            goto LABEL_14;
          return result;
        }
        v9 = v10 + 1;
      }
      else
      {
        if ( !v10 )
          break;
        v8 = v10 - 1;
      }
    }
  }
  if ( !*((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    result = 0LL;
    goto LABEL_13;
  }
LABEL_14:
  MmLockLoadedModuleListShared(&v19, a2);
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    v13 = *RtlpInvertedFunctionTable - 1;
    if ( v13 >= 1 )
    {
      do
      {
        v14 = (v13 + v6) >> 1;
        v15 = &RtlpInvertedFunctionTable[6 * v14];
        v16 = *((_QWORD *)v15 + 3);
        if ( a1 >= v16 )
        {
          if ( a1 < v16 + (unsigned int)v15[8] )
          {
            *(_OWORD *)v3 = *((_OWORD *)v15 + 1);
            *(_QWORD *)(v3 + 16) = *((_QWORD *)v15 + 4);
            v2 = *(PVOID *)v3;
            goto LABEL_30;
          }
          v6 = v14 + 1;
        }
        else
        {
          if ( !v14 )
            break;
          v13 = v14 - 1;
        }
      }
      while ( v13 >= v6 );
    }
  }
  if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
  {
    v17 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList )
    {
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( 1 )
        {
          v18 = v17[6];
          if ( a1 >= (unsigned __int64)v18 && a1 < (unsigned __int64)v18 + *((unsigned int *)v17 + 16) )
            break;
          v17 = (PVOID *)*v17;
          if ( v17 == &PsLoadedModuleList )
            goto LABEL_30;
        }
        v2 = v17[2];
        *(_QWORD *)v3 = v2;
        *(_QWORD *)(v3 + 8) = v18;
        *(_DWORD *)(v3 + 16) = *((_DWORD *)v17 + 16);
        *(_DWORD *)(v3 + 20) = *((_DWORD *)v17 + 6);
      }
    }
  }
LABEL_30:
  MmUnlockLoadedModuleListShared(v19);
  return v2;
}
