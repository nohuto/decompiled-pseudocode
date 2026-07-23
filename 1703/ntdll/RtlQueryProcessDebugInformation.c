/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180067770
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D9E10 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9EB0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     sub_180067988 @ 0x180067988 (sub_180067988.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwOpenProcess @ 0x1800A57C0 (ZwOpenProcess.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9620 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800D9C04 @ 0x1800D9C04 (sub_1800D9C04.c)
 *     sub_1800D9DB4 @ 0x1800D9DB4 (sub_1800D9DB4.c)
 *     sub_1800DA0F4 @ 0x1800DA0F4 (sub_1800DA0F4.c)
 *     sub_1800DBEFC @ 0x1800DBEFC (sub_1800DBEFC.c)
 *     sub_18010072C @ 0x18010072C (sub_18010072C.c)
 *     sub_180100828 @ 0x180100828 (sub_180100828.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS (__cdecl *v3)(PVOID); // r13
  int ProcessBackTraceInformation; // ebx
  _QWORD *v5; // r15
  SIZE_T OffsetFree; // r8
  ULONG v10; // edx
  NTSTATUS v11; // eax
  HANDLE v12; // rcx
  HANDLE v13; // rcx
  NTSTATUS result; // eax
  unsigned int v15; // r15d
  HANDLE v16; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v18; // r15
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v22; // [rsp+68h] [rbp-98h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-90h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v27; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v29[18]; // [rsp+D0h] [rbp-30h] BYREF
  int ThreadInformation[24]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v31; // [rsp+1E0h] [rbp+E0h]

  v3 = (NTSTATUS (__cdecl *)(PVOID))RtlpQueryProcessDebugInformationRemote;
  ProcessHandle = 0LL;
  ProcessBackTraceInformation = 0;
  v5 = 0LL;
  v31 = 0;
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
  v10 = Flags & 0x41;
  if ( (Flags & 0x3FFFFFBE) == 0 && v10 != 0 && (Flags & 0x80000000) != 0 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v5 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v11 = ZwOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v12 = ProcessHandle;
      v5 = v29;
      v10 = Flags & 0x41;
      if ( v11 < 0 )
        v12 = 0LL;
      v29[1] = sub_1800681C0;
      ProcessHandle = v12;
      v29[2] = ZwQueryInformationProcess;
      v29[0] = v12;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( (!v10 || (ProcessBackTraceInformation = sub_180067988(v5, Flags, Buffer)) == 0)
      && ((Flags & 2) == 0 || (ProcessBackTraceInformation = RtlQueryProcessBackTraceInformation(Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (ProcessBackTraceInformation = RtlQueryProcessLockInformation(Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (ProcessBackTraceInformation = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (ProcessBackTraceInformation = sub_1800DBEFC(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      ProcessBackTraceInformation = sub_1800D9DB4(Buffer, Flags);
    }
    v13 = ProcessHandle;
    if ( !ProcessHandle )
      return ProcessBackTraceInformation;
    goto LABEL_23;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( ZwOpenProcess(&ProcessHandle, 0x400u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessWow64Information, &ProcessInformation, 8u, 0LL) >= 0
        && ProcessInformation )
      {
        v3 = (NTSTATUS (__cdecl *)(PVOID))LdrSystemDllInitBlock.Wow64SharedInformation[5];
        if ( LdrSystemDllInitBlock.Wow64SharedInformation[5] )
          v31 = 1;
        else
          v3 = (NTSTATUS (__cdecl *)(PVOID))RtlpQueryProcessDebugInformationRemote;
      }
      ZwClose(ProcessHandle);
    }
    ProcessHandle = 0LL;
  }
  v15 = v31;
  v22 = 0LL;
  result = sub_1800686F4(Buffer, UniqueProcessId, v31, &v22);
  if ( result >= 0 )
  {
    v16 = v22;
    TargetProcessHandle = v22;
    if ( !v22 )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    ProcessBackTraceInformation = sub_18010072C(TargetProcessHandle, &v27);
    v13 = v16;
    if ( ProcessBackTraceInformation >= 0 )
    {
      ProcessBackTraceInformation = sub_180052D68(
                                      v16,
                                      0LL,
                                      6,
                                      0,
                                      0LL,
                                      0LL,
                                      v20,
                                      v3,
                                      Buffer->ViewBaseTarget,
                                      &Handle,
                                      0LL);
      if ( ProcessBackTraceInformation >= 0 )
      {
        v18 = Handle;
        v19 = ZwWaitForSingleObject(Handle, 1u, &Timeout);
        ProcessBackTraceInformation = v19;
        if ( v19 < 0 )
        {
          ZwTerminateThread(v18, v19);
        }
        else
        {
          ProcessBackTraceInformation = ZwQueryInformationThread(
                                          v18,
                                          ThreadBasicInformation,
                                          ThreadInformation,
                                          0x30u,
                                          0LL);
          if ( ProcessBackTraceInformation >= 0 )
            ProcessBackTraceInformation = ThreadInformation[0];
        }
        ZwClose(v18);
        v15 = v31;
      }
      ZwClose(v16);
      if ( v27 )
        sub_180100828(v27);
      if ( ProcessBackTraceInformation < 0 )
        return ProcessBackTraceInformation;
      if ( v15 == 1 )
      {
        ProcessBackTraceInformation = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        if ( !v15 )
          ProcessBackTraceInformation = sub_1800D9C04(Buffer);
        if ( ProcessBackTraceInformation < 0 )
          return ProcessBackTraceInformation;
      }
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        ProcessBackTraceInformation = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        ProcessBackTraceInformation = -1073741558;
      if ( ProcessBackTraceInformation >= 0 )
        return sub_1800DA0F4(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
      return ProcessBackTraceInformation;
    }
LABEL_23:
    ZwClose(v13);
    return ProcessBackTraceInformation;
  }
  return result;
}
