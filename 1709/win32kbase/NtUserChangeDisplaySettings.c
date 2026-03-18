/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C0064B40
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0064CF0 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C0066240 (DrvLogDiagDisplayChange.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(struct _UNICODE_STRING *a1, struct _devicemodeW *a2, int a3, void *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  __int64 *DomainLockRef; // rbx
  int v27; // ecx
  tagObjLock *v28; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v29[10]; // [rsp+50h] [rbp-98h] BYREF

  memset(v29, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v29[1]);
  v29[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v29[3]) = 26;
  LOBYTE(v29[6]) = -1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v15, v14, v16, v17);
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v28);
  v18 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v18[2];
      v18[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v18);
      RIMLockExclusive((__int64)DomainLockRef);
      v18 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v28);
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)gptiCurrent + 116) & 0x20000000) != 0 )
      v23 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 728LL) + 24LL) & 0x10;
    else
      v23 = 0;
    if ( (v23
       || !(unsigned int)CheckAccessForIntegrityLevelEx(
                           *(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL),
                           0xFFFFFFFF00002000uLL,
                           0LL))
      && a3 != 34 )
    {
      v27 = 5;
LABEL_20:
      v24 = -1;
      UserSetLastError(v27);
      goto LABEL_11;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v27 = 87;
      goto LABEL_20;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v24 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a4, UserMode, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v29);
  }
  else
  {
    v24 = -1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v24;
}
