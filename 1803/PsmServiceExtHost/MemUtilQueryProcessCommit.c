/*
 * XREFs of MemUtilQueryProcessCommit @ 0x18006D03C
 * Callers:
 *     MemUtilQueryProcessMetrics @ 0x18002E81C (MemUtilQueryProcessMetrics.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall MemUtilQueryProcessCommit(DWORD dwProcessId, _QWORD *a2)
{
  HANDLE v3; // rax
  ULONG v4; // ebx
  void *v5; // rdi
  int InformationProcess; // eax
  _BYTE ProcessInformation[72]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v9; // [rsp+78h] [rbp-40h]
  __int64 v10; // [rsp+98h] [rbp-20h]

  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    InformationProcess = NtQueryInformationProcess(v3, ProcessVmCounters, ProcessInformation, 0x70u, 0LL);
    if ( InformationProcess >= 0 )
      *a2 = v10 + v9;
    else
      v4 = RtlNtStatusToDosError(InformationProcess);
    CloseHandle(v5);
  }
  else
  {
    return GetLastError();
  }
  return v4;
}
