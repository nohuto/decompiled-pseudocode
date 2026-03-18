/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C00862B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C0086730 (xxxGetInputEvent.c)
 *     xxxHandleHealthyThread @ 0x1C01340D0 (xxxHandleHealthyThread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0143E0C (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01B5620 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01B56B0 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01B5750 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 v5; // si
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 CurrentProcess; // rax
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rdx
  char *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rsi
  int *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r10
  int v29; // eax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v31; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  struct _KTHREAD *v38; // rbx
  __int64 *v39; // rax
  unsigned int v41; // [rsp+30h] [rbp-888h]
  void *v42; // [rsp+40h] [rbp-878h]
  __int64 v43; // [rsp+48h] [rbp-870h] BYREF
  void *v44; // [rsp+50h] [rbp-868h]
  void (__fastcall *v45)(void *); // [rsp+58h] [rbp-860h]
  __int64 InputEvent; // [rsp+60h] [rbp-858h]
  __int64 ProcessPeb; // [rsp+68h] [rbp-850h]
  char v48; // [rsp+70h] [rbp-848h] BYREF
  __int64 v49; // [rsp+90h] [rbp-828h]
  __int64 v50; // [rsp+98h] [rbp-820h]
  __int64 v51; // [rsp+A0h] [rbp-818h]
  _BYTE v52[1040]; // [rsp+480h] [rbp-438h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  EnterCrit(0LL, 1LL);
  v9 = 0LL;
  v10 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL, a5);
    goto LABEL_56;
  }
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !v11
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v12 = 0LL) : (v12 = *(unsigned __int16 *)(v11 + 6)),
        ((unsigned __int16)(v12 | *(_WORD *)(v11 + 4)) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( InputEvent )
    {
      if ( (a5 & 1) != 0 )
      {
        v13 = 0LL;
        CancelQueueEventCompletionPacket();
      }
      else
      {
        v12 = gptiCurrent;
        v13 = *(_QWORD *)(gptiCurrent + 1392LL);
        if ( !v13 )
          goto LABEL_56;
      }
      CurrentProcess = PsGetCurrentProcess(v12, v10);
      ProcessPeb = PsGetProcessPeb(CurrentProcess);
      v15 = *(_OWORD **)(ProcessPeb + 32);
      if ( v15 + 65 < v15 || (unsigned __int64)(v15 + 65) > MmUserProbeAddress )
        v15 = (_OWORD *)MmUserProbeAddress;
      v16 = v52;
      v17 = 8LL;
      do
      {
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v16[4] = v15[4];
        v16[5] = v15[5];
        v16[6] = v15[6];
        v16 += 8;
        *(v16 - 1) = v15[7];
        v15 += 8;
        --v17;
      }
      while ( v17 );
      *v16 = *v15;
      v18 = &v48;
      v19 = v52;
      v20 = 8LL;
      do
      {
        *(_OWORD *)v18 = *v19;
        *((_OWORD *)v18 + 1) = v19[1];
        *((_OWORD *)v18 + 2) = v19[2];
        *((_OWORD *)v18 + 3) = v19[3];
        *((_OWORD *)v18 + 4) = v19[4];
        *((_OWORD *)v18 + 5) = v19[5];
        *((_OWORD *)v18 + 6) = v19[6];
        v18 += 128;
        *((_OWORD *)v18 - 1) = v19[7];
        v19 += 8;
        --v20;
      }
      while ( v20 );
      *(_OWORD *)v18 = *v19;
      if ( (_DWORD)v7 )
        ProbeForRead(a2, 8 * v7, 8u);
      v21 = (_QWORD *)Win32AllocPoolWithQuota(8LL * (unsigned int)(v7 + 1), 2037609301LL);
      v23 = v21;
      v42 = v21;
      if ( v21 )
      {
        memmove(v21, (const void *)a2, 8 * v7);
        v25 = 0LL;
        v26 = v51;
        v27 = v50;
        v28 = v49;
        while ( (unsigned int)v25 < (unsigned int)v7 )
        {
          v24 = (int *)&v23[(unsigned int)v25];
          v29 = *v24;
          if ( (unsigned int)*v24 >= 0xFFFFFFF4 )
          {
            switch ( v29 )
            {
              case -12:
                *(_QWORD *)v24 = v26;
                break;
              case -11:
                *(_QWORD *)v24 = v27;
                break;
              case -10:
                *(_QWORD *)v24 = v28;
                break;
            }
          }
          v25 = (unsigned int)(v25 + 1);
        }
        if ( (a5 & 8) != 0 )
          SetWaitForQueueAttach(1LL, v24, v26, v27);
        if ( (a5 & 1) != 0 )
          v13 = InputEvent;
        v23[v7] = v13;
        CurrentThread = KeGetCurrentThread();
        v31 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24, v26, v27) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v31 = *ThreadWin32Thread;
        }
        v43 = *(_QWORD *)(v31 + 16);
        *(_QWORD *)(v31 + 16) = &v43;
        v44 = v42;
        v45 = (void (__fastcall *)(void *))Win32FreePool;
        v41 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v42, a3, a4, a5);
        v34 = 0xFFFFF78000000320uLL;
        v35 = 0xFFFFF78000000004uLL;
        v36 = (unsigned int)_InterlockedExchange(
                              (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL),
                              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        if ( !*(_DWORD *)(gptiCurrent + 1128LL) )
        {
          v37 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          EtwTraceMessageCheckDelay(gptiCurrent);
          if ( (_DWORD)v37 )
            v8 = v37;
          *(_DWORD *)(gptiCurrent + 1128LL) = v8;
          if ( *(int *)(gptiCurrent + 464LL) < 0 )
            xxxHandleHealthyThread(gptiCurrent);
          *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x80000000;
        }
        *(_WORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 10LL) = 0;
        *(_DWORD *)(gptiCurrent + 1184LL) &= ~0x400u;
        v38 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v34, v35, v33) )
        {
          v39 = (__int64 *)PsGetThreadWin32Thread(v38);
          if ( v39 )
            v9 = *v39;
        }
        *(_QWORD *)(v9 + 16) = v43;
        v45(v44);
        if ( (a5 & 1) != 0 )
          ReassociateQueueEventCompletionPacket();
        v8 = v41;
      }
      else
      {
        UserSetLastError(8LL, v22);
      }
    }
  }
  else
  {
    v8 = v7;
  }
LABEL_56:
  UserSessionSwitchLeaveCrit(v12, v10);
  return v8;
}
