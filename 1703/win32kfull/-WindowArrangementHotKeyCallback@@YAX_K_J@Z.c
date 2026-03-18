/*
 * XREFs of ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01F1F30
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall WindowArrangementHotKeyCallback(unsigned __int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rbx
  struct tagWND *TopLevelHost; // rax
  __int64 TopLevelWindow; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v12[5]; // [rsp+58h] [rbp-40h] BYREF

  v2 = a1 - 15;
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 88LL);
    if ( v5 )
    {
      TopLevelHost = CoreWindowProp::GetTopLevelHost(*(struct tagWND **)(gpqForeground + 88LL));
      TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHost);
      if ( !TopLevelWindow )
        TopLevelWindow = v5;
      v8 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 24) + 328LL);
      if ( (dword_1C02DFCDC[4 * v2] & 1) != 0 || !v8 )
      {
        if ( a1 < 0x17 )
          PostEventMessageEx(
            *(_QWORD *)(TopLevelWindow + 16),
            *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 384LL),
            0x11u,
            TopLevelWindow,
            0,
            0LL,
            a1,
            0LL);
      }
      else
      {
        v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v11;
        ++*(_DWORD *)(v8 + 8);
        v11[1] = v8;
        memset(v12, 0, sizeof(v12));
        v12[0] = 0LL;
        v12[2] = 0LL;
        LODWORD(v12[1]) = 3;
        v12[3] = a2;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12) )
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v8 + 16), 0);
        ThreadUnlock1(v10, v9);
      }
    }
  }
}
