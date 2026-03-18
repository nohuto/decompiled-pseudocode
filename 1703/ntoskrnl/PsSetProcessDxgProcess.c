/*
 * XREFs of PsSetProcessDxgProcess @ 0x14045A8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1952) = a2;
}
