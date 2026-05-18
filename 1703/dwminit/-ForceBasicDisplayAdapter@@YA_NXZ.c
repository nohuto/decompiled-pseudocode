/*
 * XREFs of ?ForceBasicDisplayAdapter@@YA_NXZ @ 0x180002338
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180002670 (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     <none>
 */

bool ForceBasicDisplayAdapter(void)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  v1 = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\DWM",
    L"ForceBasicDisplayAdapterOnDWMRestart",
    0x20000010u,
    0LL,
    &v1,
    &v2);
  return v1 == 1;
}
