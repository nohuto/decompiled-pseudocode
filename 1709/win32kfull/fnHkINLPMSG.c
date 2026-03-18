/*
 * XREFs of fnHkINLPMSG @ 0x1C00AA9D0
 * Callers:
 *     xxxCallCtfHook @ 0x1C005BCB8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0121148 (RtlWCSMessageWParamCharToMB.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C023AA3C (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r15d
  _DWORD *v18; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v20; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // di
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KTHREAD *v31; // rdi
  __int64 *v32; // rax
  unsigned int v33; // eax
  tagObjLock *v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdi
  ULONG64 v37; // rax
  _OWORD *v38; // xmm1_8
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // ecx
  __int64 v43; // [rsp+38h] [rbp-110h]
  __int64 v44; // [rsp+40h] [rbp-108h]
  unsigned __int64 v45[3]; // [rsp+48h] [rbp-100h] BYREF
  _OWORD v46[6]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-88h]
  __int128 v48; // [rsp+D8h] [rbp-70h]
  volatile void *Address; // [rsp+E8h] [rbp-60h]
  __int128 v50; // [rsp+F0h] [rbp-58h]
  _OWORD *v51; // [rsp+100h] [rbp-48h]
  char v52; // [rsp+150h] [rbp+8h]
  int v53; // [rsp+158h] [rbp+10h]
  int v54; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+168h] [rbp+20h]

  v55 = a4;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v46, 0, 0x58uLL);
  LODWORD(v46[0]) = a1;
  *((_QWORD *)&v46[0] + 1) = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v46[2] = *(_OWORD *)a3;
  v46[3] = *(_OWORD *)(a3 + 16);
  v46[4] = *(_OWORD *)(a3 + 32);
  v17 = *(_DWORD *)(a3 + 8);
  if ( ((v17 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v17 == 576 || ((v17 - 281) & 0xFFFFFFFD) == 0 )
    {
      v11 = *(_QWORD *)(a3 + 16);
      v12 = *(_QWORD *)(a3 + 24);
      LOBYTE(v13) = -1;
      v18 = (_DWORD *)HMValidateHandle(v12, v13, v15, v16);
      v15 = (__int64)v18;
      if ( !v18 )
        return 0LL;
      v16 = *(unsigned int *)(a3 + 8);
      if ( (_DWORD)v16 == 576
        && *(_BYTE *)((unsigned int)(unsigned __int16)*v18 * LODWORD(gSharedInfo[2]) + gSharedInfo[1] + 24LL) != 20 )
      {
        return 0LL;
      }
      if ( (((_DWORD)v16 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v18 + gSharedInfo[1] + 24LL) != 21 )
      {
        return 0LL;
      }
      v43 = *(_QWORD *)(gptiCurrent + 672LL);
      v44 = *(_QWORD *)(gptiCurrent + 680LL);
      *(_QWORD *)(gptiCurrent + 672LL) = v12;
      v14 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 680LL) = v11;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v17, &v46[3]);
  }
  v46[1] = __PAIR128__(a5, v55);
  LODWORD(v46[5]) = *a7;
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, gdwInAtomicOperation, v15, v16) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  v52 = *(_BYTE *)(v20 + 1440);
  *(_BYTE *)(v20 + 1440) = 0;
  if ( (v52 & 1) != 0 )
  {
    tagObjLock::UnLock((tagObjLock *)(v20 + 368));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
    tagObjLock::UnLock(DomainLockRef);
  }
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v26 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
    v26 = 0;
  UserSessionSwitchLeaveCrit(v25, v24);
  EtwTraceBeginCallback(47LL);
  v53 = KeUserModeCallback(47LL, v46, 88LL, v45, &v54);
  EtwTraceEndCallback(47LL);
  if ( v26 )
    EnterSharedCrit(0LL, 1LL);
  else
    EnterCrit(0LL, 1LL);
  v31 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v28, v27, v29, v30) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(v31);
    if ( v32 )
      v10 = *v32;
  }
  if ( (v52 & 1) != 0 )
  {
    v33 = DLT_THREADINFO::getDLT();
    v34 = (tagObjLock *)GetDomainLockRef(v33);
    tagObjLock::LockShared(v34);
    tagObjLock::LockExclusive((tagObjLock *)(v10 + 368));
  }
  *(_BYTE *)(v10 + 1440) = v52;
  if ( v17 == 576 || ((v17 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 672LL) = v43;
    *(_QWORD *)(gptiCurrent + 680LL) = v44;
  }
  if ( v53 < 0 || v54 != 24 )
    return 0LL;
  v35 = (__int64 *)v45[0];
  if ( v45[0] + 8 < v45[0] || v45[0] + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  v36 = *v35;
  v47 = *v35;
  v37 = v45[0];
  if ( v45[0] + 24 < v45[0] || v45[0] + 24 > MmUserProbeAddress )
    v37 = MmUserProbeAddress;
  v48 = *(_OWORD *)v37;
  v38 = *(_OWORD **)(v37 + 16);
  Address = v38;
  v50 = v48;
  v51 = v38;
  ProbeForRead(v38, 0x38uLL, 4u);
  *(_OWORD *)a3 = *v38;
  *(_OWORD *)(a3 + 16) = v38[1];
  *(_OWORD *)(a3 + 32) = v38[2];
  *a7 ^= ((unsigned __int8)*a7 ^ (unsigned __int8)*((_DWORD *)v38 + 12)) & 0x10;
  v39 = *(unsigned int *)(a3 + 8);
  if ( (((_DWORD)v39 - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    v40 = (_QWORD *)(a3 + 16);
    if ( *(_QWORD *)&v46[3] == *(_QWORD *)(a3 + 16) )
      *v40 = v11;
    else
      RtlMBMessageWParamCharToWCS(v39, v40);
  }
  v41 = *(_DWORD *)(a3 + 8);
  if ( v41 == 576 || ((v41 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v17;
    *(_QWORD *)(a3 + 16) = v11;
    *(_QWORD *)(a3 + 24) = v12;
  }
  else if ( v11 == 1 )
  {
    if ( v17 == 576 )
      FreeTouchInputInfo(v12, 1LL);
    if ( ((v17 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v12, 1LL);
  }
  return (unsigned int)v36;
}
