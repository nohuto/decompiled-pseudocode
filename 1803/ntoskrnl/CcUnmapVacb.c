/*
 * XREFs of CcUnmapVacb @ 0x140593090
 * Callers:
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14009AF9C (CcUpdateSharedCacheMapFlag.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     PfCheckDeprioritizeImage @ 0x14050E5AC (PfCheckDeprioritizeImage.c)
 *     PfCheckDeprioritizeFile @ 0x14054FA08 (PfCheckDeprioritizeFile.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  char v3; // bp
  int v7; // eax
  char v8; // r8
  int v9; // esi
  __int64 result; // rax
  _KPROCESS *Process; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v12 = *(_DWORD *)(a2 + 512);
    if ( Process[1].ThreadSeed[1] == v12 )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) == 0 )
        goto LABEL_13;
    }
    else if ( !PfCheckDeprioritizeImage(v12) )
    {
      goto LABEL_13;
    }
    v13 = CcReferenceSharedCacheMapFileObject(a2);
    v14 = *(_QWORD *)(v13 + 24);
    CcDereferenceSharedCacheMapFileObject(a2, v13);
    v15 = (*(__int64 *)(a2 + 8) >> 12) + ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      LODWORD(v15) = 1;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v14, v15) )
      goto LABEL_19;
LABEL_13:
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
  }
LABEL_4:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( !v9 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
