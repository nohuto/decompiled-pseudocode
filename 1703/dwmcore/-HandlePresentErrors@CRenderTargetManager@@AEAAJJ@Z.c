/*
 * XREFs of ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18006B420
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x180144C30 (-PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C882C (-IsOOM@@YA_NJ@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18013167C (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180189608 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::HandlePresentErrors(CRenderTargetManager *this, int a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v6; // ecx

  v3 = CComposition::RenderingStatusFromHr(this);
  CComposition::ProcessRenderingStatus(*(_QWORD *)(v4 + 16), v3);
  if ( a2 < 0 && a2 != -2147024769 && a2 != -2147024882 && !IsOOM(a2) )
  {
    if ( a2 == -2003304442 || a2 == -2003304307 )
      return 0;
    else
      MilUnexpectedError(v6, L"presentation error");
  }
  return (unsigned int)a2;
}
