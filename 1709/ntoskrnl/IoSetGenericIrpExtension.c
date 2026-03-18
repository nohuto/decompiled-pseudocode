/*
 * XREFs of IoSetGenericIrpExtension @ 0x1401FB210
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x1402946E8 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14010744C (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  int v7; // edx
  _WORD *IrpExtension; // rax

  if ( a3 > 4u )
    return 3221225485LL;
  v7 = 2;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(a1, v7);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, a3);
  return 0LL;
}
