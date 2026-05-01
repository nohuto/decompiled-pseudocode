/*
 * XREFs of ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x18004E74C
 * Callers:
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052494 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 * Callees:
 *     ??$RmpArrayGrow@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAKK@Z @ 0x18004E540 (--$RmpArrayGrow@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAKK@Z.c)
 */

__int64 __fastcall RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(PVOID *a1, unsigned int *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax

  result = RmpArrayGrow<_RM_RESOURCE_SET *>(a1, a2, *a3 + 1);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*a1 + (unsigned int)(*a3)++) = a4;
    return 0LL;
  }
  return result;
}
