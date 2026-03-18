/*
 * XREFs of xxxMNLoop @ 0x1C02022C0
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1C0219524 (xxxMNKeyFilter.c)
 * Callees:
 *     SlowAppThreadInShellFrame @ 0x1C0006E3C (SlowAppThreadInShellFrame.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     xxxGetSysMenuHandle @ 0x1C00C2730 (xxxGetSysMenuHandle.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     xxxTranslateMessage @ 0x1C00F8AB8 (xxxTranslateMessage.c)
 *     FindNCHit @ 0x1C0106D94 (FindNCHit.c)
 *     IsShellFrameHangResilient @ 0x1C01081B0 (IsShellFrameHangResilient.c)
 *     _GetMenuState @ 0x1C01128F0 (_GetMenuState.c)
 *     _IsChild @ 0x1C0115B04 (_IsChild.c)
 *     xxxCallMsgFilter @ 0x1C013DDF4 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     TryDetachShellFrame @ 0x1C01BCD5C (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01BD408 (xxxWaitMessageEx.c)
 *     MNFlushDestroyedPopups @ 0x1C01EAD30 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNReleaseCapture @ 0x1C020717C (xxxMNReleaseCapture.c)
 */

__int64 __fastcall xxxMNLoop(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // ebx
  int v9; // r12d
  __int16 KeyState; // ax
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // esi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 *v30; // r9
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // esi
  struct tagTHREADINFO *v35; // rax
  __int64 v36; // rsi
  __int64 SysMenuHandle; // rax
  unsigned int v38; // r10d
  __int64 v40; // [rsp+38h] [rbp-39h] BYREF
  __int64 v41; // [rsp+40h] [rbp-31h]
  __int64 v42[4]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v43[7]; // [rsp+70h] [rbp-1h] BYREF
  int v44; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v43, 0, 0x30uLL);
  *(_DWORD *)(a2 + 8) |= 4u;
  v8 = 0;
  v9 = 1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(gptiCurrent + 676LL);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(gptiCurrent + 680LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x40u;
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
  {
    KeyState = GetKeyState((unsigned int)((*(_DWORD *)*a1 & 0x40) != 0) + 1);
    v11 = (_DWORD *)*a1;
    if ( KeyState >= 0 )
    {
      if ( (*v11 & 0x800) == 0 )
      {
        v12 = *((_QWORD *)v11 + 1);
        if ( v12 )
        {
          v40 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v40;
          v41 = v12;
          ++*(_DWORD *)(v12 + 8);
          xxxSendNotifyMessage(*(struct tagWND **)(*a1 + 8), 0x212u, (*(_DWORD *)*a1 & 0xC) == 8, 0LL, 1);
LABEL_78:
          ThreadUnlock1(v14, v13);
        }
      }
      goto LABEL_79;
    }
    if ( (*v11 & 8) == 0 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v42, (__int64)v11);
      if ( !xxxMNStartMenu(v42, a2, -1) )
      {
LABEL_79:
        *(_DWORD *)(a2 + 8) &= 0xFFFFFEFB;
        xxxEndMenuLoop(a2, *a1);
        xxxMNReleaseCapture(a2);
        xxxInternalGetMessage((__int64)v43, 0LL, 0x200u, 0x200u, 2u, 0);
        v8 = *(_DWORD *)(a2 + 24);
        goto LABEL_80;
      }
    }
    v15 = *a1;
    if ( (*(_DWORD *)*a1 & 0x40) != 0 )
    {
      v43[2] = 2LL;
      v16 = a4 != 0 ? 518 : 516;
    }
    else
    {
      v43[2] = 1LL;
      v16 = a4 != 0 ? 515 : 513;
    }
    LODWORD(v43[1]) = v16;
    v43[3] = a3;
    v17 = *(_QWORD **)(v15 + 16);
    if ( v17 )
      v43[0] = *v17;
    else
      v43[0] = 0LL;
    SmartObjStackRef<tagPOPUPMENU>::Init(v42, v15);
    xxxHandleMenuMessages((__int64)v43, a2, v42);
  }
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x100) == 0 )
  {
    while ( 1 )
    {
      if ( (v18 & 4) == 0 )
        goto LABEL_79;
      if ( !(unsigned int)xxxInternalGetMessage((__int64)v43, 0LL, 0, 0, 2u, 0) )
        goto LABEL_40;
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_79;
      v20 = *a1;
      v21 = *(_DWORD *)*a1;
      if ( (v21 & 0x8000) != 0 )
        goto LABEL_79;
      if ( (v21 & 8) == 0 )
      {
        v22 = *(_QWORD *)(v20 + 8);
        v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v23 != v22 && (!v23 || !(unsigned int)IsChild(v23, v22)) )
          goto LABEL_79;
      }
      if ( (v21 & 1) == 0 )
        goto LABEL_32;
      v24 = v43[1];
      if ( LODWORD(v43[1]) == 515 )
        break;
LABEL_33:
      if ( v24 == 513 || v24 == 516 || v24 == 161 || v24 == 164 )
      {
        v26 = 1;
        goto LABEL_50;
      }
LABEL_37:
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x200000u;
      v26 = 0;
      if ( !(unsigned int)xxxInternalGetMessage((__int64)v43, 0LL, v43[1], v43[1], 1u, 0) )
      {
        v27 = *(_DWORD *)(gptiCurrent + 440LL);
        if ( (v27 & 0x200000) != 0 )
        {
          *(_DWORD *)(gptiCurrent + 440LL) = v27 & 0xFFDFFFFF;
LABEL_40:
          if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
            goto LABEL_79;
          v28 = *(_DWORD *)*a1;
          if ( (v28 & 0x8000) != 0 )
            goto LABEL_79;
          if ( (v28 & 0x20000) != 0 )
          {
            MNFlushDestroyedPopups(*a1);
            *(_DWORD *)*a1 &= ~0x20000u;
          }
          if ( v9 )
          {
            v29 = *(_QWORD *)(*a1 + 8);
            if ( v29 )
            {
              v40 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v40;
              v41 = v29;
              ++*(_DWORD *)(v29 + 8);
              v30 = *(__int64 **)(*a1 + 56);
              if ( v30 )
                v31 = *v30;
              else
                LODWORD(v31) = 0;
              xxxSendMessage(*(_QWORD *)(*a1 + 8), 289, 2, v31);
              ThreadUnlock1(v33, v32);
            }
            v9 = 0;
          }
          else
          {
            v34 = *(_QWORD *)(a2 + 96) != 0LL;
            if ( gfShellFrameHangResilient || (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
            {
              v44 = 0;
              xxxWaitMessageEx(15615LL, v34, (enum SLEEP_STATUS *)&v44);
              if ( (unsigned int)IsShellFrameHangResilient(gptiCurrent) )
              {
                if ( v44 )
                {
                  v35 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                  if ( v35 )
                    TryDetachShellFrame(gptiCurrent, (__int64)v35, v44 == 2, 0);
                }
              }
            }
            else
            {
              xxxWaitMessageEx(15615LL, v34, 0LL);
            }
          }
          goto LABEL_73;
        }
      }
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200000u;
LABEL_50:
      if ( (unsigned int)xxxCallMsgFilter((__int64)v43, 2) )
      {
        if ( v26 )
          xxxInternalGetMessage((__int64)v43, 0LL, v43[1], v43[1], 1u, 0);
LABEL_62:
        v9 = 1;
        goto LABEL_73;
      }
      SmartObjStackRef<tagPOPUPMENU>::Init(v42, *a1);
      if ( !(unsigned int)xxxHandleMenuMessages((__int64)v43, a2, v42) )
      {
        xxxTranslateMessage((__int64)v43, 0);
        xxxDispatchMessage(v43);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0
        || (*(_DWORD *)*a1 & 0x8000) != 0
        || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x40) != 0 )
      {
        goto LABEL_79;
      }
      if ( LODWORD(v43[1]) == 280 )
        goto LABEL_40;
      if ( LODWORD(v43[1]) != 275 && LODWORD(v43[1]) != 15 )
        goto LABEL_62;
LABEL_73:
      v18 = *(_DWORD *)(a2 + 8);
    }
    if ( !*(_QWORD *)(v20 + 8) )
      goto LABEL_37;
    if ( (unsigned int)FindNCHit(*(_QWORD *)(v20 + 8), v43[3]) == 2 )
    {
      xxxInternalGetMessage((__int64)v43, 0LL, v43[1], v43[1], 1u, 0);
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
        goto LABEL_79;
      v25 = *a1;
      if ( (*(_DWORD *)*a1 & 0x8000) != 0 )
        goto LABEL_79;
      if ( *(_QWORD *)(v25 + 8) )
      {
        v36 = *(_QWORD *)(v25 + 8);
        v40 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v40;
        v41 = v36;
        ++*(_DWORD *)(v36 + 8);
        SysMenuHandle = xxxGetSysMenuHandle(v36);
        if ( (GetMenuState(SysMenuHandle, 0xF120u) & 3) == 0 )
          PostMessage(v36, 274LL, v38, 0LL);
        goto LABEL_78;
      }
    }
LABEL_32:
    v24 = v43[1];
    goto LABEL_33;
  }
  xxxMNReleaseCapture(a2);
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x2000000) != 0 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v19 & 0xFDFFFFFF;
  }
LABEL_80:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v8;
}
