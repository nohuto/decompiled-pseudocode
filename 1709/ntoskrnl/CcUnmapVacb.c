/*
 * XREFs of CcUnmapVacb @ 0x14056F9B0
 * Callers:
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140116AA8 (CcUpdateSharedCacheMapFlag.c)
 *     PfCheckDeprioritizeFile @ 0x14043EBAC (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x14043F0C0 (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebp
  int v7; // eax
  int v8; // r8d
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
LABEL_20:
    v3 = 1;
    goto LABEL_3;
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
    v15 = ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0) + (*(__int64 *)(a2 + 8) >> 12);
    if ( v15 >= ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64 )
      v15 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    if ( v15 <= 1 )
      LODWORD(v15) = 1;
    if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v14, v15) )
      goto LABEL_20;
LABEL_13:
    CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
  }
LABEL_3:
  v8 = v3 | 2;
  v9 = a3 & 2;
  if ( !v9 )
    v8 = v3;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v8);
  if ( !v9 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
