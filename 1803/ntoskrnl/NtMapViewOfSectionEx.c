/*
 * XREFs of NtMapViewOfSectionEx @ 0x14074A1C8
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1404E8D2C (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall NtMapViewOfSectionEx(
        int a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        int a6,
        int a7,
        unsigned __int64 *a8,
        unsigned int a9)
{
  return MiMapViewOfSectionExCommon(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, 0, 0LL, KeGetCurrentThread()->PreviousMode);
}
