/*
 * XREFs of ?GetMitConfig@@YAKXZ @ 0x180194E84
 * Callers:
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180194C10 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetMitConfig(void)
{
  unsigned int v0; // ebx
  DWORD cbData; // [rsp+40h] [rbp+8h] BYREF
  DWORD Type; // [rsp+48h] [rbp+10h] BYREF
  unsigned int Data; // [rsp+50h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  v0 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"EnableMitInputProcessing", 0LL, &Type, (LPBYTE)&Data, &cbData)
        && Type == 4
        && cbData == 4 )
      {
        return Data;
      }
    }
  }
  return v0;
}
