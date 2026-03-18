/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C005F0F0
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C01DC050 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     HasMaximizedState @ 0x1C006138C (HasMaximizedState.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
{
  __int64 *v3; // r14
  struct tagRECT v4; // xmm0
  __int64 v7; // rcx
  __int64 v9; // r13
  __int64 TopLevelWindow; // rsi
  unsigned __int16 v11; // r15
  unsigned int v12; // r12d
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 NewMonitor; // rsi
  __int64 v19; // rax
  struct tagBWL *v20; // r14
  unsigned __int64 *i; // rbx
  struct tagWND *v22; // rax
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h]
  struct tagRECT v26; // [rsp+50h] [rbp-20h] BYREF

  v3 = (__int64 *)((char *)a1 + 128);
  v4 = (struct tagRECT)*((_OWORD *)a1 + 8);
  v7 = *((_QWORD *)a1 + 45);
  v26 = v4;
  v9 = ValidateHmonitorNoRip(v7);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v9 )
    v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 128LL);
  else
    v11 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v12 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1);
      goto LABEL_9;
    }
    InternalRemoveProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  v12 = 1;
LABEL_9:
  v13 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v13 = a2;
  if ( !v13
    || TopLevelWindow && (*(_BYTE *)(TopLevelWindow + 60) & 0x20) != 0
    || (v14 = ValidateHmonitorNoRip(v13[45])) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, &v26);
    v16 = gptiCurrent;
    v24 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v24;
    v25 = NewMonitor;
    ++*(_DWORD *)(NewMonitor + 8);
    v15 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 128LL);
    if ( (_WORD)v15 != v11 )
      xxxAppAdjustDpiCandidateRect(a1, v15, v3, &v26);
  }
  else
  {
    v24 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v24;
    v25 = v14;
    ++*(_DWORD *)(v14 + 8);
    if ( !(unsigned int)HasMaximizedState(a1)
      && (*((_BYTE *)a1 + 368) & 0xF) == 2
      && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 )
    {
      if ( v9 )
      {
        v17 = *v3;
        v15 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 128LL);
        if ( (_WORD)v15 != v11 && !(unsigned int)xxxAppAdjustDpiCandidateRect(v16, v15, v3, &v26) )
          ScaleDPIRect(&v26, v3, *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 128LL), v11, v17, v17);
      }
    }
  }
  if ( ThreadUnlock1(v16, v15) )
  {
    v19 = BuildHwndList(a1, 1LL, 0LL);
    v20 = (struct tagBWL *)v19;
    if ( v19 )
    {
      for ( i = (unsigned __int64 *)(v19 + 32); *i != 1; ++i )
      {
        v22 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
        if ( v22 )
          UpdateWindowMonitor(v22);
      }
      xxxNotifyMonitorChanged(a1, (__int64)&v26, v20, v11);
    }
  }
  return v12;
}
