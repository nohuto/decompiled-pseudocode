/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180057050
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180059BFC (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x18005AA60 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AE60 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005AEE4 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B270 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x18005B664 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005B7EC (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C3BC (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  int v4; // esi
  int v5; // r14d
  char v6; // bp
  bool v7; // dl
  bool v8; // dl
  int v10; // [rsp+28h] [rbp-40h] BYREF
  HWND v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 160LL))(*((_QWORD *)this + 36)) )
  {
    v13 = 0LL;
    CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp *)((char *)this + 152), a2, &v12);
    if ( v12 )
    {
      v4 = CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow((CImmersiveApp *)((char *)this + 152), v12);
      if ( v4 < 0 )
        goto LABEL_7;
      v6 = 1;
    }
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 152)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus((char *)this + 152, 0LL);
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 152), v7);
    }
LABEL_7:
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  if ( (*((_DWORD *)this + 106) & 2) == 0 )
  {
    v5 = 2;
    *((_DWORD *)this + 106) |= 2u;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 532));
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 152)) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((char *)this + 152);
    if ( (*((_DWORD *)this + 87) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((char *)this + 152);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 152)) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 152), v8);
    }
    *((_BYTE *)this + 632) = 1;
    *((_DWORD *)this + 159) = 1;
  }
  if ( !v6 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 152)) )
    CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
  if ( v6 )
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 152));
  if ( v5 )
  {
    v10 = v5;
    v11 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)&v10,
      1uLL);
  }
  return (unsigned int)v4;
}
