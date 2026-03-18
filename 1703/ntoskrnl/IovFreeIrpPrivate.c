/*
 * XREFs of IovFreeIrpPrivate @ 0x140763334
 * Callers:
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 * Callees:
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 */

void __fastcall IovFreeIrpPrivate(ULONG_PTR BugCheckParameter1)
{
  if ( !IovpDisabledWithoutReboot )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      KeBugCheckEx(0xC9u, (unsigned int)(IovpDisabledWithoutReboot + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      KeBugCheckEx(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)VfIoFreeIrp((PVOID)BugCheckParameter1) )
    IopFreeIrp(BugCheckParameter1);
}
