/*
 * XREFs of xxxSetModernAppWindow @ 0x1C0004A10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzAttachThreadInput @ 0x1C00B34F8 (zzzAttachThreadInput.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     VerifyChildMenu @ 0x1C013E26C (VerifyChildMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetModernAppWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v6; // rsi
  int v7; // r12d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // rcx
  char v20; // bl
  __int64 v21; // rdx
  _QWORD v23[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-11h] BYREF
  _QWORD v26[3]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v27[24]; // [rsp+90h] [rbp+1Fh] BYREF
  char v28; // [rsp+D8h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(v2 + 1272);
  if ( (*(_DWORD *)(v2 + 1096) & 0x40000) == 0 )
    goto LABEL_58;
  v9 = *(_QWORD *)(v2 + 1264);
  if ( !v9 || v9 != a1 )
    goto LABEL_58;
  v10 = (__int64 *)gptiCurrent;
  if ( *(_QWORD *)(v2 + 376) == *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( a2 )
    {
      v12 = ValidateHwnd(a2);
      v6 = v12;
      if ( !v12
        || v12 == a1
        || *(_QWORD *)(v12 + 104) == a1
        || v12 == *(_QWORD *)(v2 + 1272)
        || *(_QWORD *)(v12 + 16) == v2 )
      {
        v11 = 1400LL;
        goto LABEL_59;
      }
      v10 = (__int64 *)gptiCurrent;
    }
    if ( !v8 )
    {
LABEL_17:
      if ( gpqForeground )
      {
        if ( v8 )
        {
          v13 = *(_QWORD *)(v2 + 384);
          if ( gpqForeground == v13 )
          {
            v14 = *(_QWORD *)(v8 + 16);
            if ( *(_QWORD *)(v14 + 384) == v13 && gptiForeground == v14 )
              v7 = 1;
          }
        }
      }
      v15 = *v10;
      v24[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v15 + 368) = v24;
      v24[1] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v16 = *v10;
      v25[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v16 + 368) = v25;
      v25[1] = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      v17 = *v10;
      v26[0] = *(_QWORD *)(*v10 + 368);
      *(_QWORD *)(v17 + 368) = v26;
      ++*(_DWORD *)(a1 + 8);
      v26[1] = a1;
      LockW32Thread(v2, v27);
      v23[0] = v2 + 1272;
      v23[1] = v6;
      HMAssignmentLock(v23);
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
      if ( v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 88LL) == a1 )
          xxxSendNotifyMessage(v8, 841LL, (unsigned __int64)(*(_BYTE *)(a1 + 71) & 0x20) << 16, 0LL, 0);
        if ( *(_QWORD *)(*(_QWORD *)(v2 + 384) + 80LL) == v8 )
        {
          xxxSendNotifyMessage(v8, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 80LL);
        }
      }
      if ( v6 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 88LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 841LL, (unsigned __int64)(*(_BYTE *)(v6 + 71) & 0x20) << 16, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 88LL);
        }
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL) == v6 )
        {
          xxxSendNotifyMessage(v6, 8LL, 0LL, 0LL, 0);
          HMAssignmentUnlock(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) + 80LL);
        }
      }
      if ( !v28 )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v28);
      }
      if ( v6 )
      {
        v18 = *(_BYTE *)(v6 + 71);
        SetOrClrWF(0LL, v6, 3968LL, 1LL);
        SetOrClrWF(1LL, v6, 3904LL, 1LL);
        VerifyChildMenu(v6, (v18 & 0xC0) == 64);
        xxxSetWindowStyle((struct tagWND *)v6);
        xxxSetParentWorker((struct tagWND *)v6);
        if ( *(_QWORD *)(v6 + 104) != a1
          || (v19 = *(_QWORD *)(v2 + 384), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) != v19) )
        {
LABEL_56:
          PopAndFreeW32ThreadLock(v27);
          ThreadUnlock1();
          ThreadUnlock1();
          ThreadUnlock1();
          return v3;
        }
        if ( gpqForeground == v19 && *(_QWORD *)(v2 + 1272) == v6 && *(_QWORD *)(v19 + 88) == a1 )
          xxxSendNotifyMessage(v6, 841LL, 1LL, 0LL, 0);
      }
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 104) == a1 )
        {
          xxxSetParentWorker((struct tagWND *)v8);
          v20 = *(_BYTE *)(v8 + 71);
          SetOrClrWF(0LL, v8, 3904LL, 1LL);
          SetOrClrWF(1LL, v8, 3968LL, 1LL);
          VerifyChildMenu(v8, (v20 & 0xC0) == 64);
          xxxSetWindowStyle((struct tagWND *)v8);
          v21 = *(_QWORD *)(v8 + 16);
          if ( *(_QWORD *)(v21 + 384) == *(_QWORD *)(v2 + 384) )
          {
            zzzAttachThreadInput(v2, v21, 0LL);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v28);
            if ( v7 && gptiForeground == *(_QWORD *)(v8 + 16) && *(_QWORD *)(v2 + 384) == gpqForeground )
              xxxSetForegroundThreadWithWindowHint(v2, 0LL);
            if ( !v28 )
            {
              --gdwInAtomicOperation;
              UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v28);
            }
          }
        }
      }
      v3 = 1;
      goto LABEL_56;
    }
    if ( *(_QWORD *)(v8 + 16) != v2 )
    {
      if ( *(_QWORD *)(v8 + 104) != a1 )
        v8 = 0LL;
      goto LABEL_17;
    }
LABEL_58:
    v11 = 87LL;
    goto LABEL_59;
  }
  v11 = 5LL;
LABEL_59:
  UserSetLastError(v11);
  return 0LL;
}
