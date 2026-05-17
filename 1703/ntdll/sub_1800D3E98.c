/*
 * XREFs of sub_1800D3E98 @ 0x1800D3E98
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_1800D3E98(int a1)
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
  result = EtwEventRegister((int)&unk_180124720, 0LL, 0LL, (__int64)&v2);
  if ( !(_DWORD)result )
  {
    EtwEventWrite(v2, (int)&unk_1801246B0, 1, (__int64)&v3);
    return EtwNotificationUnregister(v2, 0LL);
  }
  return result;
}
