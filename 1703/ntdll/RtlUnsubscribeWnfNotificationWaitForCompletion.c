/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B4A0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x180087110 (RtlWaitForWnfMetaNotification.c)
 * Callees:
 *     sub_18000B51C @ 0x18000B51C (sub_18000B51C.c)
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)a1 + 11) = &v2;
  sub_18000FFDC(*((PVOID *)a1 + 3), a1);
  do
  {
    if ( byte_18015B388 )
      break;
    sub_18000B51C((unsigned int)&v2, (unsigned int)&v3, 4, 0, dword_180158680);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
