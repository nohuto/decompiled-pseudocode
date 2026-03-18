/*
 * XREFs of ?GetRemoteAppRegion@CHwndRenderTargetRemoteApp@@UEAAPEAUHRGN__@@XZ @ 0x1800CC4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRGN __fastcall CHwndRenderTargetRemoteApp::GetRemoteAppRegion(CHwndRenderTargetRemoteApp *this)
{
  return *(HRGN *)(*((_QWORD *)this + 104) + 40LL);
}
