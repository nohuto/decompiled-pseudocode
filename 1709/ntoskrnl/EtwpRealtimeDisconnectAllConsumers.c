/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x14058E65C
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  struct _KEVENT ***v2; // rbx
  struct _KEVENT **v3; // rdi
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (struct _KEVENT ***)(a1 + 344);
  while ( *v2 != (struct _KEVENT **)v2 )
  {
    v3 = *v2;
    if ( (*v2)[1] != (struct _KEVENT *)v2 || (v4 = *v3, (struct _KEVENT **)(*v3)->Header.WaitListHead.Flink != v3) )
      __fastfail(3u);
    *v2 = (struct _KEVENT **)v4;
    v4->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v2;
    --*(_DWORD *)(a1 + 360);
    v5 = v3[6];
    *((_BYTE *)v3 + 90) |= 4u;
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(v3);
  }
}
