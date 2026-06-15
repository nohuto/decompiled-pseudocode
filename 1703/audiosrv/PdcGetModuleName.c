/*
 * XREFs of PdcGetModuleName @ 0x180037054
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180034EBC (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcGetModuleName(__int64 a1, WCHAR *a2)
{
  DWORD LastError; // ebx
  HMODULE hModule; // [rsp+30h] [rbp+8h] BYREF

  LastError = 0;
  hModule = 0LL;
  if ( !GetModuleHandleExW(6u, &ModuleName, &hModule) || !GetModuleFileNameW(hModule, a2, 0x40u) )
    LastError = GetLastError();
  return LastError != 0 ? 0xC0000001 : 0;
}
