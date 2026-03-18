/*
 * XREFs of IoCleanupIrp @ 0x14014DD00
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  bool v3; // zf

  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2566uLL, 0LL, 0LL);
  v3 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v3 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, -1, a3);
  }
}
