/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x140493708
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  void **v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (void **)(a1 + 344);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( *((void ***)v3 + 1) != v2 || (v4 = *(void ***)v3, *(void **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_DWORD *)(a1 + 360);
    v5 = (struct _KEVENT *)*((_QWORD *)v3 + 6);
    *((_BYTE *)v3 + 90) |= 4u;
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(v3);
  }
}
