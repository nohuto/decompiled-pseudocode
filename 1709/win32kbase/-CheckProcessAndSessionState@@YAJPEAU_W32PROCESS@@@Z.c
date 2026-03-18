/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0023B9C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0024008 (xxxInitProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // edi
  int v3; // ebx
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 *v14; // rsi
  tagObjLock *DomainLockRef; // rbx
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-19h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+78h] [rbp+17h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+37h]
  void *ProcessHandle; // [rsp+D0h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    return 0LL;
  if ( gpepCSRSS && gpidLogon && (gdwHydraHint & 0x40000) != 0 )
  {
    if ( (int)IsGreWaitForTextReadySupported() < 0 || (gdwHydraHint & 0x10000000) != 0 )
      return 0LL;
    v3 = 1;
  }
  if ( (unsigned int)PsGetCurrentProcessSessionId() )
  {
    ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)a1);
    if ( ProcessInheritedFromUniqueProcessId )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
      InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
      if ( InformationProcess < 0 )
        goto LABEL_20;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && (int)IsIsNativeSubSystemTypeSupported() >= 0
        && !(unsigned int)IsNativeSubSystemType(v19) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_20:
        if ( InformationProcess == -1073741558 || InformationProcess == -1073741813 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit(v6);
          v7 = GreWaitForTextReady();
          InformationProcess = v7;
          if ( v7 == 259 )
          {
            InformationProcess = 0;
          }
          else if ( v7 >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v13;
          gbValidateHandleForIL = 1;
          CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&ProcessHandle);
          v14 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
            do
            {
              gpducstulHead = v14[2];
              v14[2] = 0LL;
              tagObjLock::UnLock(DomainLockRef);
              HMUnlockObject(*v14);
              RIMLockExclusive((__int64)DomainLockRef);
              v14 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
          }
          tagObjLock::UnLock((tagObjLock *)ProcessHandle);
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
