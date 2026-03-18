/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C010990C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C0112C94 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( *((_DWORD *)this + 21) == 2 )
    v3 = *((_QWORD *)this + 9);
  else
    v3 = 0LL;
  if ( !v3 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessForIntegrityLevelEx(
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL) + 872LL),
           0);
}
