/*
 * XREFs of CmpCallbackFatalFilter @ 0x1406898E8
 * Callers:
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
