/*
 * XREFs of SmpStartCsr @ 0x140001DA0
 * Callers:
 *     SmpApiCallback @ 0x140003BD0 (SmpApiCallback.c)
 *     SmpCreateInitialSession @ 0x14000C360 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpStopCsr @ 0x140001070 (SmpStopCsr.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140001B60 (SmpAllocateInitialCommandBuffer.c)
 *     SmpRecordControlBlock @ 0x140001CD8 (SmpRecordControlBlock.c)
 *     SmpExecuteCommand @ 0x1400025E0 (SmpExecuteCommand.c)
 *     SmpAllocateControlBlock @ 0x140003AD4 (SmpAllocateControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140004AB0 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140004BE4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004C70 (SmpReleaseControlBlock.c)
 *     SmpGetCoreProcessIds @ 0x14000C180 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CA4D (memset_0.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ControlBlock; // rax
  HANDLE *v4; // rbx
  int CoreProcessIds; // edi
  int v6; // eax
  _QWORD *v7; // rcx
  unsigned int v8; // eax
  NTSTATUS v9; // eax
  PVOID v11; // rcx
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  _BYTE EventInformation[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h]
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v19; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ProcessHandle; // [rsp+78h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp-80h]
  void *v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v24; // [rsp+108h] [rbp+8h]
  int v25; // [rsp+110h] [rbp+10h]

  memset_0(&v19, 0, 0x68uLL);
  v2 = *(unsigned int *)(a1 + 48);
  BaseAddress = 0LL;
  v15 = 0LL;
  if ( (unsigned int)v2 < SmpNumberInitialSessions )
  {
    CoreProcessIds = SmpGetCoreProcessIds(v2, &BaseAddress);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
    if ( CoreProcessIds >= 0 )
    {
      v11 = BaseAddress;
      if ( BaseAddress && *((_DWORD *)BaseAddress + 6) == 2 )
        *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress + 6);
      else
        CoreProcessIds = -1073741823;
      if ( v11 )
        SmpDereferenceKnownSubSys(v11);
      if ( CoreProcessIds >= 0 )
      {
        *(_QWORD *)(a1 + 312) = v15;
        return 0LL;
      }
      v25 = *(_DWORD *)(a1 + 48);
      v24 = 6;
      SmpStopCsr((__int64)v23);
      return (unsigned int)CoreProcessIds;
    }
  }
  NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
  UnicodeString.Length = *(_WORD *)(a1 + 52);
  UnicodeString.MaximumLength = UnicodeString.Length;
  UnicodeString.Buffer = (PWSTR)(a1 + 56);
  ControlBlock = SmpAllocateControlBlock();
  v4 = (HANDLE *)ControlBlock;
  if ( !ControlBlock )
    return 3221225626LL;
  CoreProcessIds = SmpAllocateInitialCommandBuffer(*(_QWORD *)(ControlBlock + 24), (__m128i *)&UnicodeString);
  if ( CoreProcessIds >= 0 )
  {
    CoreProcessIds = SmpExecuteCommand((int)&UnicodeString, (PRTL_USER_PROCESS_PARAMETERS)&v19);
    RtlFreeUnicodeString(&UnicodeString);
    if ( CoreProcessIds >= 0 )
    {
      v6 = NtQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
      CoreProcessIds = v6;
      if ( v6 >= 0 )
      {
        v7 = v4[2];
        *v7 = v4[4];
        v7[1] = v4[5];
        v4[6] = ProcessHandle;
        v4[7] = v22;
        *((_DWORD *)v4 + 2) = ProcessInformation;
        v8 = _InterlockedIncrement(&dword_1400219E8);
        if ( v8 > SmpNumberInitialSessions )
          _InterlockedDecrement(&dword_1400219E8);
        else
          *(_DWORD *)(SmpCoreProcessIds + 40LL * (v8 - 1)) = ProcessInformation;
        *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
        *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
        v4[12] = *(HANDLE *)(a1 + 32);
        SmpRecordControlBlock((__int64)v4);
        CoreProcessIds = NtResumeThread(ThreadHandle, 0LL);
        NtClose(ThreadHandle);
        if ( CoreProcessIds >= 0 )
        {
          Object[0] = v4[6];
          Object[1] = v4[4];
          v9 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
          CoreProcessIds = v9;
          if ( v9 < 0 )
          {
            if ( (*(_BYTE *)v4 & 1) != 0
              || (_m_prefetchw(v4), (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) != 0) )
            {
              CoreProcessIds = 0;
            }
          }
          else
          {
            if ( v9 )
              goto LABEL_11;
            NtQueryEvent(v4[4], EventBasicInformation, EventInformation, 8u, 0LL);
            if ( !v17 )
            {
              if ( (*(_BYTE *)v4 & 1) == 0 )
                _InterlockedOr((volatile signed __int32 *)v4, 1u);
              CoreProcessIds = -1073741823;
LABEL_31:
              SmpDestroyControlBlock(v4);
              goto LABEL_26;
            }
            CoreProcessIds = NtClearEvent(v4[4]);
          }
LABEL_11:
          if ( CoreProcessIds >= 0 )
          {
            SmpReleaseControlBlock(v4);
            return 259LL;
          }
          goto LABEL_31;
        }
        if ( (*(_BYTE *)v4 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v4, 1u);
        goto LABEL_31;
      }
      NtTerminateProcess(ProcessHandle, v6);
      NtClose(ProcessHandle);
      NtClose(ThreadHandle);
    }
  }
LABEL_26:
  SmpReleaseControlBlock(v4);
  return (unsigned int)CoreProcessIds;
}
