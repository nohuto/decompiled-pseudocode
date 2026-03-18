/*
 * XREFs of ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BA320
 * Callers:
 *     <none>
 * Callees:
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01BA27C (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonTimerCallback(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 ThreadWin32Thread; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( gpTabBtnAction )
  {
    v5 = *(_DWORD *)(a4 + 48);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = a4;
    _InterlockedIncrement((volatile signed __int32 *)(a4 + 8));
    v7 = v5 & 0x10;
    xxxTabletButtonExecuteAction(gpTabBtnAction, v7 != 0, 0LL);
    if ( v7 )
    {
      gpTabBtnAction = 0LL;
    }
    else
    {
      v8 = 500LL;
      if ( *(_DWORD *)(a4 + 52) != 500 )
        gtmridTabletButtonTimer = SetRITTimer(gtmridTabletButtonTimer, 500, (int)xxxTabletButtonTimerCallback, 0);
    }
    ThreadUnlock1(v9, v8);
  }
}
