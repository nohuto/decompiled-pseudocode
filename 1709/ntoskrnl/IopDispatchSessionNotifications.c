/*
 * XREFs of IopDispatchSessionNotifications @ 0x1405EE1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall IopDispatchSessionNotifications(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  v3 = CallbackContext[6];
  if ( !v3 || v3 == *((_QWORD *)Argument1 + 7) )
  {
    v4 = Argument1[8];
    if ( (IopSessionEventType[v4] & (_DWORD)CallbackContext[7]) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, int))CallbackContext[3])(
        *((_QWORD *)Argument1 + 7),
        CallbackContext[5],
        v4,
        CallbackContext[8],
        *((_QWORD *)Argument1 + 6),
        Argument1[10]);
  }
}
