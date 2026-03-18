/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1C00E1870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rsi
  struct _KTHREAD *v16; // r15
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rbx
  __int64 v25; // rsi
  __int64 *v26; // rax
  char v27; // bl
  char v28; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // si
  int v34; // r15d
  int v35; // edx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rax
  unsigned int v42; // eax
  tagObjLock *v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rcx
  __int64 v46; // r8
  ULONG64 v47; // rcx
  __int128 v48; // xmm1
  __int64 v49; // xmm0_8
  __int128 v51; // [rsp+48h] [rbp-E0h]
  __int64 v52; // [rsp+58h] [rbp-D0h]
  _QWORD v53[3]; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD v54[17]; // [rsp+A0h] [rbp-88h] BYREF
  int v55; // [rsp+130h] [rbp+8h] BYREF
  char v56; // [rsp+138h] [rbp+10h]
  unsigned __int64 v57; // [rsp+140h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v15 = (__int64)a1 - *(_QWORD *)(v13 + 448);
  else
    v15 = 0LL;
  memset(v54, 0, 0x50uLL);
  v54[0] = v15;
  LODWORD(v54[1]) = a2;
  v54[2] = a3;
  *(_DWORD *)(a4 + 36) = 0;
  *(_OWORD *)&v54[3] = *(_OWORD *)a4;
  *(_OWORD *)&v54[5] = *(_OWORD *)(a4 + 16);
  v54[7] = *(_QWORD *)(a4 + 32);
  v54[8] = a5;
  v54[9] = a6;
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v20 )
      v17 = *v20;
  }
  v53[0] = *(_QWORD *)(v17 + 392);
  *(_QWORD *)(v17 + 392) = v53;
  v53[1] = a1;
  if ( a1 )
    _InterlockedAdd(a1 + 2, 1u);
  v21 = *(_QWORD *)(v13 + 456);
  v51 = *(_OWORD *)(v21 + 64);
  v52 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v15;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v23;
  if ( gdwInAtomicOperation )
  {
    v23 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v24 = KeGetCurrentThread();
  v25 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v23, gdwInAtomicOperation) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v24);
    if ( v26 )
      v25 = *v26;
  }
  v56 = *(_BYTE *)(v25 + 1440);
  v27 = v56;
  *(_BYTE *)(v25 + 1440) = 0;
  v28 = v27 & 1;
  if ( v28 )
  {
    tagObjLock::UnLock((tagObjLock *)(v25 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v33 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v32, v31);
  EtwTraceBeginCallback(22LL);
  v34 = KeUserModeCallback(22LL, v54, 80LL, &v57, &v55);
  EtwTraceEndCallback(22LL);
  if ( v33 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v37 = KeGetCurrentThread();
  v38 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v36, v35) )
  {
    v41 = (__int64 *)PsGetThreadWin32Thread(v37);
    if ( v41 )
      v38 = *v41;
  }
  if ( v28 )
  {
    v42 = DLT_THREADINFO::getDLT();
    v43 = (tagObjLock *)GetDomainLockRef(v42);
    tagObjLock::LockShared(v43);
    tagObjLock::LockExclusive((tagObjLock *)(v38 + 368));
  }
  *(_BYTE *)(v38 + 1440) = v56;
  ThreadUnlock1(v40, v39);
  v44 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v44 + 64) = v51;
  *(_QWORD *)(v44 + 80) = v52;
  if ( v34 < 0 || v55 != 24 )
    return 0LL;
  v45 = (__int64 *)v57;
  if ( v57 + 8 < v57 || v57 + 8 > MmUserProbeAddress )
    v45 = (__int64 *)MmUserProbeAddress;
  v46 = *v45;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v47 = *(_QWORD *)(v57 + 16);
    if ( v47 + 40 < v47 || v47 + 40 > MmUserProbeAddress )
      v47 = MmUserProbeAddress;
    v48 = *(_OWORD *)(v47 + 16);
    v49 = *(_QWORD *)(v47 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v47;
    *(_OWORD *)(a4 + 16) = v48;
    *(_QWORD *)(a4 + 32) = v49;
  }
  return v46;
}
