/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C006E0F4
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // si
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rax
  unsigned int v26; // eax
  tagObjLock *v27; // rax
  __int64 *v28; // rcx
  __int64 result; // rax
  _QWORD v30[12]; // [rsp+38h] [rbp-60h] BYREF
  char v31; // [rsp+A0h] [rbp+8h]
  int v32; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+20h]

  memset(v30, 0, 0x30uLL);
  v30[0] = a1;
  if ( a2 )
    v9 = *a2;
  else
    v9 = 0LL;
  v30[1] = v9;
  v30[3] = *(_QWORD *)(a3 + 24);
  LODWORD(v30[2]) = *(_DWORD *)(a3 + 16);
  v30[4] = *(_QWORD *)(a3 + 32);
  v30[5] = *(_QWORD *)(a3 + 40);
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v6, gdwInAtomicOperation, v7, v8) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v31 = *(_BYTE *)(v11 + 1440);
  *(_BYTE *)(v11 + 1440) = 0;
  if ( (v31 & 1) != 0 )
  {
    tagObjLock::UnLock((tagObjLock *)(v11 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v17 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v16, v15);
  EtwTraceBeginCallback(88LL);
  v18 = KeUserModeCallback(88LL, v30, 48LL, &v33, &v32);
  EtwTraceEndCallback(88LL);
  if ( v17 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v23 = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21, v22) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v25 )
      v24 = *v25;
  }
  if ( (v31 & 1) != 0 )
  {
    v26 = DLT_THREADINFO::getDLT();
    v27 = (tagObjLock *)GetDomainLockRef(v26);
    tagObjLock::LockShared(v27);
    tagObjLock::LockExclusive((tagObjLock *)(v24 + 368));
  }
  *(_BYTE *)(v24 + 1440) = v31;
  if ( v18 < 0 || v32 != 24 )
    return 0LL;
  v28 = (__int64 *)v33;
  if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  result = *v28;
  v34 = *v28;
  return result;
}
