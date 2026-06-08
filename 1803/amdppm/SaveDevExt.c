/*
 * XREFs of SaveDevExt @ 0x1C00038BC
 * Callers:
 *     GetLpIndex @ 0x1C001AF90 (GetLpIndex.c)
 *     GetNtProcessorNumber @ 0x1C00203E0 (GetNtProcessorNumber.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SaveDevExt(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  *(_QWORD *)(DevExts + 8LL * a2) = a1;
  v2 = (_QWORD *)(a1 + 32);
  result = (_QWORD *)qword_1C0011430;
  if ( *(__int64 **)qword_1C0011430 != &qword_1C0011428 )
    __fastfail(3u);
  *v2 = &qword_1C0011428;
  v2[1] = result;
  *result = v2;
  qword_1C0011430 = (__int64)v2;
  return result;
}
