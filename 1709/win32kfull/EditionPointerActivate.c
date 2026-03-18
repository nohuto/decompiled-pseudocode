/*
 * XREFs of EditionPointerActivate @ 0x1C01CE350
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 */

void __fastcall EditionPointerActivate(__int64 a1, int a2, __int16 a3, __int64 a4, struct tagPOINTEREVENTINT *a5)
{
  xxxPointerActivateInternal(*(struct tagWND **)(a1 + 80), a2, a3, a4, a5);
}
