/*
 * XREFs of xxxDeactivate @ 0x1C00B304C
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     xxxFocusSetInputContext @ 0x1C00B56B0 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  int v4; // r14d
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r15
  char v12; // r14
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+28h] [rbp-69h] BYREF
  __int64 v33; // [rsp+30h] [rbp-61h]
  __int64 v34; // [rsp+38h] [rbp-59h] BYREF
  int v35; // [rsp+40h] [rbp-51h]
  int v36; // [rsp+44h] [rbp-4Dh]
  __int64 v37; // [rsp+48h] [rbp-49h] BYREF
  __int64 v38; // [rsp+50h] [rbp-41h]
  _QWORD v39[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v40[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v41[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v42[4]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = a2;
  v6 = 0;
  result = *(_QWORD *)(a1 + 384);
  if ( !*(_QWORD *)(result + 88) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v42);
  v8 = *(_DWORD *)(a1 + 440);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 440) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 72LL);
  if ( v9 )
  {
    v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v39;
    v39[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 384) + 72LL), 31, 0, 0);
    ThreadUnlock1(v29, v28);
    SetWakeBit(a1, 2u);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 88LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    LockW32Thread(v11, v40);
    v37 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v37;
    v38 = v10;
    v12 = *(_BYTE *)(v10 + 71);
    ++*(_DWORD *)(v10 + 8);
    v13 = (v12 & 0x20) << 16;
    if ( (a3 & 1) == 0 && !xxxSendMessage(v10, 134, 0, 0) )
    {
      ThreadUnlock1(v15, v14);
      result = PopAndFreeW32ThreadLock(v40);
      goto LABEL_28;
    }
    xxxSendMessage(v10, 6, v13, 0);
    v16 = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(v16 + 88) == v10 )
    {
      v33 = *(_QWORD *)(v16 + 88);
      v32 = v16 + 96;
      HMAssignmentLock(&v32);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 384) + 88LL);
    }
    SetOrClrWF(0, (_DWORD *)v10, 0x40u, 1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 37LL, *(_QWORD *)v10);
    ThreadUnlock1(v18, v17);
    if ( (*(_BYTE *)(v11 + 440) & 1) != 0 )
      v11 = 0LL;
    v34 = v11;
    PopAndFreeW32ThreadLock(v40);
    v19 = v34;
    v4 = a2;
  }
  else
  {
    v10 = -1LL;
    v34 = a1;
    v19 = a1;
  }
  if ( v19 )
  {
    v36 &= 0xFFFFFFFC;
    v20 = *(_QWORD *)(a1 + 408);
    v35 = v4;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL) + 112LL);
    v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v41;
    v41[1] = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 16LL) + 112LL),
      xxxActivateApp,
      (__int64)&v34,
      2u);
    ThreadUnlock1(v23, v22);
  }
  result = *(_QWORD *)(a1 + 384);
  if ( *(_QWORD *)(result + 88) != v10 )
    goto LABEL_21;
  v37 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v37;
  v38 = v10;
  ++*(_DWORD *)(v10 + 8);
  if ( (a3 & 1) != 0 || xxxSendMessage(v10, 134, 0, 0) )
  {
    xxxSendMessage(v10, 6, 0, 0);
    ThreadUnlock1(v31, v30);
    result = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(result + 88) == v10 )
    {
      v33 = *(_QWORD *)(result + 88);
      v32 = result + 96;
      HMAssignmentLock(&v32);
      result = HMAssignmentUnlock(*(_QWORD *)(a1 + 384) + 88LL);
    }
LABEL_21:
    v24 = (_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
    if ( !*v24 )
      goto LABEL_28;
    result = HMAssignmentUnlock(v24);
    v25 = result;
    if ( !result )
      goto LABEL_28;
    v37 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v37;
    v38 = result;
    ++*(_DWORD *)(result + 8);
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
      zzzInputFocusLostWindowEvent(result, 8LL);
    xxxSendMessage(v25, 8, 0, 0);
    v27 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v25, 0LL, 0LL);
  }
  result = ThreadUnlock1(v27, v26);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 440) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(v42);
  return result;
}
