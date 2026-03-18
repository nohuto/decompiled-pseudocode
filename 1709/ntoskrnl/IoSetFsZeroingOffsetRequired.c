/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x1401FB1B0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401FB28C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v4; // edx
  __int64 v5; // r11
  _WORD *IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(v2, v1) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v5, v4);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_DWORD *)IrpExtension + 10) = 0;
  return 0LL;
}
