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
  NTSTATUS v4; // eax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+74h] [rbp+24h]
  int v10; // [rsp+78h] [rbp+28h]
  int v11; // [rsp+7Ch] [rbp+2Ch]
  int v12; // [rsp+88h] [rbp+38h]

  v11 = HIDWORD(a2);
  v9 = HIDWORD(a1);
  Handle = 0LL;
  v3 = 0;
  v12 = 0;
  v10 = 0;
  v8 = 4;
  if ( a3 && (unsigned int)sub_18005D1A4(&Handle) )
  {
    if ( v12 != 1
      && RtlInitUnicodeStringEx(&DestinationString, L"SYSTEM") >= 0
      && (int)sub_18005DF88(Handle, &DestinationString, (ULONG)&v8) >= 0 )
    {
      v3 = v10 == 4;
    }
    if ( Handle )
    {
      v4 = ZwClose(Handle);
      RtlNtStatusToDosError(v4);
    }
  }
  return v3;
}
