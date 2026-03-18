/*
 * XREFs of xxxMNLoop @ 0x1C0203CEC
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C021A71C (xxxMNKeyFilter.c)
 * Callees:
 *     SlowAppThreadInShellFrame @ 0x1C000BEC4 (SlowAppThreadInShellFrame.c)
 *     _GetMenuState @ 0x1C0046708 (_GetMenuState.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C005265C (xxxTranslateMessage.c)
 *     xxxGetSysMenuHandle @ 0x1C007BAF0 (xxxGetSysMenuHandle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     IsShellFrameHangResilient @ 0x1C0102128 (IsShellFrameHangResilient.c)
 *     FindNCHit @ 0x1C0111248 (FindNCHit.c)
 *     _IsChild @ 0x1C011DA54 (_IsChild.c)
 *     xxxCallMsgFilter @ 0x1C0144054 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01C1328 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C01F6D20 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C0209100 (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 **a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  int v12; // r12d
  __int16 KeyState; // ax
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // ebx
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  struct tagTHREADINFO *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 SysMenuHandle; // rax
  unsigned int v46; // r10d
  __int64 *v48[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v49[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v50[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v51; // [rsp+68h] [rbp-19h] BYREF
  __int64 v52; // [rsp+70h] [rbp-11h]
  _QWORD v53[7]; // [rsp+80h] [rbp-1h] BYREF
  int v54; // [rsp+F0h] [rbp+6Fh] BYREF

  memset(v53, 0, 0x30uLL);
  *(_DWORD *)(a2 + 8) |= 4u;
  v11 = 0;
  v12 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 732LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 736LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    KeyState = GetKeyState((unsigned int)((*(_DWORD *)**a1 & 0x40) != 0) + 1, v8, v9, v10);
    v15 = (_DWORD *)**a1;
    if ( KeyState >= 0 )
    {
      if ( (*v15 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        v16 = *(_QWORD *)(**a1 + 8);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v9, v10);
        v51 = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = &v51;
        v52 = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        if ( (*(_DWORD *)**a1 & 8) == 0 || (v18 = 1LL, (*(_DWORD *)**a1 & 4) != 0) )
          v18 = 0LL;
        xxxSendNotifyMessage(*(struct tagWND **)(**a1 + 8), 0x212u, v18, 0LL, 1);
LABEL_78:
        ThreadUnlock1(v20, v19);
      }
      goto LABEL_79;
    }
    if ( (*v15 & 8) == 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v48, **a1, v9, v10);
      if ( !xxxMNStartMenu(v48, a2, 0xFFFFFFFFLL) )
      {
LABEL_79:
        *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
        xxxEndMenuLoop(a2, **a1, v9, v10);
        xxxMNReleaseCapture(a2);
        xxxInternalGetMessage((int)v53, 0, 512, 512, 2, 0);
        v11 = *(_DWORD *)(a2 + 24);
        goto LABEL_80;
      }
    }
    if ( (*(_DWORD *)**a1 & 0x40) != 0 )
    {
      v53[2] = 2LL;
      v21 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v53[2] = 1LL;
      v21 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v53[1]) = v21;
    v22 = *a1;
    v53[3] = a3;
    if ( *(_QWORD *)(*v22 + 16) )
      v53[0] = **(_QWORD **)(**a1 + 16);
    else
      v53[0] = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v49, **a1, v9, v10);
    xxxHandleMenuMessages((__int64)v53, a2, v49);
  }
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v23 & 4) == 0 )
        goto LABEL_79;
      if ( !(unsigned int)xxxInternalGetMessage((int)v53, 0, 0, 0, 2, 0) )
        goto LABEL_43;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_79;
      if ( (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_79;
      if ( (*(_DWORD *)**a1 & 8) == 0 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
        if ( v29 != *(_QWORD *)(**a1 + 8)
          && (!v29
           || !(unsigned int)IsChild(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL), *(_QWORD *)(**a1 + 8))) )
        {
          goto LABEL_79;
        }
      }
      if ( (*(_DWORD *)**a1 & 1) == 0 )
        goto LABEL_35;
      v30 = v53[1];
      if ( LODWORD(v53[1]) == 515 )
        break;
LABEL_36:
      if ( v30 == 513 || v30 == 516 || v30 == 161 || v30 == 164 )
      {
        v32 = 1;
        goto LABEL_52;
      }
LABEL_40:
      *(_DWORD *)(gptiCurrent + 464LL) |= 0x200000u;
      v32 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((int)v53, 0, v53[1], v53[1], 1, 0) )
      {
        v33 = *(_DWORD *)(gptiCurrent + 464LL);
        if ( (v33 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 464LL) = v33 & 0xFFDFFFFF;
LABEL_43:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
            goto LABEL_79;
          if ( (*(_DWORD *)**a1 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups((_DWORD *)**a1, v28, v9, v10);
            *(_DWORD *)**a1 &= ~0x20000u;
          }
          if ( v12 )
          {
            if ( *(_QWORD *)(**a1 + 8) )
            {
              v34 = *(_QWORD *)(**a1 + 8);
              v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v9, v10);
              v51 = *(_QWORD *)(v35 + 392);
              *(_QWORD *)(v35 + 392) = &v51;
              v52 = v34;
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
              xxxSendMessage(*(_QWORD *)(**a1 + 8));
              ThreadUnlock1(v40, v39);
            }
            v12 = 0;
          }
          else
          {
            v41 = *(_QWORD *)(a2 + 96) != 0LL;
            if ( gfShellFrameHangResilient || (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              v54 = 0;
              xxxWaitMessageEx(0x3CFFu, v41, (enum SLEEP_STATUS *)&v54);
              if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
              {
                if ( v54 )
                {
                  v42 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                  if ( v42 )
                    TryDetachShellFrame(gptiCurrent, (__int64)v42, v54 == 2, 0);
                }
              }
            }
            else
            {
              xxxWaitMessageEx(0x3CFFu, v41, 0LL);
            }
          }
          goto LABEL_73;
        }
      }
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x200000u;
LABEL_52:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v53, 2) )
      {
        if ( v32 )
          xxxInternalGetMessage((int)v53, 0, v53[1], v53[1], 1, 0);
LABEL_64:
        v12 = 1;
        goto LABEL_73;
      }
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v50, **a1, v9, v10);
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v53, a2, v50) )
      {
        xxxTranslateMessage((__int64)v53, 0);
        xxxDispatchMessage((__int64)v53, v36, v37, v38);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)**a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) & 0x40) != 0 )
      {
        goto LABEL_79;
      }
      if ( LODWORD(v53[1]) == 280 )
        goto LABEL_43;
      if ( LODWORD(v53[1]) != 275 && LODWORD(v53[1]) != 15 )
        goto LABEL_64;
LABEL_73:
      v23 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(**a1 + 8) )
      goto LABEL_40;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(**a1 + 8), v53[3]) == 2 )
    {
      xxxInternalGetMessage((int)v53, 0, v53[1], v53[1], 1, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 || (*(_DWORD *)**a1 & 0x8000) != 0 )
        goto LABEL_79;
      if ( *(_QWORD *)(**a1 + 8) )
      {
        v43 = *(_QWORD *)(**a1 + 8);
        v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v9, v10);
        v51 = *(_QWORD *)(v44 + 392);
        *(_QWORD *)(v44 + 392) = &v51;
        v52 = v43;
        _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
        SysMenuHandle = xxxGetSysMenuHandle(v43);
        if ( (GetMenuState(SysMenuHandle, 61728LL) & 3) == 0 )
          PostMessage(v43, 274LL, v46, 0LL);
        goto LABEL_78;
      }
    }
LABEL_35:
    v30 = v53[1];
    goto LABEL_36;
  }
  xxxMNReleaseCapture(a2);
  v27 = *(_DWORD *)(a2 + 8);
  if ( (v27 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v27 & 0xFDFFFFFF;
  }
LABEL_80:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v24, v25, v26);
  return v11;
}
