/*
 * XREFs of ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0051F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseInput::_RIMCallBack(CBaseInput **a1)
{
  CBaseInput::RIMCallBack(a1[2], (struct RIMDevChangeStruct *)a1);
}
