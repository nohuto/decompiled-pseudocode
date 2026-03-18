/*
 * XREFs of xxxSendMessageCallback @ 0x1C009F334
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C009E2F0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     xxxBroadcastMessage @ 0x1C01241E4 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r11
  unsigned int v10; // r14d
  __int64 v12; // r12
  __int64 *v13; // rbx
  int v14; // r13d
  int v15; // esi
  int v16; // eax
  ULONG_PTR v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // [rsp+60h] [rbp-68h] BYREF
  __int64 v24; // [rsp+68h] [rbp-60h]
  __int64 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp-48h]
  __int64 v28; // [rsp+88h] [rbp-40h]
  int v29; // [rsp+D8h] [rbp+10h]
  int v30; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v31; // [rsp+E0h] [rbp+18h]

  v31 = a3;
  v9 = a4;
  v10 = a2;
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 1;
  if ( a5 || (v29 = 1, a6 != 1) )
    v29 = 0;
  if ( (unsigned int)a2 < 0x400 )
  {
    if ( (MessageTable[(unsigned int)a2] & 0x200) == 0 && ((_DWORD)a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 )
  {
    UserSetLastError(1159LL, a2);
    return 0LL;
  }
LABEL_7:
  if ( a1 != (struct tagWND *)-1LL )
  {
    v17 = 0LL;
    LOWORD(v18) = 0;
    if ( a1 )
      v18 = *(_QWORD *)a1;
    if ( (unsigned __int64)(unsigned __int16)v18 >= *(_QWORD *)(gpsi + 8LL)
      || (v17 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v18 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v18) != a1)
      || *(_BYTE *)(v17 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v17, 1uLL);
    }
    if ( v29 || gptiCurrent != *((_QWORD *)a1 + 2) )
    {
      v19 = 0LL;
      if ( a5 )
      {
        LODWORD(v23) = a7 != 0 ? 257 : 1;
        v24 = a5;
        v25 = a6;
        v19 = &v23;
      }
      return xxxInterSendMsgEx((_DWORD)a1, a2, a3, v9, 0, *((_QWORD *)a1 + 2), (__int64)v19, a8, a9);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x20) != 0 )
    {
      v26 = *(_QWORD *)a1;
      LODWORD(v25) = a2;
      v24 = a3;
      v23 = v9;
      v27 = 0LL;
      xxxCallHook(0LL, 0LL, &v23, 4LL);
      a3 = v31;
      v9 = a4;
    }
    if ( (*((_BYTE *)a1 + 58) & 4) == 0 )
    {
      xxxSendMessageToClient(a1, v10, a3, v9, 0LL, 0, &a5);
LABEL_25:
      if ( v12 )
      {
        if ( a7 )
        {
          v21 = *(_DWORD **)(gptiCurrent + 424LL);
          v30 = *v21 & 8;
          *v21 |= 4u;
          **(_DWORD **)(gptiCurrent + 424LL) |= 8u;
          if ( v10 == 576 || v10 == 281 )
            _guard_dispatch_icall_fptr();
          else
            SfnDWORD((_DWORD)a1, v10, v14, a5, v12, *(_QWORD *)(gpsi + 744LL));
          **(_DWORD **)(gptiCurrent + 424LL) &= ~4u;
          v22 = *(_DWORD **)(gptiCurrent + 424LL);
          if ( v30 )
            *v22 |= 8u;
          else
            *v22 &= ~8u;
        }
        else
        {
          _guard_dispatch_icall_fptr();
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x2000) != 0 )
      {
        v27 = *(_QWORD *)a1;
        LODWORD(v26) = v10;
        v25 = v31;
        v24 = a4;
        v23 = a5;
        v28 = 0LL;
        xxxCallHook(0LL, 0LL, &v23, 12LL);
      }
      return 1LL;
    }
    if ( *((_QWORD *)a1 + 20) < 7uLL )
    {
      a5 = _guard_dispatch_icall_fptr();
      goto LABEL_25;
    }
    return 0LL;
  }
  if ( a5 )
  {
    v15 = 3;
    v23 = a5;
    v24 = a6;
    LODWORD(v25) = a7;
    v13 = &v23;
  }
  return xxxBroadcastMessage(0, a2, a3, a4, v15, (__int64)v13, a8);
}
