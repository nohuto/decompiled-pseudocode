/*
 * XREFs of ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x140008034
 * Callers:
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020F0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckGUIHandleQuota(unsigned int a1, DWORD a2, DWORD a3)
{
  unsigned int v3; // edi
  HANDLE CurrentProcess; // rax
  DWORD GuiResources; // eax
  unsigned int v6; // ebx
  DWORD v7; // esi
  unsigned int v8; // ebx
  unsigned int Data; // [rsp+50h] [rbp+8h] BYREF
  DWORD Type; // [rsp+58h] [rbp+10h] BYREF
  DWORD cbData; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  cbData = a3;
  Type = a2;
  Data = a1;
  v3 = -2003304445;
  CurrentProcess = GetCurrentProcess();
  GuiResources = GetGuiResources(CurrentProcess, 1u);
  v6 = dword_14000E108;
  v7 = GuiResources;
  if ( GuiResources >= dword_14000E108 )
  {
    if ( !dword_14000E108 )
    {
      v8 = 10000;
      if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
      {
        cbData = 4;
        if ( !RegQueryValueExW(hKey, lpValueName, 0LL, &Type, (LPBYTE)&Data, &cbData) && Type == 4 && Data )
          v8 = Data;
        RegCloseKey(hKey);
      }
      v6 = v8 - (v8 >> 3);
      dword_14000E108 = v6;
    }
    if ( v7 >= v6 )
      return (unsigned int)-2147024882;
  }
  return v3;
}
