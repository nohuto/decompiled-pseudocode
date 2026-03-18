/*
 * XREFs of EtwpGetMaxDebugIdBufferSize @ 0x14054E584
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x14054E5D0 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetMaxDebugIdBufferSize(__int64 a1)
{
  __int64 *v1; // r8
  __int64 *v2; // rdx
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // eax

  v1 = (__int64 *)(a1 + 112);
  v2 = *(__int64 **)(a1 + 112);
  if ( v2 == (__int64 *)(a1 + 112) )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( NtBuildLabEx[v4] );
  v5 = (v4 + 24) & 0xFFFFFFF8;
  do
  {
    v6 = *((_DWORD *)v2 + 5);
    v2 = (__int64 *)*v2;
    v5 += (v6 + 19) & 0xFFFFFFF8;
  }
  while ( v2 != v1 );
  return (unsigned int)(v5 + 72);
}
