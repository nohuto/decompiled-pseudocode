/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300
 * Callers:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0018FA0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004CF44 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     NtUserPostMessage @ 0x1C0055CC0 (NtUserPostMessage.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C0220E18 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005505C (TransformMessageBetweenCoordinateSpaces.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     _PostThreadMessage @ 0x1C00CBC1C (_PostThreadMessage.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ProcessSuspendedPostMessage @ 0x1C010736C (ProcessSuspendedPostMessage.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01E5BD0 (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  unsigned __int64 v6; // rdi
  struct tagWND *v7; // r14
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  _DWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KEVENT *v28; // rcx
  __int64 v29; // rax
  char v30[8]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v31[3]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp+5Fh] BYREF
  unsigned __int64 v33; // [rsp+E0h] [rbp+67h] BYREF
  struct _LARGE_STRING *v34; // [rsp+E8h] [rbp+6Fh] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v6 = a3;
  v7 = (struct tagWND *)a1;
  if ( !a5 )
  {
    SetUnavailableInputSource(v30);
    a4 = v34;
    a2 = v32;
    a5 = (struct tagINPUT_MESSAGE_SOURCE *)v30;
  }
  if ( (unsigned int)a2 < 0x400
    && ((a1 = 512LL, (MessageTable[(unsigned int)a2] & 0x200) != 0) || (_DWORD)a2 == 537 && (v6 & 0x8000) != 0)
    || (_DWORD)a2 == 536 && (v6 & 0x8000) != 0 )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
  if ( v7 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, v6, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  if ( !v7 )
    return (unsigned int)PostThreadMessage(gptiCurrent, a2, v6) != 0;
  v9 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 376LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v11 = v32;
  if ( v9 == CurrentProcessWin32Process )
    goto LABEL_31;
  if ( v32 > 0xD0 )
  {
    if ( v32 == 272 )
    {
LABEL_30:
      UserSetLastError(5LL);
      return 0LL;
    }
    if ( v32 != 353 && v32 != 424 && v32 != 563 && v32 != 648 )
    {
LABEL_31:
      v12 = 0LL;
      v13 = 0;
      if ( v32 - 992 <= 8 )
      {
        v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v31;
        ++*((_DWORD *)v7 + 2);
        v31[1] = v7;
        v16 = xxxDDETrackPostHook(&v32, v7, 0);
        if ( v16 != 2 )
        {
          ThreadUnlock1(v15, v14);
          return v16;
        }
        v11 = v32;
        v13 = 1;
        v6 = v33;
      }
      v17 = *((_QWORD *)v7 + 2);
      if ( (unsigned int)(v11 - 912) <= 0xF || (_DWORD)v11 == 30 )
      {
        v18 = *(_QWORD *)(v17 + 736);
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 24) == (_DWORD)v11 && *(_QWORD *)(v18 + 16) == *(_QWORD *)v7 )
          {
            DelQEntry(v17 + 728, v18, 1LL);
            v11 = v32;
          }
        }
      }
      if ( (unsigned int)(v11 - 256) <= 9 )
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v17 + 384));
        goto LABEL_50;
      }
      if ( (_DWORD)v11 == 576 )
      {
        if ( HMValidateHandle((__int64)v34, 20) )
          goto LABEL_50;
      }
      else
      {
        if ( (_DWORD)v11 != 281 )
        {
LABEL_51:
          if ( (*(_DWORD *)(v17 + 1096) & 0x20) == 0
            || v17 == gptiCurrent
            || (unsigned int)ProcessSuspendedPostMessage(v17, v7, v11, v6, v34) )
          {
            v21 = 0;
            if ( *(_DWORD *)(v17 + 744) < gUserPostMessageLimit )
            {
              v25 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
              v24 = v25;
              if ( v25 )
              {
                memset(v25, 0, 0xA0uLL);
                if ( *(_DWORD *)(v17 + 748) == 2 )
                  v24[25] |= 8u;
                else
                  v24[25] |= 4u;
                v26 = *(_QWORD **)(v17 + 736);
                if ( v26 )
                {
                  *v26 = v24;
                  *((_QWORD *)v24 + 1) = *(_QWORD *)(v17 + 736);
                }
                else
                {
                  *(_QWORD *)(v17 + 728) = v24;
                }
                ++*(_DWORD *)(v17 + 744);
                *(_QWORD *)(v17 + 736) = v24;
                if ( a6 && (unsigned int)IsWindowDesktopComposed(v7) )
                  TransformMessageBetweenCoordinateSpaces(v32, 0, (__int64 *)&v33, (__int16 *)&v34, v7, 0LL);
                if ( (*((_DWORD *)v7 + 92) & 0xF) != 0 )
                {
                  if ( (*((_DWORD *)v7 + 92) & 0xF) == 1 )
                    v27 = *(_QWORD *)(gpsi + 5352LL);
                  else
                    v27 = *(_QWORD *)(gpsi + 5368LL);
                }
                else
                {
                  v27 = *(_QWORD *)(gpsi + 5344LL);
                }
                StoreQMessage(
                  (_DWORD)v24,
                  (_DWORD)v7,
                  v32,
                  v33,
                  (__int64)v34,
                  0,
                  0,
                  0,
                  0LL,
                  0,
                  (__int64)a5,
                  v27,
                  0LL,
                  0LL);
                v23 = v32;
                if ( v32 == 576 || v32 == 281 )
                {
                  v22 = 2LL * (unsigned __int16)v34;
                  v23 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v34);
                  if ( v23 )
                    HMChangeOwnerThread(v23, v17);
                }
                if ( (*(_DWORD *)(v17 + 440) & 1) == 0 )
                {
                  v22 = 264LL;
                  *(_WORD *)(*(_QWORD *)(v17 + 400) + 6LL) |= 0x108u;
                  *(_WORD *)(*(_QWORD *)(v17 + 400) + 4LL) |= 0x108u;
                  if ( (*(_WORD *)(*(_QWORD *)(v17 + 400) + 10LL) & 0x108) != 0 )
                    KeSetEvent(*(PRKEVENT *)(v17 + 648), 2, 0);
                }
                if ( v32 == 786 )
                {
                  if ( (*(_DWORD *)(v17 + 1096) & 0x40000) != 0 )
                  {
                    v28 = *(struct _KEVENT **)(v17 + 1256);
                    if ( v28 )
                      KeSetEvent(v28, 1, 0);
                  }
                  SetWakeBit(v17, 0x80u);
                }
                v21 = 1;
              }
              else
              {
                UserSetLastError(8LL);
                v24 = 0LL;
              }
            }
            else
            {
              UserSetLastError(1816LL);
              v24 = 0LL;
            }
            v29 = *(_QWORD *)(v17 + 384);
            if ( v17 == *(_QWORD *)(v29 + 32) )
              *(_QWORD *)(v29 + 40) = v24;
            if ( v13 )
              ThreadUnlock1(v23, v22);
            if ( v21 )
              return (unsigned __int64)v24;
            return v12;
          }
          goto LABEL_45;
        }
        if ( HMValidateHandle((__int64)v34, 21) )
        {
LABEL_50:
          v11 = v32;
          goto LABEL_51;
        }
      }
LABEL_45:
      if ( v13 )
        ThreadUnlock1(v20, v19);
      return 0LL;
    }
LABEL_26:
    if ( (!gbEnforceUIPI || *(_QWORD *)v9 == gpepCSRSS)
      && (*(_DWORD *)(v9 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
       || *(_DWORD *)(v9 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736)) )
    {
      goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( v32 == 208 )
    goto LABEL_26;
  switch ( v32 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_26;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(*((_QWORD *)v7 + 21) + 10LL) || (*((_BYTE *)v7 + 68) & 0x20) == 0 )
        goto LABEL_31;
      UserSetLastError(5LL);
      UserSetLastError(5LL);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_30;
    default:
      goto LABEL_31;
  }
  return result;
}
