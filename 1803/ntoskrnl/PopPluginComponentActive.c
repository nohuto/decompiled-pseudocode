/*
 * XREFs of PopPluginComponentActive @ 0x140078D5C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400781D4 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140078414 (PopFxIdleWorkerTail.c)
 *     PopFxCompleteComponentActivation @ 0x140078628 (PopFxCompleteComponentActivation.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopPluginNotifyActive @ 0x140277174 (PopPluginNotifyActive.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  char v6; // si
  __int64 v8; // rdi
  __int64 result; // rax

  v6 = a3;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    LOBYTE(a3) = v6;
    PopPluginNotifyActive(*(_QWORD *)(v8 + 32), a2, a3);
  }
  result = PopPepProcessEvent(v8, (unsigned int)v8 + 200 * a2 + 184, v6 != 0 ? 6 : 3, v6 != 0 ? 2 : 6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
