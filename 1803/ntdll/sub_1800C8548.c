/*
 * XREFs of sub_1800C8548 @ 0x1800C8548
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1800C8548(int a1)
{
  NTSTATUS result; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  int *v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  v5 = 0;
  v3 = &v6;
  v4 = 4;
  result = EtwEventRegister(&stru_180123FA0, 0LL, 0LL, &RegHandle);
  if ( !result )
  {
    EtwEventWrite(RegHandle, &stru_180123F30, 1u, (PEVENT_DATA_DESCRIPTOR)&v3);
    return EtwNotificationUnregister(RegHandle, 0LL);
  }
  return result;
}
