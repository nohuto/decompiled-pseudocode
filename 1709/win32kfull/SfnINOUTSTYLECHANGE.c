/*
 * XREFs of SfnINOUTSTYLECHANGE @ 0x1C00AC1D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnINOUTSTYLECHANGE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned int v10; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rsi
  struct _KTHREAD *v21; // r12
  __int64 v22; // r15
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rbx
  __int64 v30; // rsi
  __int64 *v31; // rax
  char v32; // bl
  char v33; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  char v38; // si
  int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rax
  unsigned int v48; // eax
  tagObjLock *v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD v55[7]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v56; // [rsp+78h] [rbp-90h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  _QWORD v59[10]; // [rsp+B8h] [rbp-50h] BYREF
  int v60; // [rsp+110h] [rbp+8h] BYREF
  char v61; // [rsp+118h] [rbp+10h]
  unsigned __int64 v62; // [rsp+120h] [rbp+18h] BYREF
  _QWORD *v63; // [rsp+128h] [rbp+20h]

  v63 = a4;
  v10 = a2;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  v14 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v14 = *ThreadWin32Thread;
  }
  if ( a1 )
    v20 = (__int64)a1 - *(_QWORD *)(v14 + 448);
  else
    v20 = 0LL;
  v55[0] = v20;
  v55[1] = v10;
  v55[2] = a3;
  v55[4] = a5;
  v55[5] = a6;
  v55[3] = *a4;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15, v17, v18) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v25 )
      v22 = *v25;
  }
  v59[0] = *(_QWORD *)(v22 + 392);
  *(_QWORD *)(v22 + 392) = v59;
  v59[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v26 = *(_QWORD *)(v14 + 456);
  v56 = *(_OWORD *)(v26 + 64);
  v57 = *(_QWORD *)(v26 + 80);
  *(_QWORD *)(v26 + 72) = v20;
  v27 = 0LL;
  if ( a1 )
    v27 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v14 + 456) + 64LL) = v27;
  v28 = 0LL;
  if ( a1 )
    v28 = *((_QWORD *)a1 + 35);
  *(_QWORD *)(*(_QWORD *)(v14 + 456) + 80LL) = v28;
  if ( gdwInAtomicOperation )
  {
    v28 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v28, gdwInAtomicOperation, v23, v24) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v31 )
      v30 = *v31;
  }
  v61 = *(_BYTE *)(v30 + 1440);
  v32 = v61;
  *(_BYTE *)(v30 + 1440) = 0;
  v33 = v32 & 1;
  if ( v33 )
  {
    tagObjLock::UnLock((tagObjLock *)(v30 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v38 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v38 = 0;
  UserSessionSwitchLeaveCrit(v37, v36);
  EtwTraceBeginCallback(39LL);
  v39 = KeUserModeCallback(39LL, v55, 48LL, &v62, &v60);
  EtwTraceEndCallback(39LL);
  if ( v38 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v44 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v40, v42, v43) )
  {
    v47 = (__int64 *)PsGetThreadWin32Thread(v44);
    if ( v47 )
      v13 = *v47;
  }
  if ( v33 )
  {
    v48 = DLT_THREADINFO::getDLT();
    v49 = (tagObjLock *)GetDomainLockRef(v48);
    tagObjLock::LockShared(v49);
    tagObjLock::LockExclusive((tagObjLock *)(v13 + 368));
  }
  *(_BYTE *)(v13 + 1440) = v61;
  ThreadUnlock1(v46, v45);
  v50 = *(_QWORD *)(v14 + 456);
  *(_OWORD *)(v50 + 64) = v56;
  *(_QWORD *)(v50 + 80) = v57;
  if ( v39 < 0 || v60 != 24 )
    return 0LL;
  v51 = (__int64 *)v62;
  if ( v62 + 8 < v62 || v62 + 8 > MmUserProbeAddress )
    v51 = (__int64 *)MmUserProbeAddress;
  v52 = *v51;
  v58 = *v51;
  if ( v10 == 124 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v53 = *(_QWORD **)(v62 + 16);
    if ( v53 + 1 < v53 || (unsigned __int64)(v53 + 1) > MmUserProbeAddress )
      v53 = (_QWORD *)MmUserProbeAddress;
    *v63 = *v53;
  }
  return v52;
}
