/*
 * XREFs of ?IsApplicationVisible@CImmersiveApp@@UEBA_NXZ @ 0x180057F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationVisible(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 106) & 4) != 0;
}
