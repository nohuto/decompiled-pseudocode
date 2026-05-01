/*
 * XREFs of ?GetHostId@CImmersiveApp@@UEAAJPEA_K@Z @ 0x18004BCF0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetHostId(CImmersiveApp *this, unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 93);
  return 0LL;
}
