/*
 * XREFs of ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01CC0A8
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 * Callees:
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01CAFA8 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 */

void __fastcall RemoveThreadPointerHookData(struct tagTHREADINPUTPOINTERLIST *a1)
{
  struct tagTHREADPOINTERDATA *v2; // rcx

  v2 = (struct tagTHREADPOINTERDATA *)*((_QWORD *)a1 + 3);
  if ( v2 )
  {
    FreeThreadPointerHookData(v2);
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
