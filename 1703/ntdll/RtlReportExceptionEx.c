/*
 * XREFs of RtlReportExceptionEx @ 0x1800DD4D0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 * Callees:
 *     RtlWerpReportException_0 @ 0x180003BD8 (RtlWerpReportException_0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1800DE274 @ 0x1800DE274 (sub_1800DE274.c)
 *     sub_1800DE2C0 @ 0x1800DE2C0 (sub_1800DE2C0.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 *     sub_1800DE578 @ 0x1800DE578 (sub_1800DE578.c)
 *     sub_1800DE5B4 @ 0x1800DE5B4 (sub_1800DE5B4.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  ULONG v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  struct _TEB *v10; // r8
  int v12; // ebx
  _QWORD *v13; // rcx
  char *v14; // rdx
  _OWORD *v15; // r9
  __int64 v16; // rax
  HANDLE EventHandle; // [rsp+40h] [rbp-528h] BYREF
  HANDLE SourceHandle; // [rsp+48h] [rbp-520h]
  PVOID BaseAddress; // [rsp+50h] [rbp-518h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-510h] BYREF
  HANDLE TargetHandle; // [rsp+60h] [rbp-508h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-500h] BYREF
  HANDLE CrashReportSharedMem; // [rsp+70h] [rbp-4F8h] BYREF
  int v24; // [rsp+78h] [rbp-4F0h]
  int v25; // [rsp+7Ch] [rbp-4ECh]
  HANDLE v26; // [rsp+80h] [rbp-4E8h]
  char v27; // [rsp+90h] [rbp-4D8h] BYREF
  ULONG Flagsa[2]; // [rsp+500h] [rbp-68h] BYREF
  HANDLE v29; // [rsp+508h] [rbp-60h]
  HANDLE v30; // [rsp+510h] [rbp-58h]
  HANDLE v31; // [rsp+518h] [rbp-50h]
  void *v32; // [rsp+590h] [rbp+28h]

  SourceHandle = Timeout;
  v26 = v32;
  TargetHandle = 0LL;
  v20 = 0LL;
  EventHandle = 0LL;
  Handle = 0LL;
  CrashReportSharedMem = 0LL;
  BaseAddress = 0LL;
  v7 = sub_180070674(Timeout);
  v8 = sub_1800DE5B4(v32);
  v24 = v8;
  v10 = NtCurrentTeb();
  if ( v7 == LODWORD(v10->ClientId.UniqueProcess) && v8 == LODWORD(v10->ClientId.UniqueThread) )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  if ( v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    sub_1800DE274(ExceptionRecord, ContextRecord);
  if ( (Flags & 4) != 0 || (v12 = sub_1800DE578(SourceHandle, v9, v10), v12 >= 0) )
  {
    v12 = sub_1800DE2C0(&EventHandle);
    if ( v12 >= 0 )
    {
      v25 = sub_1800DE4A0(SourceHandle);
      v12 = sub_1800DE334(&CrashReportSharedMem, &BaseAddress);
      if ( v12 >= 0 )
      {
        v12 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v12 >= 0 )
        {
          v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v26,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v20,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v12 >= 0 )
          {
            v13 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v13[21] = 1LL;
            *((_DWORD *)v13 + 1) = v7;
            *((_DWORD *)v13 + 2) = v24;
            v13[23] = TargetHandle;
            v13[24] = v20;
            v13[26] = EventHandle;
            v13[28] = &v27;
            *((_DWORD *)v13 + 58) = v25;
            *((_DWORD *)v13 + 59) = Flags | 0x40000000;
            v14 = (char *)BaseAddress;
            *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v15 = v14 + 416;
            *((_QWORD *)v14 + 31) = 1LL;
            *(_OWORD *)(v14 + 264) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
            *(_OWORD *)(v14 + 280) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
            *(_OWORD *)(v14 + 296) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
            *(_OWORD *)(v14 + 312) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
            *(_OWORD *)(v14 + 328) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
            *(_OWORD *)(v14 + 344) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
            *(_OWORD *)(v14 + 360) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
            *(_OWORD *)(v14 + 376) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
            *(_OWORD *)(v14 + 392) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
            *((_QWORD *)v14 + 51) = ExceptionRecord->ExceptionInformation[14];
            if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v14 + 32) = 1LL;
              v16 = 9LL;
              do
              {
                *v15 = *(_OWORD *)&ContextRecord->P1Home;
                v15[1] = *(_OWORD *)&ContextRecord->P3Home;
                v15[2] = *(_OWORD *)&ContextRecord->P5Home;
                v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
                v15[4] = *(_OWORD *)&ContextRecord->SegGs;
                v15[5] = *(_OWORD *)&ContextRecord->Dr1;
                v15[6] = *(_OWORD *)&ContextRecord->Dr3;
                v15 += 8;
                *(v15 - 1) = *(_OWORD *)&ContextRecord->Dr7;
                ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
                --v16;
              }
              while ( v16 );
              *v15 = *(_OWORD *)&ContextRecord->P1Home;
              v15[1] = *(_OWORD *)&ContextRecord->P3Home;
              v15[2] = *(_OWORD *)&ContextRecord->P5Home;
              v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
              v15[4] = *(_OWORD *)&ContextRecord->SegGs;
            }
            else
            {
              *((_QWORD *)v14 + 32) = 2LL;
              memset(v15, 0, 0x4D0uLL);
            }
            *(_QWORD *)Flagsa = EventHandle;
            v29 = CrashReportSharedMem;
            v30 = TargetHandle;
            v31 = v20;
            v12 = RtlWerpReportException_0(v7, CrashReportSharedMem, (ULONG)Flagsa, (PHANDLE)4);
            if ( v12 >= 0 )
            {
              v12 = sub_1800DE5E4(SourceHandle, EventHandle, Handle, 0LL, Flags, &Handle);
              if ( v12 >= 0 )
              {
                if ( (Flags & 4) != 0
                  || (v12 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v12 >= 0) )
                {
                  v12 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( CrashReportSharedMem )
    ZwClose(CrashReportSharedMem);
  if ( EventHandle )
  {
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  if ( v20 )
    ZwClose(v20);
  if ( TargetHandle )
    ZwClose(TargetHandle);
  return v12;
}
