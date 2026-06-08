/*
 * XREFs of SaveDevExt @ 0x1C0003358
 * Callers:
 *     GetNtProcessorNumber @ 0x1C00226C0 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C002ACD0 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C00195F0;
  if ( *(__int64 **)qword_1C00195F0 != &qword_1C00195E8 )
    __fastfail(3u);
  *v2 = &qword_1C00195E8;
  v2[1] = result;
  *result = v2;
  qword_1C00195F0 = (__int64)v2;
  return result;
}
