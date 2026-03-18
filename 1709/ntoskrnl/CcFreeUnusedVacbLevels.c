/*
 * XREFs of CcFreeUnusedVacbLevels @ 0x1400F7BA8
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 *     CcAllocateVacbLevels @ 0x1400F7C00 (CcAllocateVacbLevels.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     CcReferenceFileOffset @ 0x1401E1870 (CcReferenceFileOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcFreeUnusedVacbLevels(__int64 a1)
{
  _QWORD *v2; // rdx
  void *v3; // rdx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      break;
    if ( v2[1] != a1 || (v4 = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(v4 + 8) = a1;
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v2);
    --*(_DWORD *)(a1 + 24);
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    ExFreeToNPagedLookasideList(&CcVacbLevelLookasideList, v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
