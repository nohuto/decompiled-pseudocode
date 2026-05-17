/*
 * XREFs of sub_180041624 @ 0x180041624
 * Callers:
 *     sub_180041510 @ 0x180041510 (sub_180041510.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_180081384 @ 0x180081384 (sub_180081384.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 */

bool sub_180041624()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING v3; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v4; // [rsp+50h] [rbp+7h] BYREF
  int v5; // [rsp+60h] [rbp+17h] BYREF
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+27h]
  int v8; // [rsp+78h] [rbp+2Fh]
  __int128 v9; // [rsp+80h] [rbp+37h]
  int v10; // [rsp+B0h] [rbp+67h] BYREF
  int v11; // [rsp+B8h] [rbp+6Fh] BYREF
  int v12; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( dword_180159718 != 2 )
    return dword_180159718 == 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
  v5 = 48;
  p_DestinationString = &DestinationString;
  v8 = 64;
  v13 = 0LL;
  v6 = 0LL;
  v9 = 0LL;
  if ( (int)ZwOpenKey(&v13, 131097LL, &v5) >= 0 )
  {
    if ( (v10 = 0,
          v11 = 4,
          RtlInitUnicodeString(&v3, L"AutoDownload"),
          (int)sub_180081384(v13, &v3, &v12, &v10, &v11) >= 0)
      && v12 == 4
      && v10 == 2
      || (v10 = 0,
          v11 = 4,
          RtlInitUnicodeString(&v4, L"DisableStoreApps"),
          (int)sub_180081384(v13, &v4, &v12, &v10, &v11) >= 0)
      && v12 == 4
      && v10 == 1 )
    {
      _InterlockedCompareExchange(&dword_180159718, 0, 2);
    }
  }
  _InterlockedCompareExchange(&dword_180159718, 1, 2);
  return dword_180159718 == 0;
}
