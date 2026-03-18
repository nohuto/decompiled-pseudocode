/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01D9940
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v5; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 TopLevelWindow; // r9
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[5]; // [rsp+58h] [rbp-40h] BYREF

  v2 = a1 - 15;
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v5 )
    {
      TopLevelHost = CoreWindowProp::GetTopLevelHost(*(struct tagWND **)(gpqForeground + 120LL));
      TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
      if ( !TopLevelWindow )
        TopLevelWindow = v5;
      if ( (dword_1C02DD86C[4 * v2] & 1) != 0 || (v10 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 24) + 328LL)) == 0 )
      {
        if ( a1 < 0x17 )
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 408LL),
            0x11u,
            TopLevelWindow,
            0,
            0LL,
            a1,
            0LL);
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, TopLevelWindow);
        v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v14;
        v14[1] = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        memset(v15, 0, sizeof(v15));
        v15[0] = 0LL;
        v15[2] = 0LL;
        LODWORD(v15[1]) = 3;
        v15[3] = a2;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v15) )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v10 + 16), 0);
        ThreadUnlock1(v13, v12);
      }
    }
  }
}
