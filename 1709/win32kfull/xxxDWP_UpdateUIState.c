/*
 * XREFs of xxxDWP_UpdateUIState @ 0x1C007BBB4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxDWP_UpdateUIState(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v6; // rsi
  int v7; // eax
  int v8; // eax
  __int64 v10; // r14
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  struct tagBWL *v13; // rsi
  _QWORD *i; // rbx
  __int64 v15; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  _QWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a2;
  v4 = a2 >> 16;
  LOWORD(v6) = a2;
  if ( (a2 & 0xFFF80000) != 0 || (unsigned __int16)a2 > 3u || a3 )
    return 0LL;
  v7 = *gpsi;
  if ( (_WORD)a2 == 3 )
  {
    if ( (v7 & 0x80u) != 0 )
      return 0LL;
    v20 = *(_DWORD *)(gpsi + 9980LL);
    if ( (v20 & 0x20) != 0 || v20 >= 0 || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      return 0LL;
    LOBYTE(v4) = 3;
    v6 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
    v3 = v6 | 0x30000;
LABEL_10:
    if ( (unsigned __int16)v6 == 1 )
    {
      if ( (v4 & 2) != 0 )
        SetOrClrWF(1LL, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(1LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
        goto LABEL_16;
      v19 = 1LL;
    }
    else
    {
      if ( (unsigned __int16)v6 != 2 )
      {
        if ( (unsigned __int16)v6 == 3 )
        {
          if ( (*gpsi & 0x40) != 0 )
          {
            SetOrClrWF(0LL, a1, 2944LL, 1LL);
            SetOrClrWF(0LL, a1, 2880LL, 1LL);
            v3 = 196610LL;
          }
          else
          {
            SetOrClrWF(1LL, a1, 2944LL, 1LL);
            SetOrClrWF(1LL, a1, 2880LL, 1LL);
            v3 = 196609LL;
          }
        }
        goto LABEL_16;
      }
      if ( (v4 & 2) != 0 )
        SetOrClrWF((unsigned int)(unsigned __int16)v6 - 2, a1, 2880LL, 1LL);
      if ( (v4 & 1) != 0 )
        SetOrClrWF(0LL, a1, 2944LL, 1LL);
      if ( (v4 & 4) == 0 )
      {
LABEL_16:
        if ( *(_QWORD *)(a1 + 112) )
        {
          if ( gptiCurrent == gTermIO[2] || (v10 = 0LL, gptiCurrent == qword_1C032AB00) )
            v10 = 1LL;
          v11 = BuildHwndList(*(_QWORD *)(a1 + 112), (struct tagWND *)2, 0LL);
          v13 = v11;
          if ( v11 )
          {
            for ( i = (_QWORD *)((char *)v11 + 32); *i != 1LL; ++i )
            {
              LOBYTE(v12) = 1;
              v15 = HMValidateHandleNoSecure(*i, v12);
              if ( v15 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
                *(_QWORD *)(ThreadWin32Thread + 392) = v21;
                v21[1] = v15;
                _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
                if ( v10 )
                  xxxSendNotifyMessage(v15, 296LL, v3, 0LL, 1);
                else
                  xxxSendMessage(v15, 296LL, v3, 0LL);
                ThreadUnlock1(v18, v17);
              }
            }
            FreeHwndList(v13);
          }
        }
        return 0LL;
      }
      v19 = 0LL;
    }
    SetOrClrWF(v19, a1, 2820LL, 1LL);
    goto LABEL_16;
  }
  if ( (v7 & 0x80u) != 0
    || (v8 = *(_DWORD *)(gpsi + 9980LL), (v8 & 0x20) != 0)
    || v8 >= 0
    || (GetAppCompatFlags2(1024LL) & 2) != 0 )
  {
    LOWORD(v4) = v4 & 0xFFFC;
  }
  if ( (_WORD)v4 )
    goto LABEL_10;
  return 0LL;
}
