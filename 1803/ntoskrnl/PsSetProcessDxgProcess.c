/*
 * XREFs of PsSetProcessDxgProcess @ 0x140580AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1976) = a2;
}
