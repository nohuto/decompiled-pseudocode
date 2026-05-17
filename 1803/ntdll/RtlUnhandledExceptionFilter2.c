/*
 * XREFs of RtlUnhandledExceptionFilter2 @ 0x1800F5FF0
 * Callers:
 *     RtlUserThreadStart @ 0x180073670 (RtlUserThreadStart.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 *     RtlUnhandledExceptionFilter @ 0x1800F5FD0 (RtlUnhandledExceptionFilter.c)
 *     sub_1801085E0 @ 0x1801085E0 (sub_1801085E0.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1800F4858 @ 0x1800F4858 (sub_1800F4858.c)
 */

__int64 __fastcall RtlUnhandledExceptionFilter2(__int64 *a1)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  int v3; // esi
  const wchar_t *Buffer; // r15
  __int64 v5; // rdx
  unsigned int **v6; // rcx
  unsigned int *v7; // r12
  __int64 v8; // r12
  int v9; // r9d
  __int64 v10; // rcx
  const char *v11; // rax
  int v12; // eax
  _WORD *v14; // [rsp+30h] [rbp-48h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v3 = 0;
  if ( ProcessParameters )
    Buffer = ProcessParameters->CommandLine.Buffer;
  else
    Buffer = L"<unknown>";
  if ( sub_1800F4858() )
  {
    v7 = *v6;
    if ( **v6 == -1073741819 )
    {
      DbgPrintEx(101, 0, (int)"\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, v5);
      v11 = "write to";
      if ( !*(_QWORD *)(*a1 + 32) )
        v11 = "read from";
      DbgPrintEx(101, 0, (int)"The instruction at %p tried to %s ", *(_QWORD *)(*a1 + 16), v11);
      if ( *(_QWORD *)(*a1 + 40) )
        DbgPrintEx(101, 0, (int)"an invalid address, %p\n\n");
      else
        DbgPrintEx(101, 0, (int)"a NULL pointer\n\n");
    }
    else
    {
      switch ( *v7 )
      {
        case 0xC0000006:
          DbgPrintEx(101, 0, (int)"\n\n *** Inpage error in %ws:%s\n\n", Buffer, v5);
          DbgPrintEx(
            101,
            0,
            (int)"The instruction at %p referenced memory at %p.\n",
            *(_QWORD *)(*a1 + 16),
            *(_QWORD *)(*a1 + 40));
          DbgPrintEx(101, 0, (int)"This failed because of error %Ix.\n\n", *(_QWORD *)(*a1 + 48));
          v10 = *(_QWORD *)(*a1 + 48);
          switch ( v10 )
          {
            case -1073741670LL:
              DbgPrintEx(
                101,
                0,
                (int)"This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case -1073741668LL:
            case -1073741462LL:
              DbgPrintEx(
                101,
                0,
                (int)"This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case -1073741435LL:
              DbgPrintEx(101, 0, (int)"This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v8 = *((_QWORD *)v7 + 4);
          if ( v8 )
          {
            v14 = *(_WORD **)v8;
            if ( *(_QWORD *)v8 && **(_WORD **)v8 == 1 )
            {
              DbgPrintEx(101, 0, (int)"\n\n *** Resource timeout (%p) in %ws:%s\n\n", v8, Buffer, v5, v14);
              v9 = *(_DWORD *)(v8 + 68);
              if ( v9 >= 0 )
              {
                if ( v9 <= 0 )
                  DbgPrintEx(
                    101,
                    0,
                    (int)"The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                         "\n");
                else
                  DbgPrintEx(101, 0, (int)"The resource is owned shared by %d threads\n");
              }
              else
              {
                DbgPrintEx(101, 0, (int)"The resource is owned exclusively by thread %p\n", *(_QWORD *)(v8 + 72));
              }
            }
            else
            {
              DbgPrintEx(101, 0, (int)"\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v8, Buffer, v5, v14);
              if ( *(_QWORD *)(v8 + 16) )
              {
                DbgPrintEx(101, 0, (int)"The critical section is owned by thread %p.\n");
                DbgPrintEx(101, 0, (int)"Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  101,
                  0,
                  (int)"The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(101, 0, (int)"\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, v5);
          DbgPrintEx(
            101,
            0,
            (int)"This is usually the result of a memory copy to a local buffer or structure where the size is not proper"
                 "ly calculated/checked.\n");
          DbgPrintEx(101, 0, (int)"If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            101,
            0,
            (int)"The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(101, 0, (int)"\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v7, Buffer, v5);
          break;
      }
    }
    DbgPrintEx(101, 0, (int)" *** enter .exr %p for the exception record\n", *a1);
    if ( *(_DWORD *)*a1 != -1073740791 )
      DbgPrintEx(101, 0, (int)" ***  enter .cxr %p for the context\n", a1[1]);
    DbgPrintEx(101, 0, (int)" *** then kb to get the faulting stack\n\n");
    __debugbreak();
  }
  v12 = *(_DWORD *)*a1;
  if ( v12 == -1073740791 )
  {
    RtlReportException(*a1, a1[1], 0);
    v12 = *(_DWORD *)*a1;
  }
  LOBYTE(v3) = v12 != -1073741420;
  return (unsigned int)(v3 - 1);
}
