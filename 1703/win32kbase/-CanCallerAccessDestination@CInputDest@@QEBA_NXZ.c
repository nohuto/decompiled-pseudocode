/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1C0118228
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v1; // rdi
  __int64 ThreadWin32Thread; // rax

  if ( *((_DWORD *)this + 23) == 2 )
    v1 = *((_QWORD *)this + 10);
  else
    v1 = 0LL;
  if ( !v1 )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return CheckAccessForIntegrityLevelEx(
           *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 824LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 376LL) + 824LL),
           0);
}
