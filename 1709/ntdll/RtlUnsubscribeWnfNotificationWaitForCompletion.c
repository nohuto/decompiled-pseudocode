/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18006D990
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x18006D800 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(_QWORD *a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  a1[11] = &v2;
  RtlpRemoveUserSubFromNameSub((char *)a1[3], a1, &v4);
  do
  {
    if ( byte_18015F3E8 )
      break;
    RtlpWaitOnAddress((unsigned int)&v2, (unsigned int)&v3, 4, 0, RtlpWaitOnAddressSpinCount);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
