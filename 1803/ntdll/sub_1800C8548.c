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

__int64 __fastcall sub_1800C8548(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int *v3; // [rsp+28h] [rbp-20h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  v5 = 0;
  v3 = &v6;
  v4 = 4;
  result = EtwEventRegister(qword_180123FA0, 0LL, 0LL, &v2);
  if ( !(_DWORD)result )
  {
    EtwEventWrite(v2, (int)&unk_180123F30, 1, (__int64)&v3);
    return EtwNotificationUnregister(v2, 0LL);
  }
  return result;
}
