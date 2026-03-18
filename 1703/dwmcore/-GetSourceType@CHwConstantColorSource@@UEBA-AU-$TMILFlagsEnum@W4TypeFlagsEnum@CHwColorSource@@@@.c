/*
 * XREFs of ?GetSourceType@CHwConstantColorSource@@UEBA?AU?$TMILFlagsEnum@W4TypeFlagsEnum@CHwColorSource@@@@XZ @ 0x1801A24D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHwConstantColorSource::GetSourceType(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 24) != 0LL ? 3 : 1;
  return result;
}
