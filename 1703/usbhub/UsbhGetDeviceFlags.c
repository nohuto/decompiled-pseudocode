/*
 * XREFs of UsbhGetDeviceFlags @ 0x1C001E9D0
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C001E938 (UsbhCheckHubErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C001F7BC (UsbhCheckDeviceErrata.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C001EAF4 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhGetDeviceFlags(unsigned __int16 *a1, _QWORD *a2, char a3)
{
  int v4; // eax
  const wchar_t *v5; // r8
  int v6; // r10d
  __int64 v8; // r9
  NTSTATUS result; // eax
  const wchar_t *v11; // r8
  __int64 v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  wchar_t pszDest[40]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0LL;
  v4 = a1[6];
  v5 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X&REV_%04X";
  v6 = a1[5];
  v8 = a1[4];
  v13 = 0uLL;
  if ( a3 != 1 )
    v5 = L"USB:USB\\VID_%04X&PID_%04X&REV_%04X";
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v5, v8, v6, v4);
  if ( result < 0 )
    goto LABEL_8;
  KseQueryDeviceFlags(pszDest, L"USB", &v13);
  v11 = L"USB:ROOT_HUB\\VID_%04X&PID_%04X";
  if ( a3 != 1 )
    v11 = L"USB:USB\\VID_%04X&PID_%04X";
  LODWORD(v12) = a1[5];
  result = RtlStringCbPrintfW(pszDest, 0x50uLL, v11, a1[4], v12);
  if ( result < 0 )
  {
LABEL_8:
    *a2 = 0LL;
  }
  else
  {
    KseQueryDeviceFlags(pszDest, L"USB", (char *)&v13 + 8);
    result = DWORD2(v13) | v13;
    *a2 = *((_QWORD *)&v13 + 1) | v13;
  }
  return result;
}
