/*
 * XREFs of CcSetVacbInFreeList @ 0x140115A18
 * Callers:
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1401E2584 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall CcSetVacbInFreeList(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8

  --CcNumberOfMappedVacbs;
  if ( a3 )
  {
    result = a1 + 840;
    v8 = *(_QWORD *)(a1 + 840);
    v9 = a2 + 2;
    if ( *(_QWORD *)(v8 + 8) != a1 + 840 )
      __fastfail(3u);
    *v9 = v8;
    a2[3] = result;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)result = v9;
    a2[1] = 0LL;
    ++*(_DWORD *)(a1 + 856);
  }
  else
  {
    v3 = CcVacbFreeList;
    v4 = a2 + 2;
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
      __fastfail(3u);
    *v4 = CcVacbFreeList;
    a2[3] = &CcVacbFreeList;
    *(_QWORD *)(v3 + 8) = v4;
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
