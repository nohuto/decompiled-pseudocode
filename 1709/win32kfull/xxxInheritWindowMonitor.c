/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C0062068
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C01E8240 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     HasMaximizedState @ 0x1C00C83A0 (HasMaximizedState.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, struct tagWND *a2, int a3)
{
  __m128i *v3; // r14
  __int128 v4; // xmm0
  __int64 v7; // rcx
  __int64 v9; // r13
  __int64 TopLevelWindow; // rsi
  unsigned __int16 v11; // r15
  struct tagWND *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  struct tagBWL *v29; // r14
  _QWORD *i; // rbx
  struct tagWND *v31; // rax
  __int128 v33; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+48h] [rbp-18h]
  unsigned int v36; // [rsp+A0h] [rbp+40h]

  v3 = (__m128i *)((char *)a1 + 128);
  v36 = 1;
  v4 = *((_OWORD *)a1 + 8);
  v7 = *((_QWORD *)a1 + 45);
  v33 = v4;
  v9 = ValidateHmonitorNoRip(v7);
  TopLevelWindow = GetTopLevelWindow((__int64)a2);
  if ( v9 )
    v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
  else
    v11 = 0;
  if ( a3 )
  {
    if ( a2 )
      v36 = InternalSetProp(a1, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    else
      InternalRemoveProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  }
  v12 = 0LL;
  if ( a2 != a1 )
    v12 = a2;
  if ( !v12
    || TopLevelWindow && (*(_BYTE *)(TopLevelWindow + 60) & 0x20) != 0
    || (v13 = ValidateHmonitorNoRip(*((_QWORD *)v12 + 45))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL);
    CurrentThread = KeGetCurrentThread();
    v20 = NewMonitor;
    v21 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22, v24, v25) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v21 = *ThreadWin32Thread;
    }
    v34 = *(_QWORD *)(v21 + 392);
    *(_QWORD *)(v21 + 392) = &v34;
    v35 = v20;
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v15 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 40) + 64LL);
    if ( (_WORD)v15 != v11 )
      xxxAppAdjustDpiCandidateRect(a1, v15, v3, &v33);
  }
  else
  {
    v14 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v34 = *(_QWORD *)(v14 + 392);
    *(_QWORD *)(v14 + 392) = &v34;
    v35 = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    if ( !(unsigned int)HasMaximizedState(a1)
      && (*((_BYTE *)a1 + 368) & 0xF) == 2
      && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 624LL) & 0x2000000) == 0 )
    {
      if ( v9 )
      {
        v17 = v3->m128i_i64[0];
        v15 = *(unsigned __int16 *)(*(_QWORD *)(v13 + 40) + 64LL);
        if ( (_WORD)v15 != v11 && !(unsigned int)xxxAppAdjustDpiCandidateRect(v16, v15, v3, &v33) )
          ScaleDPIRect(&v33, v3, *(_WORD *)(*(_QWORD *)(v13 + 40) + 64LL), v11, v17, v17);
      }
    }
  }
  if ( ThreadUnlock1(v16, v15) )
  {
    v27 = BuildHwndList(a1, 1LL, 0LL);
    v29 = (struct tagBWL *)v27;
    if ( v27 )
    {
      for ( i = (_QWORD *)(v27 + 32); *i != 1LL; ++i )
      {
        LOBYTE(v28) = 1;
        v31 = (struct tagWND *)HMValidateHandleNoSecure(*i, v28);
        if ( v31 )
          UpdateWindowMonitor(v31);
      }
      xxxNotifyMonitorChanged(a1, (__int64)&v33, v29, v11);
    }
  }
  return v36;
}
