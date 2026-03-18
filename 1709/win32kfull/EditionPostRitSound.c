/*
 * XREFs of EditionPostRitSound @ 0x1C01DFC20
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostRitSound(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL),
           0xEu,
           0LL,
           a2,
           a3,
           a4,
           0LL);
}
