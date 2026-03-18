/*
 * XREFs of xxxDeactivate @ 0x1C0051FE8
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     xxxFocusSetInputContext @ 0x1C008585C (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  int v4; // r14d
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+28h] [rbp-99h] BYREF
  int v32; // [rsp+30h] [rbp-91h]
  int v33; // [rsp+34h] [rbp-8Dh]
  __int64 v34; // [rsp+38h] [rbp-89h] BYREF
  __int64 v35; // [rsp+40h] [rbp-81h]
  __int128 v36; // [rsp+58h] [rbp-69h]
  __int128 v37; // [rsp+68h] [rbp-59h]
  __int128 v38; // [rsp+78h] [rbp-49h] BYREF
  __int128 v39; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v40[3]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v41[24]; // [rsp+B0h] [rbp-11h] BYREF
  _QWORD v42[3]; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v43[24]; // [rsp+E0h] [rbp+1Fh] BYREF

  v4 = a2;
  v6 = 0;
  result = *(_QWORD *)(a1 + 408);
  if ( !*(_QWORD *)(result + 120) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v43);
  v8 = *(_DWORD *)(a1 + 464);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 464) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 104LL);
  if ( v9 )
  {
    v40[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v40;
    v40[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    xxxSendMessage(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 104LL), 31LL, 0LL, 0LL);
    ThreadUnlock1(v28, v27);
    SetWakeBit(a1, 2LL);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 120LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    LockW32Thread(v11, v41);
    v34 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v34;
    v35 = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v12 = (unsigned __int8)(*(_BYTE *)(v10 + 71) & 0x20) << 16;
    if ( (a3 & 1) == 0 && !xxxSendMessage(v10, 134LL, 0LL, 0LL) )
    {
      ThreadUnlock1(v14, v13);
      result = PopAndFreeW32ThreadLock(v41);
      goto LABEL_28;
    }
    xxxSendMessage(v10, 6LL, v12, 0LL);
    v15 = *(_QWORD *)(a1 + 408);
    if ( *(_QWORD *)(v15 + 120) == v10 )
    {
      *((_QWORD *)&v36 + 1) = *(_QWORD *)(v15 + 120);
      *(_QWORD *)&v36 = v15 + 128;
      v38 = v36;
      HMAssignmentLock(&v38);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 408) + 120LL);
    }
    SetOrClrWF(0LL, v10, 64LL, 1LL);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 37LL, *(_QWORD *)v10);
    ThreadUnlock1(v17, v16);
    if ( (*(_BYTE *)(v11 + 464) & 1) != 0 )
      v11 = 0LL;
    v31 = v11;
    PopAndFreeW32ThreadLock(v41);
    v18 = v11;
    v4 = a2;
  }
  else
  {
    v10 = -1LL;
    v31 = a1;
    v18 = a1;
  }
  if ( v18 )
  {
    v33 &= 0xFFFFFFFC;
    v19 = *(_QWORD *)(a1 + 432);
    v32 = v4;
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 112LL);
    v42[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v42;
    v42[1] = v20;
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 8LL) + 16LL) + 112LL),
      xxxActivateApp,
      &v31,
      2LL);
    ThreadUnlock1(v22, v21);
  }
  result = *(_QWORD *)(a1 + 408);
  if ( *(_QWORD *)(result + 120) != v10 )
    goto LABEL_21;
  v34 = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = &v34;
  v35 = v10;
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  if ( (a3 & 1) != 0 || xxxSendMessage(v10, 134LL, 0LL, 0LL) )
  {
    xxxSendMessage(v10, 6LL, 0LL, 0LL);
    ThreadUnlock1(v30, v29);
    result = *(_QWORD *)(a1 + 408);
    if ( *(_QWORD *)(result + 120) == v10 )
    {
      *((_QWORD *)&v37 + 1) = *(_QWORD *)(result + 120);
      *(_QWORD *)&v37 = result + 128;
      v39 = v37;
      HMAssignmentLock(&v39);
      result = HMAssignmentUnlock(*(_QWORD *)(a1 + 408) + 120LL);
    }
LABEL_21:
    v23 = (_QWORD *)(*(_QWORD *)(a1 + 408) + 112LL);
    if ( !*v23 )
      goto LABEL_28;
    result = HMAssignmentUnlock(v23);
    v24 = result;
    if ( !result )
      goto LABEL_28;
    v34 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v34;
    v35 = result;
    _InterlockedIncrement((volatile signed __int32 *)(result + 8));
    if ( *(_QWORD *)(a1 + 408) == gpqForeground )
      zzzInputFocusLostWindowEvent(result, 8LL);
    xxxSendMessage(v24, 8LL, 0LL, 0LL);
    v26 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v24, 0LL, 0LL);
  }
  result = ThreadUnlock1(v26, v25);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 464) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(v43);
  return result;
}
