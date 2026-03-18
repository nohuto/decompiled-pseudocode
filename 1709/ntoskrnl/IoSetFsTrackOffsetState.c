/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1401FB110
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401FB28C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // r11
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 5LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v6, v5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
