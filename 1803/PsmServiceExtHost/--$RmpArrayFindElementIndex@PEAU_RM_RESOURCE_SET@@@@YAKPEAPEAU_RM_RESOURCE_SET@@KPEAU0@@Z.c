/*
 * XREFs of ??$RmpArrayFindElementIndex@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@KPEAU0@@Z @ 0x18004E528
 * Callers:
 *     ??$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z @ 0x18004E790 (--$RmpArrayRemoveElement@PEAU_RM_RESOURCE_SET@@@@YAKPEAPEAU_RM_RESOURCE_SET@@PEAKPEAU0@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpArrayFindElementIndex<_RM_RESOURCE_SET *>(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  for ( result = 0LL; (unsigned int)result < a2; ++a1 )
  {
    if ( *a1 == a3 )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
