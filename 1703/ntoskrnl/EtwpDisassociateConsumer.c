/*
 * XREFs of EtwpDisassociateConsumer @ 0x14045DDF0
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x140550360 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

LONG_PTR __fastcall EtwpDisassociateConsumer(__int64 a1, void *a2)
{
  void **v3; // rdx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v3 = *(void ***)a2;
  v4 = (void **)*((_QWORD *)a2 + 1);
  if ( v3[1] != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  --*(_DWORD *)(a1 + 344);
  v5 = (struct _KEVENT *)*((_QWORD *)a2 + 6);
  *((_BYTE *)a2 + 90) |= 4u;
  KeSetEvent(v5, 0, 0);
  return ObfDereferenceObject(a2);
}
