/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     InternalBeginDeferWindowPos @ 0x1C0066D34 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxComputeProposedPerMonRect @ 0x1C00C9794 (xxxComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00CA0DC (FindOldMonitor.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  __int64 v2; // rdx
  struct tagSMWP *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r15d
  char *v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edi
  unsigned __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rax
  int OldMonitor; // eax
  unsigned __int16 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 Prop; // [rsp+40h] [rbp-39h]
  _QWORD v37[3]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v39[3]; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v40; // [rsp+90h] [rbp+17h] BYREF

  if ( a1 )
  {
    v3 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v3 )
    {
      v6 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v7 = (char *)a1 + 16;
        do
        {
          v8 = *(_QWORD *)v7;
          LOBYTE(v2) = 1;
          v9 = HMValidateHandleNoSecure(*(_QWORD *)v7, v2, v4, v5);
          v10 = v9;
          if ( v9 && *(char *)(v9 + 64) >= 0 && IsNonImmersiveBand(v9) )
          {
            v12 = v11 + 128;
            v2 = 3 * (v6 + 1LL);
            v13 = *(_QWORD *)(v11 + 128) - *((_QWORD *)a1 + 3 * v6 + 3);
            if ( !v13 )
              v13 = *(_QWORD *)(v12 + 8) - *((_QWORD *)a1 + 3 * v6 + 4);
            if ( !v13 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v4, v5);
              v38[0] = *(_QWORD *)(ThreadWin32Thread + 392);
              *(_QWORD *)(ThreadWin32Thread + 392) = v38;
              v38[1] = v10;
              _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
              Prop = GetProp(v10, atomCheckpointProp, 1);
              if ( v3 )
              {
                PushW32ThreadLock((__int64)v3, v37, (__int64)DestroySMWP, v17);
                v3 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                         v3,
                                         v10,
                                         *(_QWORD *)a1,
                                         v12,
                                         Prop,
                                         *((_DWORD *)a1 + 2),
                                         0);
                if ( !v3 )
                {
                  v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v18, v19);
                  v16 = v37[0];
                  *(_QWORD *)(v35 + 16) = v37[0];
                }
              }
              ThreadUnlock1(v16, v15);
              LOBYTE(v20) = 1;
              v23 = HMValidateHandleNoSecure(v8, v20, v21, v22);
              v5 = v23;
              if ( v23
                && (*(_DWORD *)(v23 + 368) & 0xF) == 2
                && (*(_DWORD *)(*(_QWORD *)(v23 + 16) + 624LL) & 0x2000000) == 0
                && (unsigned int)xxxComputeProposedPerMonRect(
                                   (struct tagWND *)v23,
                                   *(struct tagMONITORRECTS **)a1,
                                   &v40)
                && (LOBYTE(v2) = 1, HMValidateHandleNoSecure(v8, v2, v4, v5)) )
              {
                *(struct tagRECT *)(v7 + 8) = v40;
              }
              else
              {
                *(_QWORD *)v7 = 0LL;
              }
              if ( v3 )
              {
                v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v4, v5);
                *(_QWORD *)(v24 + 16) = v37[0];
              }
            }
          }
          ++v6;
          v7 += 24;
        }
        while ( v6 < *((_DWORD *)a1 + 3) );
      }
      if ( v3 )
        xxxEndDeferWindowPosEx(v3, 0);
    }
    v25 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v26 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v26 )
        {
          LOBYTE(v2) = 1;
          v29 = HMValidateHandleNoSecure(*v26, v2, v4, v5);
          if ( v29 )
          {
            v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v4, v5);
            v39[0] = *(_QWORD *)(v30 + 392);
            *(_QWORD *)(v30 + 392) = v39;
            v39[1] = v29;
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
            OldMonitor = FindOldMonitor(v29, *(_QWORD *)a1, 0LL);
            if ( OldMonitor >= 0 )
              v32 = *(_WORD *)(*(_QWORD *)a1 + 48LL * OldMonitor + 40);
            else
              v32 = 0;
            xxxNotifyMonitorChanged((struct tagWND *)v29, (__int64)a1 + 24 * v25 + 24, 0LL, v32);
            ThreadUnlock1(v34, v33);
          }
        }
        ++v25;
        v26 += 3;
      }
      while ( v25 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1, v2, v4);
    Win32FreePool(a1, v27, v28);
  }
}
