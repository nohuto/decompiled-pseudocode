/*
 * XREFs of CcSetVacbInFreeList @ 0x1400AB7EC
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcSetVacbIntoList @ 0x1401DE98C (CcSetVacbIntoList.c)
 */

__int64 __fastcall CcSetVacbInFreeList(_QWORD *a1, char a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  --CcNumberOfMappedVacbs;
  if ( a2 )
  {
    result = CcSetVacbIntoList(a1, &CcVacbFreeHighPriorityList, a1, 0LL);
    *(_QWORD *)(v8 + 8) = v9;
    ++CcNumberOfFreeHighPriorityVacbs;
  }
  else
  {
    v3 = a1 + 2;
    v4 = CcVacbFreeList;
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
      __fastfail(3u);
    *v3 = CcVacbFreeList;
    v3[1] = &CcVacbFreeList;
    *(_QWORD *)(v4 + 8) = v3;
    CcVacbFreeList = (__int64)v3;
    v5 = a1[4];
    a1[1] = 0LL;
    v6 = *(_DWORD *)(v5 + 4);
    if ( !v6 )
      KeBugCheckEx(0x34u, 0x149uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    result = (unsigned int)(v6 - 1);
    *(_DWORD *)(v5 + 4) = result;
    ++CcNumberOfFreeVacbs;
  }
  return result;
}
