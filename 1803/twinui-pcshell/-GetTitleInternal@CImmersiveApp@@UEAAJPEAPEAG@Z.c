/*
 * XREFs of ?GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18012E590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetTitleInternal(CImmersiveApp *this, unsigned __int16 **a2)
{
  *a2 = 0LL;
  return CImmersiveApp::CImmersiveWindowCollection::GetTitle((CImmersiveApp *)((char *)this + 152), a2);
}
