/*
 * XREFs of WheapAddErrorSource @ 0x140150D28
 * Callers:
 *     WheaAddErrorSource @ 0x1405D6AE0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x14084A850 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_14038D848, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_14038D834;
  v3 = (__int64 *)qword_14038D840;
  if ( *(__int64 **)qword_14038D840 != &qword_14038D838 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_14038D838;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_14038D840 = a2;
  _InterlockedIncrement(&dword_14038D834);
  return KeSetEvent(&stru_14038D848, 0, 0);
}
