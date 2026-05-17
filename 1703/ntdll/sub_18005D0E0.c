/*
 * XREFs of sub_18005D0E0 @ 0x18005D0E0
 * Callers:
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     sub_18005D1A4 @ 0x18005D1A4 (sub_18005D1A4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18005DF88 @ 0x18005DF88 (sub_18005DF88.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

_BOOL8 __fastcall sub_18005D0E0(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+74h] [rbp+24h]
  int v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+7Ch] [rbp+2Ch]
  int v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = HIDWORD(a2);
  v10 = HIDWORD(a1);
  v7 = 0LL;
  v3 = 0;
  v13 = 0;
  v11 = 0;
  v9 = 4;
  if ( a3 && (unsigned int)sub_18005D1A4(&v7, &v13, L"System\\CurrentControlSet\\Control\\CMF\\Config") )
  {
    if ( v13 != 1
      && (int)RtlInitUnicodeStringEx((__int64)v8, (__int64)L"SYSTEM") >= 0
      && (int)sub_18005DF88(v7, v8, &v11, a3, &v9) >= 0 )
    {
      v3 = v11 == 4;
    }
    if ( v7 )
    {
      v5 = ZwClose(v7);
      RtlNtStatusToDosError(v5);
    }
  }
  return v3;
}
