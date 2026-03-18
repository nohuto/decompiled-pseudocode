/*
 * XREFs of IsTopLevelParent @ 0x1C0072C0C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ValidateNewParent @ 0x1C0072B58 (ValidateNewParent.c)
 *     IsParentBandValid @ 0x1C011AA14 (IsParentBandValid.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelParent(__int64 a1)
{
  __int64 v1; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( a1 != *(_QWORD *)(v1 + 104) && a1 != *(_QWORD *)(*(_QWORD *)(v1 + 8) + 16LL) )
      return 0;
  }
  return result;
}
