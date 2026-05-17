/*
 * XREFs of sub_1800EDDC4 @ 0x1800EDDC4
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 */

__int64 sub_1800EDDC4()
{
  int Key; // ebx
  __int64 v1; // r8
  __int64 v2; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v5; // [rsp+50h] [rbp-30h]
  __int64 v6; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  __int128 v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  p_DestinationString = &DestinationString;
  v5 = 48;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  Key = ZwCreateKey();
  if ( Key >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    Key = ZwSetValueKey();
    if ( Key >= 0 && (int)sub_18006E330(0x2000000u, 3u, v1, v2, (__int64)&v10) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v6 = v10;
      p_DestinationString = &DestinationString;
      v5 = 48;
      v8 = 64;
      v9 = 0LL;
      Key = ZwCreateKey();
      if ( Key >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        Key = ZwSetValueKey();
      }
    }
  }
  if ( v10 )
    sub_18006E310(v10);
  return (unsigned int)Key;
}
