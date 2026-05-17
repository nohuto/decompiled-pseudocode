/*
 * XREFs of RtlUnhandledExceptionFilter2 @ 0x1800F8510
 * Callers:
 *     RtlUserThreadStart @ 0x180050C20 (RtlUserThreadStart.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 *     RtlUnhandledExceptionFilter @ 0x1800F84F0 (RtlUnhandledExceptionFilter.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 * Callees:
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 */

__int64 __fastcall RtlUnhandledExceptionFilter2(const void **a1)
{
  wchar_t *Buffer; // r13
  __int64 v3; // rdx
  unsigned int **v4; // rcx
  int v5; // esi
  unsigned int *v6; // r15
  __int64 v7; // r15
  int v8; // r9d
  __int64 v9; // r9
  __int64 v10; // rcx
  const char *v11; // rax
  const void *v12; // r9
  _WORD *v14; // [rsp+30h] [rbp-48h]

  Buffer = NtCurrentPeb()->ProcessParameters->CommandLine.Buffer;
  v5 = 0;
  if ( sub_1800F7520() )
  {
    v6 = *v4;
    if ( **v4 == -1073741819 )
    {
      DbgPrintEx(101, 0, "\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, v3);
      v11 = "write to";
      if ( !*((_QWORD *)*a1 + 4) )
        v11 = "read from";
      DbgPrintEx(101, 0, "The instruction at %p tried to %s ", *((const void **)*a1 + 2), v11);
      v12 = (const void *)*((_QWORD *)*a1 + 5);
      if ( v12 )
        DbgPrintEx(101, 0, "an invalid address, %p\n\n", v12);
      else
        DbgPrintEx(101, 0, "a NULL pointer\n\n");
    }
    else
    {
      switch ( *v6 )
      {
        case 0xC0000006:
          DbgPrintEx(101, 0, "\n\n *** Inpage error in %ws:%s\n\n", Buffer, v3);
          DbgPrintEx(
            101,
            0,
            "The instruction at %p referenced memory at %p.\n",
            *((const void **)*a1 + 2),
            *((const void **)*a1 + 5));
          DbgPrintEx(101, 0, "This failed because of error %Ix.\n\n", *((_QWORD *)*a1 + 6));
          v10 = *((_QWORD *)*a1 + 6);
          switch ( v10 )
          {
            case -1073741670LL:
              DbgPrintEx(
                101,
                0,
                "This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case -1073741668LL:
            case -1073741462LL:
              DbgPrintEx(
                101,
                0,
                "This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case -1073741435LL:
              DbgPrintEx(101, 0, "This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v7 = *((_QWORD *)v6 + 4);
          if ( v7 )
          {
            v14 = *(_WORD **)v7;
            if ( *(_QWORD *)v7 && **(_WORD **)v7 == 1 )
            {
              DbgPrintEx(101, 0, "\n\n *** Resource timeout (%p) in %ws:%s\n\n", v7, Buffer, v3, v14);
              v8 = *(_DWORD *)(v7 + 68);
              if ( v8 >= 0 )
              {
                if ( v8 <= 0 )
                  DbgPrintEx(
                    101,
                    0,
                    "The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
                else
                  DbgPrintEx(101, 0, "The resource is owned shared by %d threads\n", v8);
              }
              else
              {
                DbgPrintEx(101, 0, "The resource is owned exclusively by thread %p\n", *(const void **)(v7 + 72));
              }
            }
            else
            {
              DbgPrintEx(101, 0, "\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v7, Buffer, v3, v14);
              v9 = *(_QWORD *)(v7 + 16);
              if ( v9 )
              {
                DbgPrintEx(101, 0, "The critical section is owned by thread %x.\n", v9);
                DbgPrintEx(101, 0, "Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  101,
                  0,
                  "The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                  "\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(101, 0, "\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, v3);
          DbgPrintEx(
            101,
            0,
            "This is usually the result of a memory copy to a local buffer or structure where the size is not properly ca"
            "lculated/checked.\n");
          DbgPrintEx(101, 0, "If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            101,
            0,
            "The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(101, 0, "\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v6, Buffer, v3);
          break;
      }
    }
    DbgPrintEx(101, 0, " *** enter .exr %p for the exception record\n", *a1);
    if ( *(_DWORD *)*a1 != -1073740791 )
      DbgPrintEx(101, 0, " ***  enter .cxr %p for the context\n", a1[1]);
    DbgPrintEx(101, 0, " *** then kb to get the faulting stack\n\n");
    __debugbreak();
  }
  if ( *(_DWORD *)*a1 == -1073740791 )
    RtlReportException((__int64)*a1, (__int64)a1[1], 0);
  LOBYTE(v5) = *(_DWORD *)*a1 != -1073741420;
  return (unsigned int)(v5 - 1);
}
