/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C00A37C0
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     WmsgpSendPSPMessage @ 0x1C01C48B8 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  unsigned int v5; // edi
  int v6; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rsi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v21[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+20h] BYREF

  v5 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, (__int64)a3, a4);
    *(_OWORD *)v21 = *a3;
    v6 = WmsgpSendPSPMessage(v8, v5, v21, &v22);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11, v12);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17, v18);
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)v21);
    v19 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v19[2];
        v19[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v19);
        RIMLockExclusive((__int64)DomainLockRef);
        v19 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v21[0]);
  }
  else
  {
    *(_OWORD *)v21 = *a3;
    v6 = WmsgpSendPSPMessage(a1, a2, v21, &v22);
  }
  if ( v6 >= 0 )
    return v22;
  return (unsigned int)v6;
}
