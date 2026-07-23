/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180016D80
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9060 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9100 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlWow64GetProcessMachines @ 0x180016520 (RtlWow64GetProcessMachines.c)
 *     RtlQueryProcessModuleInformation @ 0x180016FC4 (RtlQueryProcessModuleInformation.c)
 *     RtlpCreateUserThreadEx @ 0x1800645D8 (RtlpCreateUserThreadEx.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800830C4 (RtlpChangeQueryDebugBufferTarget.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A0580 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A0B20 (NtTerminateThread.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D84B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D8640 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8A20 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8E54 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D9004 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D9434 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB4E4 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010281C (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180102918 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int CriticalSectionOwnerInformation; // ebx
  _QWORD *v4; // r15
  SIZE_T OffsetFree; // r8
  NTSTATUS v9; // eax
  HANDLE v10; // rcx
  HANDLE v11; // rcx
  NTSTATUS result; // eax
  unsigned int v13; // r15d
  NTSTATUS (__cdecl *v14)(PVOID); // rbx
  HANDLE v15; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v17; // r15
  int v18; // eax
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  USHORT ProcessMachine[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-94h]
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+78h] [rbp-88h] BYREF
  PUSER_THREAD_START_ROUTINE v25; // [rsp+80h] [rbp-80h]
  _CLIENT_ID ClientId; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v30; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v32[17]; // [rsp+E8h] [rbp-18h] BYREF
  int ThreadInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffera[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS (__cdecl *v35)(PVOID); // [rsp+1E0h] [rbp+E0h]

  CriticalSectionOwnerInformation = 0;
  v25 = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  ProcessHandle = 0LL;
  v22 = 0;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  if ( (Flags & 0x3FFFFFBE) == 0 && (Flags & 0x41) != 0 && (Flags & 0x80000000) != 0 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v4 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v9 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v10 = ProcessHandle;
      v4 = v32;
      v32[1] = RtlpQueryReadVirtualMemory;
      if ( v9 < 0 )
        v10 = 0LL;
      v32[2] = NtQueryInformationProcess;
      ProcessHandle = v10;
      v32[0] = v10;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( ((Flags & 0x41) == 0
       || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(v4, Flags, Buffer)) == 0)
      && ((Flags & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation(Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
    }
    v11 = ProcessHandle;
    if ( !ProcessHandle )
      return CriticalSectionOwnerInformation;
    goto LABEL_23;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(ProcessHandle, ProcessMachine, 0LL) >= 0 )
      {
        if ( ProcessMachine[0] )
        {
          v14 = 0LL;
          if ( ZwDuplicateObject(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 ProcessHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &TargetHandle,
                 0x10u,
                 0,
                 0) >= 0 )
          {
            if ( ZwReadVirtualMemory(TargetHandle, &LdrSystemDllInitBlock, Buffera, 0xE0uLL, &NumberOfBytesRead) >= 0
              && NumberOfBytesRead == 224 )
            {
              v14 = v35;
            }
            NtClose(TargetHandle);
            if ( v14 )
            {
              v25 = v14;
              v22 = 1;
            }
          }
        }
      }
      NtClose(ProcessHandle);
    }
    ProcessHandle = 0LL;
  }
  v13 = v22;
  v24 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v22, &v24);
  if ( result >= 0 )
  {
    v15 = v24;
    TargetProcessHandle = v24;
    if ( !v24 )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v30);
    v11 = v15;
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          v15,
                                          0LL,
                                          0LL,
                                          Options,
                                          v25,
                                          Buffer->ViewBaseTarget,
                                          (__int64)&Handle,
                                          0LL);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v17 = Handle;
        v18 = NtWaitForSingleObject(Handle, 1u, &Timeout);
        CriticalSectionOwnerInformation = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, v18);
        }
        else
        {
          CriticalSectionOwnerInformation = ZwQueryInformationThread(
                                              v17,
                                              ThreadBasicInformation,
                                              ThreadInformation,
                                              0x30u,
                                              0LL);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = ThreadInformation[0];
        }
        NtClose(v17);
        v13 = v22;
      }
      NtClose(v15);
      if ( v30 )
        RtlpDestroyExecutionRequiredRequest(v30);
      if ( CriticalSectionOwnerInformation < 0 )
        return CriticalSectionOwnerInformation;
      if ( v13 == 1 )
      {
        CriticalSectionOwnerInformation = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        if ( !v13 )
          CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(Buffer);
        if ( CriticalSectionOwnerInformation < 0 )
          return CriticalSectionOwnerInformation;
      }
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        CriticalSectionOwnerInformation = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        CriticalSectionOwnerInformation = -1073741558;
      if ( CriticalSectionOwnerInformation >= 0 )
        return RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
      return CriticalSectionOwnerInformation;
    }
LABEL_23:
    NtClose(v11);
    return CriticalSectionOwnerInformation;
  }
  return result;
}
