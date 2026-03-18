/*
 * XREFs of CcUnmapVacb @ 0x140515A10
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 * Callees:
 *     CcUpdateSharedCacheMapFlag @ 0x14002933C (CcUpdateSharedCacheMapFlag.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     PfCheckDeprioritizeFile @ 0x1404984E4 (PfCheckDeprioritizeFile.c)
 *     PfCheckDeprioritizeImage @ 0x140563FB4 (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall CcUnmapVacb(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebp
  int v7; // eax
  int v8; // ecx
  _KPROCESS *Process; // r8
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // esi
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r8

  v3 = 0;
  if ( (a3 & 1) != 0 && (*(_DWORD *)(a2 + 152) & 0x40) != 0 )
  {
LABEL_19:
    v3 = 1;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(a2 + 152);
  if ( (v7 & 0x200000) != 0 && (v7 & 0x200) == 0 )
  {
    v8 = *(_DWORD *)(a2 + 512);
    Process = KeGetCurrentThread()->ApcState.Process;
    v10 = Process[1].ThreadSeed[1];
    if ( v10 == v8 )
    {
      if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      {
LABEL_14:
        v14 = CcReferenceSharedCacheMapFileObject(a2);
        v15 = *(_QWORD *)(v14 + 24);
        CcDereferenceSharedCacheMapFileObject(a2, v14);
        v16 = ((*(__int64 *)(a1 + 16) >> 12) & 0xFFFFFFFFFFFFFFC0uLL) + 64;
        if ( (unsigned __int64)((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0) + (*(__int64 *)(a2 + 8) >> 12) < v16 )
          v16 = ((*(_QWORD *)(a2 + 8) & 0xFFFLL) != 0) + (*(__int64 *)(a2 + 8) >> 12);
        if ( v16 <= 1 )
          LODWORD(v16) = 1;
        if ( (unsigned int)PfCheckDeprioritizeFile(*(_DWORD *)(a2 + 512), v15, v16) )
          goto LABEL_19;
LABEL_6:
        CcUpdateSharedCacheMapFlag(a2, 0x200000, 0);
        goto LABEL_7;
      }
      if ( v10 == v8 )
        goto LABEL_6;
    }
    if ( !(unsigned int)PfCheckDeprioritizeImage() )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_7:
  v11 = v3 | 2;
  v12 = a3 & 2;
  if ( !v12 )
    v11 = v3;
  result = MmUnmapViewInSystemCache(*(_QWORD *)a1, *(_QWORD *)(a2 + 168), v11);
  if ( !v12 )
    *(_QWORD *)a1 = 0LL;
  return result;
}
