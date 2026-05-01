/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180057F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_BYTE *)this + 424) & 1;
}
