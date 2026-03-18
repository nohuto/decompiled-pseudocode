/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140072630
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x1400D0A74 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 */

signed __int64 __fastcall MiDeleteVirtualAddresses(int a1, int a2, int a3, __int64 a4)
{
  int v5; // r9d
  _KPROCESS *Process; // rdi
  signed __int64 result; // rax

  v5 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(a2) = 17;
  MiDeletePagablePteRange((_DWORD)Process + 1280, a2, a1, v5, 0, a3 | 0x40, a4);
  result = *(_QWORD *)(a4 + 24);
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], -result);
  return result;
}
