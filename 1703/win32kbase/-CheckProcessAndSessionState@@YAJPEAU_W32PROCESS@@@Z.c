/*
 * XREFs of ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0051368
 * Callers:
 *     xxxInitProcessInfo @ 0x1C005038C (xxxInitProcessInfo.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CheckProcessAndSessionState(struct _W32PROCESS *a1)
{
  NTSTATUS InformationProcess; // ebx
  int v3; // edi
  void *ProcessInheritedFromUniqueProcessId; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // ecx
  LARGE_INTEGER v17; // rdi
  int v18; // r8d
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v22; // [rsp+90h] [rbp+27h]
  void *ProcessHandle; // [rsp+D8h] [rbp+6Fh] BYREF

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
        goto LABEL_19;
      InformationProcess = ZwQueryInformationProcess(
                             ProcessHandle,
                             ProcessImageInformation,
                             ProcessInformation,
                             0x40u,
                             0LL);
      if ( InformationProcess >= 0
        && (int)IsIsNativeSubSystemTypeSupported() >= 0
        && !(unsigned int)IsNativeSubSystemType(v22) )
      {
        InformationProcess = -1073741790;
      }
      ZwClose(ProcessHandle);
      if ( InformationProcess < 0 )
      {
LABEL_19:
        if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
          InformationProcess = 0;
        if ( InformationProcess < 0 && v3 )
        {
          UserSessionSwitchLeaveCrit();
          v6 = GreWaitForTextReady();
          InformationProcess = v6;
          if ( v6 == 259 )
          {
            InformationProcess = 0;
          }
          else if ( v6 >= 0 )
          {
            gdwHydraHint |= 0x10000000u;
          }
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
          if ( v15 )
          {
            v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LOBYTE(v16) = byte_1C0186D98 - 1;
              Template_xqx(
                v16,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v18,
                v17.LowPart,
                0,
                (char)gullUserCritAcquireToken);
            }
            if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v18,
                0,
                1000 * v17.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v11;
          gbValidateHandleForIL = 1;
        }
      }
    }
  }
  return (unsigned int)InformationProcess;
}
