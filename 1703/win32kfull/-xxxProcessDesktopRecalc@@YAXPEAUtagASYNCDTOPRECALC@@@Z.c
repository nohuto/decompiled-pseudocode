/*
 * XREFs of ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     InternalBeginDeferWindowPos @ 0x1C006323C (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     xxxComputeProposedPerMonRect @ 0x1C00B73CC (xxxComputeProposedPerMonRect.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC (xxxDeferWindowPosAndCheckPoint.c)
 *     FindOldMonitor @ 0x1C00B7BF4 (FindOldMonitor.c)
 *     PopW32ThreadLock @ 0x1C00FCE50 (PopW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall xxxProcessDesktopRecalc(struct tagASYNCDTOPRECALC *a1)
{
  struct tagSMWP *v2; // r14
  int v3; // r15d
  char *v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // r13
  __int64 v11; // rcx
  __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  unsigned __int64 *v18; // r14
  __int64 v19; // rdi
  int OldMonitor; // eax
  unsigned __int16 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 Prop; // [rsp+40h] [rbp-19h]
  __int64 v25; // [rsp+48h] [rbp-11h] BYREF
  __int64 v26; // [rsp+50h] [rbp-9h]
  _QWORD v27[3]; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+78h] [rbp+1Fh] BYREF

  if ( a1 )
  {
    v2 = (struct tagSMWP *)InternalBeginDeferWindowPos(*((_DWORD *)a1 + 3));
    if ( v2 )
    {
      v3 = 0;
      if ( *((int *)a1 + 3) > 0 )
      {
        v4 = (char *)a1 + 16;
        while ( 1 )
        {
          v5 = *(_QWORD *)v4;
          v6 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
          v8 = v6;
          if ( v6 )
          {
            if ( *(char *)(v6 + 64) >= 0 )
            {
              if ( (unsigned int)IsNonImmersiveBand(v6, v7) )
              {
                v10 = (_QWORD *)(v9 + 128);
                v11 = v3 + 1LL;
                if ( *v10 == *((_QWORD *)a1 + 3 * v11) && v10[1] == *((_QWORD *)a1 + 3 * v11 + 1) )
                  break;
              }
            }
          }
LABEL_25:
          ++v3;
          v4 += 24;
          if ( v3 >= *((_DWORD *)a1 + 3) )
            goto LABEL_26;
        }
        v12 = atomCheckpointProp;
        v25 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v25;
        v26 = v8;
        ++*(_DWORD *)(v8 + 8);
        Prop = GetProp(v8, v12, 1);
        if ( v2 )
        {
          PushW32ThreadLock((__int64)v2, v27, (__int64)DestroySMWP);
          v2 = (struct tagSMWP *)xxxDeferWindowPosAndCheckPoint(
                                   v2,
                                   v8,
                                   *(_QWORD *)a1,
                                   v10,
                                   Prop,
                                   *((_DWORD *)a1 + 2),
                                   0);
          if ( !v2 )
            PopW32ThreadLock(v27);
        }
        ThreadUnlock1(v14, v13);
        v15 = HMValidateHandleNoSecure(v5, 1);
        v16 = v15;
        if ( !v15 )
          goto LABEL_19;
        if ( (*(_DWORD *)(v15 + 368) & 0xF) != 2
          || (*(_DWORD *)(*(_QWORD *)(v15 + 16) + 568LL) & 0x2000000) != 0
          || !(unsigned int)xxxComputeProposedPerMonRect((struct tagWND *)v15, *(struct tagMONITORRECTS **)a1, &v28) )
        {
          *(_QWORD *)v4 = 0LL;
          if ( (*(_DWORD *)(v16 + 368) & 0xF) == 2 && (*(_BYTE *)(v16 + 71) & 0x20) != 0 )
            SetDeferredDpiStateForWindowAndChildren(v16, 1);
          goto LABEL_23;
        }
        if ( HMValidateHandleNoSecure(v5, 1) )
          *(struct tagRECT *)(v4 + 8) = v28;
        else
LABEL_19:
          *(_QWORD *)v4 = 0LL;
LABEL_23:
        if ( v2 )
          PopW32ThreadLock(v27);
        goto LABEL_25;
      }
LABEL_26:
      if ( v2 )
        xxxEndDeferWindowPosEx(v2, 0);
    }
    v17 = 0;
    if ( *((int *)a1 + 3) > 0 )
    {
      v18 = (unsigned __int64 *)((char *)a1 + 16);
      do
      {
        if ( *v18 )
        {
          v19 = HMValidateHandleNoSecure(*v18, 1);
          if ( v19 )
          {
            v25 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v25;
            v26 = v19;
            ++*(_DWORD *)(v19 + 8);
            OldMonitor = FindOldMonitor(v19 + 128, *(_QWORD *)a1, *(unsigned int *)(v19 + 368));
            if ( OldMonitor < 0 )
              v21 = 0;
            else
              v21 = *(_WORD *)(120LL * OldMonitor + *(_QWORD *)a1 + 104);
            xxxNotifyMonitorChanged((struct tagWND *)v19, (__int64)a1 + 24 * v17 + 24, 0LL, v21);
            ThreadUnlock1(v23, v22);
          }
        }
        ++v17;
        v18 += 3;
      }
      while ( v17 < *((_DWORD *)a1 + 3) );
    }
    Win32FreePool(*(_QWORD *)a1);
    Win32FreePool(a1);
  }
}
