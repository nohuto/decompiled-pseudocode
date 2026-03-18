/*
 * XREFs of xxxSendMessageCallback @ 0x1C003CBE4
 * Callers:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C003CAB0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C65F4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     xxxBroadcastMessage @ 0x1C011AC14 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r11
  __int64 v12; // r12
  __int64 *v13; // rbx
  int v14; // r13d
  int v15; // esi
  int v16; // eax
  ULONG_PTR v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r15
  int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+80h] [rbp-48h]
  __int64 v30; // [rsp+88h] [rbp-40h]
  int v31; // [rsp+D8h] [rbp+10h]
  int v32; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+E0h] [rbp+18h]

  v33 = a3;
  v9 = a4;
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 1;
  if ( a5 || (v31 = 1, a6 != 1) )
    v31 = 0;
  if ( a2 < 0x400 )
  {
    if ( (MessageTable[a2] & 0x200) == 0 && (a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 )
  {
    UserSetLastError(1159LL);
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
          v19 = gpKernelHandleTable,
          *(struct tagWND **)(gpKernelHandleTable + 16LL * (unsigned __int16)v18) != a1)
      || *(_BYTE *)(v17 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v17, 1uLL);
    }
    if ( v31 || gptiCurrent != *((_QWORD *)a1 + 2) )
    {
      v20 = 0LL;
      if ( a5 )
      {
        v19 = a7 != 0 ? 257 : 1;
        LODWORD(v25) = a7 != 0 ? 257 : 1;
        v26 = a5;
        v27 = a6;
        v20 = &v25;
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v19);
      return xxxInterSendMsgEx(
               (_DWORD)a1,
               a2,
               v33,
               a4,
               0LL,
               CurrentThreadDpiAwarenessContext,
               *((_QWORD *)a1 + 2),
               (__int64)v20,
               a8,
               a9);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x20) != 0 )
    {
      v28 = *(_QWORD *)a1;
      LODWORD(v27) = a2;
      v26 = a3;
      v25 = v9;
      v29 = 0LL;
      xxxCallHook(0LL, 0LL, &v25);
      a3 = v33;
      v9 = a4;
    }
    if ( (*((_BYTE *)a1 + 58) & 4) == 0 )
    {
      xxxSendMessageToClient(a1, a2, a3, v9, 0LL, 0, &a5);
LABEL_25:
      if ( v12 )
      {
        if ( a7 )
        {
          v23 = *(_DWORD **)(gptiCurrent + 400LL);
          v32 = *v23 & 8;
          *v23 |= 4u;
          **(_DWORD **)(gptiCurrent + 400LL) |= 8u;
          if ( a2 == 281 || a2 == 576 )
            _guard_dispatch_icall_fptr();
          else
            SfnDWORD((_DWORD)a1, a2, v14, a5, v12, *(_QWORD *)(gpsi + 744LL));
          **(_DWORD **)(gptiCurrent + 400LL) &= ~4u;
          v24 = *(_DWORD **)(gptiCurrent + 400LL);
          if ( v32 )
            *v24 |= 8u;
          else
            *v24 &= ~8u;
        }
        else
        {
          _guard_dispatch_icall_fptr();
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x2000) != 0 )
      {
        v29 = *(_QWORD *)a1;
        LODWORD(v28) = a2;
        v27 = v33;
        v26 = a4;
        v25 = a5;
        v30 = 0LL;
        xxxCallHook(0LL, 0LL, &v25);
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
    v25 = a5;
    v26 = a6;
    LODWORD(v27) = a7;
    v13 = &v25;
  }
  return xxxBroadcastMessage(0, a2, a3, a4, v15, (__int64)v13, a8);
}
