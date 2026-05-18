/*
 * XREFs of ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x180004B4C
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x18000458C (--1CApiPortClient@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApiPortClient::ReleaseExtraDataSection(CApiPortClient *this)
{
  HANDLE CurrentProcess; // rax

  EnterCriticalSection(&CriticalSection);
  if ( BaseAddress )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  LeaveCriticalSection(&CriticalSection);
}
