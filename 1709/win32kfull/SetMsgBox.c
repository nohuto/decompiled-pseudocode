/*
 * XREFs of SetMsgBox @ 0x1C01B88D0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int64 __fastcall SetMsgBox(__int64 a1)
{
  __int64 v1; // r8

  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 8LL);
  ++*(_DWORD *)(v1 + 48);
  SetOrClrWF(1, (_DWORD *)a1, 0x20u, 1);
  return 1LL;
}
