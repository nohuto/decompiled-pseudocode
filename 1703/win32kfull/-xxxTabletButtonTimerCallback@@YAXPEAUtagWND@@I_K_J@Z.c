/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C019F640
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C019F594 (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonTimerCallback(struct tagWND *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct tagTABLET_BUTTON_ACTION *v4; // rcx
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = gpTabBtnAction;
  if ( gpTabBtnAction )
  {
    v6 = a4[12];
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    ++a4[2];
    v7 = v6 & 0x10;
    v10[1] = a4;
    xxxTabletButtonExecuteAction(v4, v7 != 0, 0LL);
    if ( v7 )
    {
      gpTabBtnAction = 0LL;
    }
    else
    {
      v8 = 500LL;
      if ( a4[13] != 500 )
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, 500, (int)xxxTabletButtonTimerCallback, 0);
    }
    ThreadUnlock1(v9, v8);
  }
}
