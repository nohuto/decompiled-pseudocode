/*
 * XREFs of InvokePTStateChange @ 0x1C0001954
 * Callers:
 *     PerfControlPTStates @ 0x1C00018B0 (PerfControlPTStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    a1 += 8LL;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a1)(v2, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
}
