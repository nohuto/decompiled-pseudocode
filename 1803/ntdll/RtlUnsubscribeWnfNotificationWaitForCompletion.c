/*
 * XREFs of RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180049DC0
 * Callers:
 *     RtlWaitForWnfMetaNotification @ 0x1800494E0 (RtlWaitForWnfMetaNotification.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 * Callees:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWaitForCompletion(PVOID a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  int v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  *((_QWORD *)a1 + 11) = &v2;
  sub_180049E24(*((PVOID *)a1 + 3), a1);
  do
  {
    if ( byte_18015C3A8 )
      break;
    sub_18004AABC((unsigned int)&v2, (unsigned int)&v3, 4, 0, dword_1801596D8);
    v3 = v2;
  }
  while ( !v2 );
  return 0LL;
}
