/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C01170A8
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  if ( *((_DWORD *)this + 23) == 2 )
    v1 = *((_QWORD *)this + 10);
  else
    v1 = 0LL;
  if ( !v1 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessForIntegrityLevelEx(
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 832LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 400LL) + 832LL),
           0);
}
