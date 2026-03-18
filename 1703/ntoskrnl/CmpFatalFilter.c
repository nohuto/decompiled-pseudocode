/*
 * XREFs of CmpFatalFilter @ 0x140660958
 * Callers:
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
