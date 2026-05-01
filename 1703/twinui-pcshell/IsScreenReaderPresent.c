/*
 * XREFs of IsScreenReaderPresent @ 0x18014B1D8
 * Callers:
 *     ?ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ @ 0x18014B308 (-ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

bool IsScreenReaderPresent()
{
  LSTATUS ValueW; // ecx
  signed int v1; // eax
  bool v2; // zf
  char *v3; // rax
  BOOL pvParam; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  wchar_t Str[264]; // [rsp+50h] [rbp-B0h] BYREF

  pvParam = 1;
  memset(Str, 0, 0x208uLL);
  pcbData[0] = 520;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Accessibility",
             L"Configuration",
             2u,
             0LL,
             Str,
             pcbData);
  if ( ValueW )
    Str[0] = 0;
  v1 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v1 = ValueW;
  if ( v1 >= 0 && wcsstr(Str, L"narrator") )
    goto LABEL_10;
  pvParam = 0;
  SystemParametersInfoW(0x46u, 0, &pvParam, 0);
  v2 = !pvParam;
  if ( !pvParam )
  {
    v3 = (char *)OpenMutexW(0x100000u, 0, L"NarratorRunning");
    pvParam = (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
LABEL_10:
    v2 = !pvParam;
  }
  return !v2;
}
