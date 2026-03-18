/*
 * XREFs of EditionPostEventMessage @ 0x1C011B0B0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall EditionPostEventMessage(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(*(_QWORD *)(a1 + 80) + 16LL),
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 408LL),
           a2,
           *(_QWORD *)(a1 + 80),
           a3,
           a4,
           a5,
           0LL);
}
