/*
 * XREFs of SfnDWORD @ 0x1C00AA690
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0059548 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxDefWindowProc @ 0x1C0093900 (xxxDefWindowProc.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00DFCD0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnDWORD(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rbx
  __int64 v28; // rsi
  __int64 *v29; // rax
  char v30; // bl
  char v31; // bl
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // si
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KTHREAD *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rax
  unsigned int v46; // eax
  tagObjLock *v47; // rax
  __int64 v48; // rax
  __int64 *v49; // rax
  __int64 result; // rax
  _QWORD v51[7]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+78h] [rbp-90h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  _QWORD v55[11]; // [rsp+B0h] [rbp-58h] BYREF
  int v56; // [rsp+110h] [rbp+8h] BYREF
  char v57; // [rsp+118h] [rbp+10h]
  unsigned __int64 v58; // [rsp+120h] [rbp+18h] BYREF

  v8 = a2;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( a1 )
    v18 = (__int64)a1 - *(_QWORD *)(v12 + 448);
  else
    v18 = 0LL;
  v51[0] = v18;
  v51[1] = v8;
  v51[2] = a3;
  v51[3] = a4;
  v51[4] = a5;
  v51[5] = a6;
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13, v15, v16) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v23 )
      v20 = *v23;
  }
  v55[0] = *(_QWORD *)(v20 + 392);
  *(_QWORD *)(v20 + 392) = v55;
  v55[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v24 = *(_QWORD *)(v12 + 456);
  v52 = *(_OWORD *)(v24 + 64);
  v53 = *(_QWORD *)(v24 + 80);
  *(_QWORD *)(v24 + 72) = v18;
  v25 = 0LL;
  if ( a1 )
    v25 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 64LL) = v25;
  v26 = 0LL;
  if ( a1 )
    v26 = *((_QWORD *)a1 + 35);
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 80LL) = v26;
  if ( gdwInAtomicOperation )
  {
    v26 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v26, gdwInAtomicOperation, v21, v22) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v29 )
      v28 = *v29;
  }
  v57 = *(_BYTE *)(v28 + 1440);
  v30 = v57;
  *(_BYTE *)(v28 + 1440) = 0;
  v31 = v30 & 1;
  if ( v31 )
  {
    tagObjLock::UnLock((tagObjLock *)(v28 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v36 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v36 = 0;
  UserSessionSwitchLeaveCrit(v35, v34);
  EtwTraceBeginCallback(2LL);
  v37 = KeUserModeCallback(2LL, v51, 48LL, &v58, &v56);
  EtwTraceEndCallback(2LL);
  if ( v36 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v42 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v39, v38, v40, v41) )
  {
    v45 = (__int64 *)PsGetThreadWin32Thread(v42);
    if ( v45 )
      v11 = *v45;
  }
  if ( v31 )
  {
    v46 = DLT_THREADINFO::getDLT();
    v47 = (tagObjLock *)GetDomainLockRef(v46);
    tagObjLock::LockShared(v47);
    tagObjLock::LockExclusive((tagObjLock *)(v11 + 368));
  }
  *(_BYTE *)(v11 + 1440) = v57;
  ThreadUnlock1(v44, v43);
  v48 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v48 + 64) = v52;
  *(_QWORD *)(v48 + 80) = v53;
  if ( v37 < 0 || v56 != 24 )
    return 0LL;
  v49 = (__int64 *)v58;
  if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
    v49 = (__int64 *)MmUserProbeAddress;
  result = *v49;
  v54 = result;
  return result;
}
