/*
 * XREFs of IoSetGenericIrpExtension @ 0x14014B1C0
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1402CA238 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14003F128 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1400A4C7C (IopIrpHasExtensionType.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  int v6; // edx
  _WORD *IrpExtension; // rax

  if ( a3 > 4u )
    return 3221225485LL;
  v6 = 2;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(a1, v6);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, a3);
  return 0LL;
}
