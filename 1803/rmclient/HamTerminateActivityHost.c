/*
 * XREFs of HamTerminateActivityHost @ 0x180004FE0
 * Callers:
 *     <none>
 * Callees:
 *     HamTerminateActivityHostUnlessTaskCompletion @ 0x180004360 (HamTerminateActivityHostUnlessTaskCompletion.c)
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHost(_QWORD *a1, __int64 a2, int a3, int a4)
{
  return HamTerminateActivityHostUnlessTaskCompletion(a1, a2, a3, a4, 0LL);
}
