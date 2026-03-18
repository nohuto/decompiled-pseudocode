/*
 * XREFs of CitUserChange @ 0x1C0081DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081E28 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C0193750 && *((_QWORD *)qword_1C0193750 + 12) && *((_QWORD *)qword_1C0193750 + 13) != a1 )
    CitpLogoff(qword_1C0193750);
}
