/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1C00EFC80
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnDWORDOPTINLPMSG(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // r15
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rbx
  __int64 v23; // rsi
  __int64 *v24; // rax
  char v25; // bl
  char v26; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  bool v31; // si
  int v32; // r15d
  int v33; // edx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rax
  unsigned int v40; // eax
  tagObjLock *v41; // rax
  __int64 v42; // rax
  ULONG64 v43; // rcx
  __int128 v45; // [rsp+30h] [rbp-C8h]
  __int64 v46; // [rsp+40h] [rbp-B8h]
  _QWORD v47[3]; // [rsp+58h] [rbp-A0h] BYREF
  _OWORD v48[8]; // [rsp+70h] [rbp-88h] BYREF
  int v49; // [rsp+100h] [rbp+8h] BYREF
  char v50; // [rsp+108h] [rbp+10h]
  unsigned __int64 v51; // [rsp+110h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(v11 + 448);
  else
    v13 = 0LL;
  memset(v48, 0, 0x60uLL);
  *(_QWORD *)&v48[0] = v13;
  DWORD2(v48[0]) = a2;
  *(_QWORD *)&v48[1] = a3;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 44) = 0;
  }
  DWORD2(v48[1]) = a4 != 0;
  if ( a4 )
  {
    v48[3] = *(_OWORD *)a4;
    v48[4] = *(_OWORD *)(a4 + 16);
    v48[5] = *(_OWORD *)(a4 + 32);
  }
  v48[2] = __PAIR128__(a6, a5);
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v18 )
      v17 = *v18;
  }
  v47[0] = *(_QWORD *)(v17 + 392);
  *(_QWORD *)(v17 + 392) = v47;
  v47[1] = a1;
  if ( a1 )
    _InterlockedAdd(a1 + 2, 1u);
  v19 = *(_QWORD *)(v11 + 456);
  v45 = *(_OWORD *)(v19 + 64);
  v46 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v13;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 64LL) = v20;
  if ( a1 )
    v21 = *((_QWORD *)a1 + 35);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL) = v21;
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, gdwInAtomicOperation) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v24 )
      v23 = *v24;
  }
  v50 = *(_BYTE *)(v23 + 1440);
  v25 = v50;
  *(_BYTE *)(v23 + 1440) = 0;
  v26 = v25 & 1;
  if ( v26 )
  {
    tagObjLock::UnLock((tagObjLock *)(v23 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  v31 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
  UserSessionSwitchLeaveCrit(v30, v29);
  EtwTraceBeginCallback(4LL);
  v32 = KeUserModeCallback(4LL, v48, 96LL, &v51, &v49);
  EtwTraceEndCallback(4LL);
  if ( v31 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v35 = KeGetCurrentThread();
  v36 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v39 )
      v36 = *v39;
  }
  if ( v26 )
  {
    v40 = DLT_THREADINFO::getDLT();
    v41 = (tagObjLock *)GetDomainLockRef(v40);
    tagObjLock::LockShared(v41);
    tagObjLock::LockExclusive((tagObjLock *)(v36 + 368));
  }
  *(_BYTE *)(v36 + 1440) = v50;
  ThreadUnlock1(v38, v37);
  v42 = *(_QWORD *)(v11 + 456);
  *(_OWORD *)(v42 + 64) = v45;
  *(_QWORD *)(v42 + 80) = v46;
  if ( v32 < 0 || v49 != 24 )
    return 0LL;
  v43 = v51;
  if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
    v43 = MmUserProbeAddress;
  return *(_QWORD *)v43;
}
