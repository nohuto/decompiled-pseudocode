/*
 * XREFs of ?PanDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0271340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx

  (*((void (__fastcall **)(_QWORD))a1 + 101))(*((_QWORD *)a1 + 4));
  EngDeleteSemaphore(*((HSEMAPHORE *)a1 + 14));
  Win32FreePool(a1, v2);
}
