/*
 * XREFs of ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x18004E790
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     ??$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z @ 0x18004E528 (--$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z.c)
 */

__int64 __fastcall RmpArrayRemoveElement<_RM_RESOURCE_SET *>(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned int Element; // eax
  unsigned int v4; // edx
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // r8
  __int64 v9; // rax

  Element = RmpArrayFindElementIndex<_RM_RESOURCE_SET *>(a1, *a2, a3);
  v7 = Element;
  if ( Element >= v4 )
    return 0LL;
  v9 = v4 - 1;
  *v6 = v9;
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)(v5 + 8 * v9);
  return 1LL;
}
