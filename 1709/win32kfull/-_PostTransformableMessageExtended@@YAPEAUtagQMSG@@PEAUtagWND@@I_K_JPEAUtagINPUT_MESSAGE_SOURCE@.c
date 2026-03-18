/*
 * XREFs of ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0
 * Callers:
 *     _PostMessageExtended @ 0x1C00541EC (_PostMessageExtended.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C0086A48 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     NtUserPostMessage @ 0x1C00ABE80 (NtUserPostMessage.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     _PostTransformableMessage @ 0x1C00CCAC8 (_PostTransformableMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     ?GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z @ 0x1C02222F4 (-GenerateCtrlInputMessages@InteractiveControlInput@@IEAAJPEAUtagWND@@I@Z.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     _PostThreadMessage @ 0x1C009E634 (_PostThreadMessage.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00AAED0 (TransformMessageBetweenCoordinateSpaces.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1C01163F8 (ProcessSuspendedPostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 */

unsigned __int64 __fastcall _PostTransformableMessageExtended(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        struct tagINPUT_MESSAGE_SOURCE *a5,
        int a6)
{
  struct tagWND *v7; // r14
  unsigned __int64 result; // rax
  _DWORD *v9; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // r13d
  unsigned int v22; // edi
  __int64 v23; // rsi
  unsigned int DLT; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // r12d
  __int64 v30; // rcx
  _DWORD *v31; // rdi
  _DWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int16 v35; // cx
  __int64 v36; // rax
  struct _KEVENT *v37; // rcx
  tagObjLock *v38; // r14
  unsigned int v39; // eax
  tagObjLock *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  char v44[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v45; // [rsp+78h] [rbp-21h] BYREF
  tagObjLock *v46; // [rsp+80h] [rbp-19h]
  tagObjLock *DomainLockRef; // [rsp+88h] [rbp-11h]
  _QWORD v48[4]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v49; // [rsp+F8h] [rbp+5Fh] BYREF
  unsigned __int64 v50; // [rsp+100h] [rbp+67h] BYREF
  struct _LARGE_STRING *v51; // [rsp+108h] [rbp+6Fh] BYREF

  v51 = a4;
  v50 = a3;
  v49 = a2;
  v7 = (struct tagWND *)a1;
  if ( !a5 )
  {
    SetUnavailableInputSource(v44);
    a4 = v51;
    a2 = v49;
    a5 = (struct tagINPUT_MESSAGE_SOURCE *)v44;
  }
  if ( (unsigned int)a2 < 0x400
    && ((a1 = 512LL, (MessageTable[(unsigned int)a2] & 0x200) != 0) || (_DWORD)a2 == 537 && (a3 & 0x8000) != 0)
    || (_DWORD)a2 == 536 && (a3 & 0x8000) != 0 )
  {
    UserSetLastError(1159LL, a2);
    return 0LL;
  }
  v9 = 0LL;
  if ( v7 == (struct tagWND *)-1LL )
  {
    xxxBroadcastMessageEx(0LL, a2, a3, a4, 2u, 0LL, 0, 0);
    return 1LL;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( !v7 )
  {
    LOBYTE(v9) = (unsigned int)PostThreadMessage(v11, v49, v50, (__int64)v51) != 0;
    return (unsigned __int64)v9;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 400LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v18 = v49;
  v19 = CurrentProcessWin32Process;
  if ( v14 == CurrentProcessWin32Process )
    goto LABEL_34;
  if ( v49 > 0xD0 )
  {
    if ( v49 == 272 )
    {
LABEL_33:
      UserSetLastError(5LL, v16);
      return 0LL;
    }
    if ( v49 != 353 && v49 != 424 && v49 != 563 && v49 != 648 )
    {
LABEL_34:
      v21 = 0;
      if ( v49 - 992 <= 8 )
      {
        v48[0] = *(_QWORD *)(v11 + 392);
        *(_QWORD *)(v11 + 392) = v48;
        v48[1] = v7;
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
        v22 = xxxDDETrackPostHook(&v49, v7, 0);
        if ( v22 != 2 )
        {
          ThreadUnlock1(v17, v16);
          return v22;
        }
        v21 = 1;
      }
      v23 = *((_QWORD *)v7 + 2);
      DLT = DLT_POST::getDLT(v17, v16, v18, v19);
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      v46 = (tagObjLock *)(v23 + 824);
      tagObjLock::LockShared(DomainLockRef);
      tagObjLock::LockExclusive((tagObjLock *)(v23 + 824));
      v26 = v49;
      v27 = *(_QWORD *)v7;
      if ( v49 - 912 <= 0xF || v49 == 30 )
      {
        v25 = *(_QWORD *)(v23 + 792);
        if ( v25 )
        {
          if ( *(_DWORD *)(v25 + 24) == v49 && *(_QWORD *)(v25 + 16) == v27 )
          {
            DelQEntry((_QWORD *)(v23 + 784), v25);
            v26 = v49;
          }
        }
      }
      if ( (unsigned int)(v26 - 256) > 9 )
      {
        if ( (_DWORD)v26 == 576 )
        {
          LOBYTE(v25) = 20;
          if ( !HMValidateHandle((__int64)v51, v25, v26, v27) )
            goto LABEL_48;
        }
        else if ( (_DWORD)v26 == 281 )
        {
          LOBYTE(v25) = 21;
          if ( !HMValidateHandle((__int64)v51, v25, v26, v27) )
            goto LABEL_48;
        }
      }
      else
      {
        PostUpdateKeyStateEvent(*(_QWORD *)(v23 + 408));
      }
      if ( (*(_DWORD *)(v23 + 1184) & 0x20) == 0
        || v23 == W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27)
        || (unsigned int)ProcessSuspendedPostMessage(v23, v7, v49, v50, v51) )
      {
        v29 = 0;
        if ( *(_DWORD *)(v23 + 800) < gUserPostMessageLimit )
        {
          v32 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
          v31 = v32;
          if ( v32 )
          {
            memset(v32, 0, 0xA0uLL);
            if ( *(_DWORD *)(v23 + 804) == 2 )
              v31[25] |= 8u;
            else
              v31[25] |= 4u;
            v34 = *(_QWORD **)(v23 + 792);
            if ( v34 )
            {
              *v34 = v31;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v23 + 792);
            }
            else
            {
              *(_QWORD *)(v23 + 784) = v31;
            }
            ++*(_DWORD *)(v23 + 800);
            *(_QWORD *)(v23 + 792) = v31;
            if ( a6 && (unsigned int)IsWindowDesktopComposed(v7) )
              TransformMessageBetweenCoordinateSpaces(v49, 0LL, (__int64 *)&v50, (__int16 *)&v51, v7, 0LL);
            v35 = (*((_DWORD *)v7 + 92) >> 8) & 0x1FF;
            if ( v35 )
            {
              if ( v35 == *(_WORD *)(gpsi + 4960LL) )
              {
                v36 = *(_QWORD *)(gpsi + 4952LL);
              }
              else
              {
                PhysicalToLogicalDPIPoint(&v45, gpsi + 4944LL, *((unsigned int *)v7 + 92), 0LL);
                v36 = v45;
              }
            }
            else
            {
              v36 = *(_QWORD *)(gpsi + 4944LL);
            }
            StoreQMessage(v31, v7, v49, v50, v51, 0, 0LL, 0, 0LL, 0, a5, v36, 0LL, 0LL);
            v30 = v49;
            if ( v49 == 576 || v49 == 281 )
            {
              v30 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v51);
              if ( v30 )
                HMChangeOwnerThread(v30, v23);
            }
            if ( (*(_DWORD *)(v23 + 464) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v23 + 424) + 6LL) |= 0x108u;
              *(_WORD *)(*(_QWORD *)(v23 + 424) + 4LL) |= 0x108u;
              if ( (*(_WORD *)(*(_QWORD *)(v23 + 424) + 10LL) & 0x108) != 0 )
                KeSetEvent(*(PRKEVENT *)(v23 + 704), 2, 0);
            }
            if ( v49 == 786 )
            {
              if ( (*(_DWORD *)(v23 + 1184) & 0x40000) != 0 )
              {
                v37 = *(struct _KEVENT **)(v23 + 1344);
                if ( v37 )
                  KeSetEvent(v37, 1, 0);
              }
              SetWakeBit(v23, 128LL);
            }
            v29 = 1;
          }
          else
          {
            UserSetLastError(8LL, v33);
            v31 = 0LL;
          }
        }
        else
        {
          UserSetLastError(1816LL, v25);
          v31 = 0LL;
        }
        v38 = *(tagObjLock **)(v23 + 408);
        v39 = DLT_QUEUE::getDLT(v30);
        v40 = (tagObjLock *)GetDomainLockRef(v39);
        tagObjLock::LockShared(v40);
        tagObjLock::LockExclusive(v38);
        v41 = *(_QWORD *)(v23 + 408);
        if ( v23 == *(_QWORD *)(v41 + 64) )
          *(_QWORD *)(v41 + 72) = v31;
        tagObjLock::UnLock(v38);
        tagObjLock::UnLock(v40);
        if ( v21 )
          ThreadUnlock1(v43, v42);
        if ( v29 )
          v9 = v31;
LABEL_92:
        tagObjLock::UnLock(v46);
        tagObjLock::UnLock(DomainLockRef);
        return (unsigned __int64)v9;
      }
LABEL_48:
      if ( v21 )
        ThreadUnlock1(v28, v25);
      goto LABEL_92;
    }
LABEL_29:
    if ( !gbEnforceUIPI || (v16 = gpepCSRSS, *(_QWORD *)v14 == gpepCSRSS) )
    {
      if ( *(_DWORD *)(v14 + 740) != *(_DWORD *)(CurrentProcessWin32Process + 740)
        || *(_DWORD *)(v14 + 744) != *(_DWORD *)(CurrentProcessWin32Process + 744) )
      {
        goto LABEL_33;
      }
    }
    goto LABEL_34;
  }
  if ( v49 == 208 )
    goto LABEL_29;
  switch ( v49 )
  {
    case 0xCu:
    case 0xBCu:
      goto LABEL_29;
    case 0xDu:
    case 0xC4u:
    case 0xCCu:
      v16 = *((_QWORD *)v7 + 21);
      v17 = gpsi;
      if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(v16 + 10) || (*((_BYTE *)v7 + 68) & 0x20) == 0 )
        goto LABEL_34;
      UserSetLastError(5LL, v16);
      UserSetLastError(5LL, v20);
      result = 0LL;
      break;
    case 0x4Eu:
      goto LABEL_33;
    default:
      goto LABEL_34;
  }
  return result;
}
