/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C009D190
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0049830 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C011208C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1C01241E4 (xxxBroadcastMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessageIL @ 0x1C00CC8E0 (_PostTransformableMessageIL.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C010ED78 (GetPrimaryMonitorRectForWindow.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C011208C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01208E4 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // ebx
  int v12; // ebp
  __int64 v13; // rcx
  struct tagBWL *v14; // rdi
  _QWORD *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int16 v22; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r15
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  struct _LARGE_STRING *v30; // r9
  _WORD *v31; // rcx
  unsigned __int16 v32; // ax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  struct tagBWL *v38; // [rsp+50h] [rbp-98h]
  _BYTE v39[8]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v40; // [rsp+60h] [rbp-88h]
  _BYTE v41[16]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v42[3]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v43[88]; // [rsp+90h] [rbp-58h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+F0h] [rbp+8h]
  int v45; // [rsp+F8h] [rbp+10h]

  v10 = a2;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v45 = 1;
    UserSetLastError(87LL, a2);
  }
  else
  {
    v45 = 0;
  }
  v12 = a7;
  if ( !a7 && (v10 == 26 || v10 == 29 || v10 == 21 || v10 == 295 || v10 == 794 || v10 > 0x323 && v10 <= 0x325) )
    v12 = 1;
  if ( a1 )
    goto LABEL_11;
  if ( v10 >= 0x1A )
  {
    if ( v10 <= 0x1B )
    {
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v39, a4) )
          return 0LL;
        PushW32ThreadLock(v40, v43, Win32FreePool);
        a4 = (struct _LARGE_STRING *)v39;
      }
      xxxSystemBroadcastMessage(v10, a3, (__int64)a4, a5, a6, v12, a8);
      if ( a4 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v43, v34, v35, v36);
      return 1LL;
    }
    if ( v10 == 30 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) == 0 )
        return 0LL;
    }
    else
    {
      if ( v10 == 42 )
      {
        xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v12, a8);
        return 1LL;
      }
      if ( v10 - 712 <= 1 )
      {
        xxxSystemBroadcastMessage(v10, a3, (__int64)a4, a5, a6, v12, a8);
        return 1LL;
      }
    }
  }
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL);
  if ( !a1 )
  {
    UserSetLastError(5LL, a2);
    return 0LL;
  }
LABEL_11:
  v38 = BuildHwndList(*(_QWORD *)(a1 + 112), (struct tagWND *)2, 0LL);
  v14 = v38;
  if ( !v38 )
    return 0LL;
  v15 = (_QWORD *)((char *)v38 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v17 = *((_QWORD *)v38 + 4);
  v18 = CurrentProcessWin32Process;
  if ( v17 == 1 )
    goto LABEL_13;
  do
  {
    LOBYTE(v16) = 1;
    v20 = HMValidateHandleNoSecure(v17, v16);
    v21 = v20;
    if ( v20 )
    {
      if ( (*(_WORD *)(v20 + 82) & 0x3FFF) != 0x29C )
      {
        v22 = *(_WORD *)(*(_QWORD *)(v20 + 168) + 8LL);
        v16 = gpsi;
        if ( *(_WORD *)(gpsi + 892LL) != v22
          && gaOleMainThreadWndClass != v22
          && (!v45 || (*(_BYTE *)(v21 + 61) & 2) == 0)
          && (v10 - 784 > 1
           || (*(_BYTE *)(v21 + 71) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v21 + 16) + 464LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v21 + 320) == 1)
          && (a8 != 2 || *(_DWORD *)(v21 + 320) != 1 || (*(_BYTE *)(v21 + 306) & 0x40) != 0) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v42[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v42;
          v24 = 1LL;
          v42[1] = v21;
          _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
          v25 = 0LL;
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout(v21, 0, 0, 0LL, v12, 1);
            goto LABEL_30;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v21 + 120) )
                PostTransformableMessageIL((struct tagWND *)v21, v10, a3, (__int64)a4, v12);
              goto LABEL_30;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v21,
                v10,
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
                v37 = *(_QWORD *)(v21 + 16);
                if ( *(_QWORD *)(v37 + 400) != v18 || (*(_DWORD *)(v37 + 464) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v21, v10, a3, a4, v12);
                }
                else
                {
                  _InterlockedAdd(&glSendMessage, 1u);
                  xxxSendTransformableMessageTimeout(v21, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_30;
              }
              if ( a5 != 6 )
                goto LABEL_30;
            }
            v33 = xxxSendTransformableMessageTimeout(
                    v21,
                    *(_DWORD *)a6,
                    *((_DWORD *)a6 + 1),
                    *((_QWORD *)a6 + 1),
                    v12,
                    1);
            v25 = 0LL;
            if ( v33 || a5 != 6 )
            {
LABEL_30:
              ThreadUnlock1(v24, v25);
              goto LABEL_31;
            }
          }
          v26 = 0LL;
          if ( v10 < 0x1A )
            goto LABEL_33;
          if ( v10 <= 0x1B )
          {
            if ( a4 )
            {
              v31 = (_WORD *)*((_QWORD *)a4 + 1);
              if ( *v31 )
              {
                v32 = UserAddAtomEx(v31, 0LL, 2LL);
                v26 = v32;
                if ( !v32 )
                  goto LABEL_29;
              }
              else
              {
                v26 = -1LL;
              }
            }
            if ( !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v21 + 16), v10, a3, v26, 0LL)
              && (unsigned __int64)(v26 + 1) > 1 )
            {
              UserDeleteAtom((unsigned __int16)v26);
            }
            goto LABEL_29;
          }
          if ( v10 == 126 )
          {
            PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v41, v21);
            v28 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
            v29 = 126LL;
            v30 = (struct _LARGE_STRING *)((unsigned __int16)(v28.m128i_i16[0]
                                                            - PrimaryMonitorRectForWindow->m128i_i64[0]) | ((unsigned __int16)(v28.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
          }
          else
          {
LABEL_33:
            v30 = a4;
            v29 = v10;
          }
          xxxSendNotifyMessage(v21, v29, a3, v30, v12);
LABEL_29:
          v18 = CurrentProcessWin32Process;
          goto LABEL_30;
        }
      }
    }
LABEL_31:
    v17 = *++v15;
  }
  while ( *v15 != 1LL );
  v14 = v38;
LABEL_13:
  FreeHwndList(v14);
  return 1LL;
}
