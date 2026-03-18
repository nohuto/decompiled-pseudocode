/*
 * XREFs of CitUserChange @ 0x1C0084680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C018E8C8 && *((_QWORD *)qword_1C018E8C8 + 52) && *((_QWORD *)qword_1C018E8C8 + 53) != a1 )
    CitpLogoff(qword_1C018E8C8);
}
