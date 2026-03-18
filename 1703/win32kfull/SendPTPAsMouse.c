/*
 * XREFs of SendPTPAsMouse @ 0x1C01B0E30
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 */

__int64 __fastcall SendPTPAsMouse(void *a1, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // esi
  struct tagPOINT v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( gdwInAtomicOperation )
  {
    a2 = (struct tagPOINT)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(a1, a2, a3, a4);
  v9 = UpconvertTime(v4, v8);
  QueuePTPMouseEvent(a1, v6, v5, v9);
  return EnterCrit(0LL, 1LL);
}
