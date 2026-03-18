/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C003D4E4
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F18E0 (xxxBroadcastDisplaySettingsChange.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0107A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1C011AC14 (xxxBroadcastMessage.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     _PostTransformableMessageIL @ 0x1C00C8F84 (_PostTransformableMessageIL.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0107A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0115A20 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  _QWORD *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // ebx
  unsigned __int16 DwmDependentMetric; // ax
  unsigned int v28; // edx
  struct _LARGE_STRING *v29; // r9
  _WORD *v30; // rcx
  unsigned __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // [rsp+50h] [rbp-88h]
  _BYTE v34[8]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v35; // [rsp+60h] [rbp-78h]
  _QWORD v36[3]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v37[11]; // [rsp+80h] [rbp-58h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+E0h] [rbp+8h]
  int v39; // [rsp+E8h] [rbp+10h]

  if ( a2 - 1024 <= 0xBBFF )
  {
    v39 = 1;
    UserSetLastError(87LL);
  }
  else
  {
    v39 = 0;
  }
  v12 = a7;
  if ( !a7 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 > 0x323 && a2 <= 0x325) )
    v12 = 1;
  if ( a1 )
    goto LABEL_11;
  if ( a2 >= 0x1A )
  {
    if ( a2 <= 0x1B )
    {
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v34, a4) )
          return 0LL;
        PushW32ThreadLock(v35, v37, (__int64)Win32FreePool);
        a4 = (struct _LARGE_STRING *)v34;
      }
      xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
      if ( a4 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v37);
      return 1LL;
    }
    if ( a2 == 30 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
        return 0LL;
    }
    else
    {
      if ( a2 == 42 )
      {
        xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v12, a8);
        return 1LL;
      }
      if ( a2 - 712 <= 1 )
      {
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
        return 1LL;
      }
    }
  }
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
  if ( !a1 )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
LABEL_11:
  v33 = BuildHwndList(*(_QWORD *)(a1 + 112), 2LL, 0LL);
  v15 = v33;
  if ( !v33 )
    return 0LL;
  v16 = (_QWORD *)(v33 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
  v18 = *(_QWORD *)(v33 + 32);
  v19 = CurrentProcessWin32Process;
  if ( v18 == 1 )
    goto LABEL_13;
  do
  {
    LOBYTE(v17) = 1;
    v21 = HMValidateHandleNoSecure(v18, v17);
    v22 = v21;
    if ( v21 )
    {
      if ( (*(_WORD *)(v21 + 82) & 0x3FFF) != 0x29C )
      {
        v23 = *(_WORD *)(*(_QWORD *)(v21 + 168) + 8LL);
        v17 = gpsi;
        if ( *(_WORD *)(gpsi + 892LL) != v23
          && gaOleMainThreadWndClass != v23
          && (!v39 || (*(_BYTE *)(v22 + 61) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v22 + 71) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v22 + 16) + 440LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v22 + 320) == 1)
          && (a8 != 2 || *(_DWORD *)(v22 + 320) != 1 || (*(_BYTE *)(v22 + 306) & 0x40) != 0) )
        {
          v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v36;
          v24 = 1LL;
          v36[1] = v22;
          ++*(_DWORD *)(v22 + 8);
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout(v22, a2, a3, (int)a4, 0, 0, 0LL, v12, 1);
            goto LABEL_30;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v22 + 120) )
                PostTransformableMessageIL((struct tagWND *)v22, a2, a3, (__int64)a4, v12);
              goto LABEL_30;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v22,
                a2,
                a3,
                (__int64)a4,
                *(_QWORD *)a6,
                *((_QWORD *)a6 + 1),
                *((_DWORD *)a6 + 4),
                v12,
                1);
              goto LABEL_30;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v32 = *(_QWORD *)(v22 + 16);
                if ( *(_QWORD *)(v32 + 376) != v19 || (*(_DWORD *)(v32 + 440) & 8) != 0 )
                {
                  xxxSendNotifyMessage((struct tagWND *)v22, a2, a3, a4, v12);
                }
                else
                {
                  _InterlockedAdd(&glSendMessage, 1u);
                  xxxSendTransformableMessageTimeout(v22, a2, a3, (int)a4, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_30;
              }
              if ( a5 != 6 )
                goto LABEL_30;
            }
            if ( xxxSendTransformableMessageTimeout(
                   v22,
                   a2,
                   a3,
                   (int)a4,
                   *(_DWORD *)a6,
                   *((_DWORD *)a6 + 1),
                   *((_QWORD *)a6 + 1),
                   v12,
                   1)
              || a5 != 6 )
            {
LABEL_30:
              ThreadUnlock1(v24, v17);
              goto LABEL_31;
            }
          }
          v25 = 0LL;
          if ( a2 < 0x1A )
            goto LABEL_36;
          if ( a2 <= 0x1B )
          {
            if ( a4 )
            {
              v30 = (_WORD *)*((_QWORD *)a4 + 1);
              if ( *v30 )
              {
                v31 = UserAddAtomEx(v30, 0LL, 2LL);
                v25 = v31;
                if ( !v31 )
                  goto LABEL_29;
              }
              else
              {
                v25 = -1LL;
              }
            }
            if ( !(unsigned int)PostEventMessageEx(
                                  *(_QWORD *)(v22 + 16),
                                  *(_QWORD *)(*(_QWORD *)(v22 + 16) + 384LL),
                                  9LL)
              && (unsigned __int64)(v25 + 1) > 1 )
            {
              UserDeleteAtom((unsigned __int16)v25);
            }
            goto LABEL_29;
          }
          if ( a2 == 126 )
          {
            v26 = (unsigned __int16)GetDwmDependentMetric(1LL) << 16;
            DwmDependentMetric = GetDwmDependentMetric(0LL);
            v28 = 126;
            v29 = (struct _LARGE_STRING *)(v26 | (unsigned __int64)DwmDependentMetric);
          }
          else
          {
LABEL_36:
            v29 = a4;
            v28 = a2;
          }
          xxxSendNotifyMessage((struct tagWND *)v22, v28, a3, v29, v12);
LABEL_29:
          v19 = CurrentProcessWin32Process;
          goto LABEL_30;
        }
      }
    }
LABEL_31:
    v18 = *++v16;
  }
  while ( *v16 != 1LL );
  v15 = v33;
LABEL_13:
  FreeHwndList(v15);
  return 1LL;
}
