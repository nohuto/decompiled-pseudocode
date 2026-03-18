/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004D464
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C004D2C0 (_ScheduleDispatchNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(PETHREAD *a1)
{
  HANDLE ThreadId; // rax
  __int128 v3; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  if ( ((_DWORD)a1[137] & 0x6000) == 0x2000
    && (PsGetCurrentProcess(a1) == gpepCSRSS || (unsigned int)IsDwmInputThread()) )
  {
    *(_QWORD *)&v3 = PsGetThreadProcessId(*a1);
    ThreadId = PsGetThreadId(*a1);
    v5 = 13;
    *((_QWORD *)&v3 + 1) = ThreadId;
    SystemInformation = v3;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 274) |= 0x4000u;
  }
}
