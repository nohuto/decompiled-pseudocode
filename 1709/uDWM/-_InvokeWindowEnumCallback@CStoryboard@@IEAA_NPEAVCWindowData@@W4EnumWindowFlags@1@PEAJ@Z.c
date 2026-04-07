/*
 * XREFs of ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x180004A90
 * Callers:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180004948 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 * Callees:
 *     ?GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800368F0 (-GetStoryboardInfo@CLauncherDismiss@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     ?GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ @ 0x1800369D0 (-GetStoryboardInfo@CLauncherLaunch@@UEAAPEBUStoryboardInfo@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x18008F19C (-HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z.c)
 */

char __fastcall CStoryboard::_InvokeWindowEnumCallback(CLauncherDismiss *a1, __int64 a2, unsigned int a3, int *a4)
{
  int v5; // ebp
  char v9; // di
  __int64 i; // rsi
  const struct StoryboardInfo *(__fastcall *v12)(CLauncherLaunch *__hidden); // rax
  const struct StoryboardInfo *StoryboardInfo; // rax
  const struct StoryboardInfo *(__fastcall *v14)(CLauncherDismiss *__hidden); // rax
  const struct StoryboardInfo *v15; // rax

  *a4 = 0;
  v5 = *(_DWORD *)(a2 + 600) & 0xFFF;
  v9 = 1;
  if ( v5 != 4095 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v12 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherLaunch *__hidden))(*(_QWORD *)a1 + 16LL);
      if ( v12 == CLauncherDismiss::GetStoryboardInfo )
        StoryboardInfo = CLauncherDismiss::GetStoryboardInfo(a1);
      else
        StoryboardInfo = v12 == CLauncherLaunch::GetStoryboardInfo ? CLauncherLaunch::GetStoryboardInfo(a1) : v12(a1);
      if ( (unsigned int)i >= *((_DWORD *)StoryboardInfo + 1) )
        break;
      v14 = *(const struct StoryboardInfo *(__fastcall **)(CLauncherDismiss *__hidden))(*(_QWORD *)a1 + 16LL);
      if ( v14 == CLauncherDismiss::GetStoryboardInfo )
      {
        v15 = CLauncherDismiss::GetStoryboardInfo(a1);
      }
      else if ( v14 == CLauncherLaunch::GetStoryboardInfo )
      {
        v15 = CLauncherLaunch::GetStoryboardInfo(a1);
      }
      else
      {
        v15 = v14(a1);
      }
      if ( v5 == *(_DWORD *)(*((_QWORD *)v15 + 1) + 4 * i)
        || (*(unsigned __int8 (__fastcall **)(CLauncherDismiss *))(*(_QWORD *)a1 + 48LL))(a1)
        && CTransitionVisualController::HasUsableBitmapResource(
             *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
             *(HWND *)(a2 + 40),
             a1) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(CLauncherDismiss *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 112LL))(
                a1,
                a2,
                a3,
                a4)
          || *a4 < 0 )
        {
          return 0;
        }
        return v9;
      }
    }
  }
  return v9;
}
