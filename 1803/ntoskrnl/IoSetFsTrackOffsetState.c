/*
 * XREFs of IoSetFsTrackOffsetState @ 0x140237EB0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140237FBC (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r11
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 5LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v5, 5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
