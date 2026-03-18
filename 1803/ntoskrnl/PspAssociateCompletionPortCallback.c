/*
 * XREFs of PspAssociateCompletionPortCallback @ 0x14048BDA0
 * Callers:
 *     <none>
 * Callees:
 *     PspSendJobNotification @ 0x14008522C (PspSendJobNotification.c)
 *     RtlInterlockedSetClearBits @ 0x14008ABB8 (RtlInterlockedSetClearBits.c)
 */

__int64 __fastcall PspAssociateCompletionPortCallback(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // r11

  v3 = (volatile signed __int32 *)(a1 + 768);
  if ( (*v3 & 1) == 0 )
  {
    RtlInterlockedSetClearBits(v3, 4, 32);
    PspSendJobNotification(a2, 6LL, *(_QWORD *)(v4 + 736), 0);
  }
  return 0LL;
}
