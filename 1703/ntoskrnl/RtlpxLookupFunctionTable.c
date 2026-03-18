/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1400E4B40
 * Callers:
 *     RtlLookupFunctionEntry @ 0x14000A970 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x14002F550 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTable @ 0x140035EE0 (RtlLookupFunctionTable.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140240FAC (RtlGuardCheckLongJumpTarget.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1408185B0 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x140818E0C (KiVerifyPdata.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14006CF18 (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 *a2)
{
  PVOID v2; // rbp
  int *v5; // r11
  int v6; // r14d
  int v7; // esi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int *v11; // r10
  unsigned __int64 v12; // rdx
  PVOID result; // rax
  int v14; // r9d
  int v15; // edx
  int *v16; // r8
  unsigned __int64 v17; // rcx
  PVOID *v18; // rdx
  PVOID v19; // rcx
  unsigned __int8 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  v5 = RtlpInvertedFunctionTable;
  v6 = 1;
  v7 = RtlpInvertedFunctionTable[2];
  if ( (v7 & 1) != 0 )
    goto LABEL_16;
  if ( *RtlpInvertedFunctionTable != 1 )
  {
    v8 = *RtlpInvertedFunctionTable - 1;
    v9 = 1;
    while ( v8 >= v9 )
    {
      v10 = (v8 + v9) >> 1;
      v11 = &RtlpInvertedFunctionTable[6 * v10];
      v12 = *((_QWORD *)v11 + 3);
      if ( a1 >= v12 )
      {
        if ( a1 < v12 + (unsigned int)v11[8] )
        {
          *(_OWORD *)a2 = *((_OWORD *)v11 + 1);
          a2[2] = *((_QWORD *)v11 + 4);
          result = (PVOID)*a2;
          goto LABEL_11;
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
  if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
    goto LABEL_16;
  result = 0LL;
LABEL_11:
  if ( v5[2] != v7 )
  {
LABEL_16:
    MmLockLoadedModuleListShared(&v20);
    if ( *RtlpInvertedFunctionTable != 1 )
    {
      v14 = *RtlpInvertedFunctionTable - 1;
      if ( v14 >= 1 )
      {
        do
        {
          v15 = (v14 + v6) >> 1;
          v16 = &RtlpInvertedFunctionTable[6 * v15];
          v17 = *((_QWORD *)v16 + 3);
          if ( a1 >= v17 )
          {
            if ( a1 < v17 + (unsigned int)v16[8] )
            {
              *(_OWORD *)a2 = *((_OWORD *)v16 + 1);
              a2[2] = *((_QWORD *)v16 + 4);
              v2 = (PVOID)*a2;
              goto LABEL_32;
            }
            v6 = v15 + 1;
          }
          else
          {
            if ( !v15 )
              break;
            v14 = v15 - 1;
          }
        }
        while ( v14 >= v6 );
      }
    }
    if ( *((_BYTE *)RtlpInvertedFunctionTable + 12) )
    {
      v18 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList )
      {
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          while ( 1 )
          {
            v19 = v18[6];
            if ( a1 >= (unsigned __int64)v19 && a1 < (unsigned __int64)v19 + *((unsigned int *)v18 + 16) )
              break;
            v18 = (PVOID *)*v18;
            if ( v18 == &PsLoadedModuleList )
              goto LABEL_32;
          }
          v2 = v18[2];
          *a2 = (__int64)v2;
          a2[1] = (__int64)v19;
          *((_DWORD *)a2 + 4) = *((_DWORD *)v18 + 16);
          *((_DWORD *)a2 + 5) = *((_DWORD *)v18 + 6);
        }
      }
    }
LABEL_32:
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v20);
    return v2;
  }
  return result;
}
