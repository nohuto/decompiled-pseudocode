/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180022F48
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180021180 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CTopLevelWindow3D::OnWindowSizeUpdated(CTopLevelWindow3D *this)
{
  int v1; // eax
  __int64 v3; // rax
  int v4; // eax
  int started; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 93);
  if ( !v1 || *((_DWORD *)this + 92) == v1 )
  {
    v3 = *((_QWORD *)this + 45);
    if ( v3 )
    {
      if ( !*(_BYTE *)(v3 + 72) )
      {
        v4 = *((_DWORD *)this + 92);
        if ( v4 != 3 && v4 != 6 )
          CRenderDataVisual::ClearInstructions(this);
      }
    }
  }
  else if ( !EqualRect((const RECT *)(*((_QWORD *)this + 41) + 48LL), (const RECT *)((char *)this + 308)) )
  {
    if ( *((_QWORD *)this + 45) )
      CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
    started = CTopLevelWindow3D::StartAnimation((__int64)this, *((_DWORD *)this + 93));
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)started,
        v6);
  }
}
