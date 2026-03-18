/*
 * XREFs of CcSetVacbInFreeList @ 0x1400DD134
 * Callers:
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcInitializePartitionVacbs @ 0x140171318 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x1402211E0 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcSetVacbInFreeList(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 *v7; // r8
  __int64 v8; // r9

  --CcNumberOfMappedVacbs;
  result = (unsigned __int64)(a2 + 2);
  if ( a3 )
  {
    v7 = (unsigned __int64 *)(a1 + 840);
    v8 = *(_QWORD *)(a1 + 840);
    if ( *(_QWORD *)(v8 + 8) != a1 + 840 )
      __fastfail(3u);
    *(_QWORD *)result = v8;
    a2[3] = v7;
    *(_QWORD *)(v8 + 8) = result;
    *v7 = result;
    a2[1] = 0LL;
    ++*(_DWORD *)(a1 + 856);
  }
  else
  {
    v4 = CcVacbFreeList;
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
      __fastfail(3u);
    *(_QWORD *)result = CcVacbFreeList;
    a2[3] = &CcVacbFreeList;
    *(_QWORD *)(v4 + 8) = result;
    CcVacbFreeList = (__int64)(a2 + 2);
    v5 = a2[4];
    a2[1] = 0LL;
    v6 = *(_DWORD *)(v5 + 4);
    if ( !v6 )
      KeBugCheckEx(0x34u, 0x153uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    result = (unsigned int)(v6 - 1);
    *(_DWORD *)(v5 + 4) = result;
    ++CcNumberOfFreeVacbs;
  }
  return result;
}
