/*
 * XREFs of ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180015C7C
 * Callers:
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180015758 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18001597C (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180015BB0 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800118DC (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_TryPresentDesktopExperience(
        CApplicationManager *a1,
        __int64 a2,
        int a3,
        struct IImmersiveMonitor *a4)
{
  int GlobalSyncEventHandler; // eax
  struct ISyncIAMEventHandler *v9; // rbx
  struct IObjectArray *v10; // rcx
  struct ISyncIAMEventHandler *v11[3]; // [rsp+40h] [rbp-18h] BYREF
  struct IObjectArray *v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v11[1] = (struct ISyncIAMEventHandler *)-2LL;
    (*(void (__fastcall **)(_QWORD *, struct IObjectArray **))(**((_QWORD **)a1 + 71) + 32LL))(
      *((_QWORD **)a1 + 71),
      &v12);
    if ( (unsigned int)v12 > 1
      && (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 67) + 56LL))(*((_QWORD **)a1 + 67)) == 1
      && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a1 + 68) + 88LL))(
           *((_QWORD **)a1 + 68),
           a2) )
    {
      v12 = 0LL;
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(a1, a4, &v12) >= 0 )
      {
        v11[0] = 0LL;
        GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler(a1, v11);
        v9 = v11[0];
        if ( GlobalSyncEventHandler >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, _QWORD **, _QWORD, int, int, int))(*(_QWORD *)v11[0] + 24LL))(
            v11[0],
            v12,
            (_QWORD **)a1 + 32,
            0LL,
            1,
            a3,
            0xFFFF);
        if ( v9 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v10->lpVtbl->Release)(v10);
      }
    }
  }
}
