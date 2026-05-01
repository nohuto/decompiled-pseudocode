/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180055AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_DWORD *)this + 102) & 1;
}
