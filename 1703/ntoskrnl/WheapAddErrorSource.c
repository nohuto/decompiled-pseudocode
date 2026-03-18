/*
 * XREFs of WheapAddErrorSource @ 0x140162668
 * Callers:
 *     WheaAddErrorSource @ 0x1405970A0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x14081A088 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&word_14036F130, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_14036F11C;
  v3 = (__int64 *)qword_14036F128;
  if ( *(__int64 **)qword_14036F128 != &qword_14036F120 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_14036F120;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_14036F128 = a2;
  _InterlockedIncrement(&dword_14036F11C);
  return KeSetEvent((PRKEVENT)&word_14036F130, 0, 0);
}
