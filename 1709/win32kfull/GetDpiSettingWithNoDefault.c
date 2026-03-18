/*
 * XREFs of GetDpiSettingWithNoDefault @ 0x1C00C0160
 * Callers:
 *     GetDpiSetting @ 0x1C00C0140 (GetDpiSetting.c)
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C01B5878 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GetDpiSettingWithNoDefault(int a1, unsigned int *a2)
{
  unsigned __int16 v4; // bx
  __int16 v5; // di
  __int64 result; // rax
  unsigned int v7; // [rsp+38h] [rbp-79h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-69h] BYREF
  __int64 v9; // [rsp+80h] [rbp-31h]
  int v10; // [rsp+88h] [rbp-29h]
  _BYTE v11[40]; // [rsp+90h] [rbp-21h] BYREF
  ULONG RelativeTo[2]; // [rsp+B8h] [rbp+7h]
  PCWSTR Path; // [rsp+C0h] [rbp+Fh]
  int v14; // [rsp+C8h] [rbp+17h]
  const WCHAR *v15; // [rsp+D0h] [rbp+1Fh]
  int v16; // [rsp+D8h] [rbp+27h]
  const WCHAR *v17; // [rsp+E0h] [rbp+2Fh]

  QueryTable.Flags = 292;
  v7 = 0;
  QueryTable.Name = L"LogPixels";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = &v7;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v9 = 0LL;
  v10 = 0;
  memset(v11, 0, sizeof(v11));
  RelativeTo[0] = 5;
  Path = L"Control Panel\\Desktop";
  v15 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  v17 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  v14 = 0;
  v16 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 1;
      v5 = 2;
      goto LABEL_4;
    }
    v5 = 3;
  }
  else
  {
    v5 = 1;
  }
  v4 = 0;
LABEL_4:
  while ( RtlQueryRegistryValues(RelativeTo[4 * v4], (&Path)[2 * v4], &QueryTable, 0LL, 0LL) < 0 )
  {
    ++v4;
    result = 0xFFFFLL;
    if ( !--v5 )
      return result;
  }
  result = v7;
  *a2 = v7;
  return result;
}
