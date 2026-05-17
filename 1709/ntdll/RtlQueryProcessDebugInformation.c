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

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int CriticalSectionOwnerInformation; // ebx
  _QWORD *v4; // r15
  __int64 v8; // r8
  int v9; // eax
  HANDLE v10; // rcx
  HANDLE v11; // rcx
  __int64 result; // rax
  unsigned int v13; // r15d
  void (__fastcall __noreturn *v14)(); // rbx
  HANDLE v15; // r14
  HANDLE v16; // rcx
  HANDLE v17; // r15
  NTSTATUS v18; // eax
  __int64 v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v22[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-94h]
  HANDLE v24; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v25; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v26)(); // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v31; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+D8h] [rbp-28h]
  _QWORD v38[17]; // [rsp+E8h] [rbp-18h] BYREF
  int v39[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v40[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v41)(); // [rsp+1E0h] [rbp+E0h]

  CriticalSectionOwnerInformation = 0;
  v26 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  Handle = 0LL;
  v23 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v8 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v8 )
    memset((void *)(a3 + 208), 0, v8 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  if ( (a2 & 0x3FFFFFBE) == 0 && (a2 & 0x41) != 0 && (a2 & 0x80000000) != 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v4 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v33 = 48;
      v34 = 0LL;
      v36 = 0;
      v35 = 0LL;
      v27 = a1;
      v37 = 0LL;
      v28 = 0LL;
      v9 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v33, &v27);
      v10 = Handle;
      v4 = v38;
      v38[1] = RtlpQueryReadVirtualMemory;
      if ( v9 < 0 )
        v10 = 0LL;
      v38[2] = NtQueryInformationProcess;
      Handle = v10;
      v38[0] = v10;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( ((a2 & 0x41) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessModuleInformation(v4, a2, a3)) == 0)
      && ((a2 & 2) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (CriticalSectionOwnerInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (CriticalSectionOwnerInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      CriticalSectionOwnerInformation = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
    }
    v11 = Handle;
    if ( !Handle )
      return (unsigned int)CriticalSectionOwnerInformation;
    goto LABEL_23;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v33 = 48;
    v34 = 0LL;
    v36 = 0;
    v35 = 0LL;
    v27 = a1;
    v37 = 0LL;
    v28 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 4096LL, &v33, &v27) >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines((__int64)Handle, v22, 0LL) >= 0 )
      {
        if ( v22[0] )
        {
          v14 = 0LL;
          if ( (int)ZwDuplicateObject(-1LL, Handle, -1LL, &v24, 16, 0, 0) >= 0 )
          {
            if ( (int)ZwReadVirtualMemory(v24, &LdrSystemDllInitBlock, v40, 224LL, &v29) >= 0 && v29 == 224 )
              v14 = v41;
            NtClose(v24);
            if ( v14 )
            {
              v26 = v14;
              v23 = 1;
            }
          }
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v13 = v23;
  v25 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v23, &v25);
  if ( (int)result >= 0 )
  {
    v15 = v25;
    v16 = v25;
    if ( !v25 )
      v16 = *(HANDLE *)(a3 + 136);
    CriticalSectionOwnerInformation = RtlpCreateExecutionRequiredRequest(v16, &v32);
    v11 = v15;
    if ( CriticalSectionOwnerInformation >= 0 )
    {
      CriticalSectionOwnerInformation = RtlpCreateUserThreadEx(
                                          (_DWORD)v15,
                                          0,
                                          6,
                                          0,
                                          0LL,
                                          0LL,
                                          v20,
                                          (__int64)v26,
                                          *(_QWORD *)(a3 + 16),
                                          (__int64)&v31,
                                          0LL);
      if ( CriticalSectionOwnerInformation >= 0 )
      {
        v17 = v31;
        v18 = NtWaitForSingleObject(v31, 1u, &Timeout);
        CriticalSectionOwnerInformation = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, (unsigned int)v18);
        }
        else
        {
          v19 = 0LL;
          CriticalSectionOwnerInformation = ZwQueryInformationThread(v17, 0LL, v39);
          if ( CriticalSectionOwnerInformation >= 0 )
            CriticalSectionOwnerInformation = v39[0];
        }
        NtClose(v17);
        v13 = v23;
      }
      NtClose(v15);
      if ( v32 )
        RtlpDestroyExecutionRequiredRequest(v32);
      if ( CriticalSectionOwnerInformation < 0 )
        return (unsigned int)CriticalSectionOwnerInformation;
      if ( v13 == 1 )
      {
        CriticalSectionOwnerInformation = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        if ( !v13 )
          CriticalSectionOwnerInformation = RtlpCopyRemoteDebugInformation(a3);
        if ( CriticalSectionOwnerInformation < 0 )
          return (unsigned int)CriticalSectionOwnerInformation;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        CriticalSectionOwnerInformation = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        CriticalSectionOwnerInformation = -1073741558;
      if ( CriticalSectionOwnerInformation >= 0 )
        return (unsigned int)RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL, v19);
      return (unsigned int)CriticalSectionOwnerInformation;
    }
LABEL_23:
    NtClose(v11);
    return (unsigned int)CriticalSectionOwnerInformation;
  }
  return result;
}
