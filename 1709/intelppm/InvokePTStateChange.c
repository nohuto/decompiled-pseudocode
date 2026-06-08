/*
 * XREFs of InvokePTStateChange @ 0x1C00039C0
 * Callers:
 *     PerfControlPTStates @ 0x1C0003920 (PerfControlPTStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r10

  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 40);
    a1 += 8LL;
  }
  LOBYTE(a4) = a3;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))a1)(v4, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), a4);
}
