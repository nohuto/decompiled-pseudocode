/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002E6F4
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18002C960 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074B18 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
