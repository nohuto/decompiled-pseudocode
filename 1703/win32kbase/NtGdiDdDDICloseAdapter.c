/*
 * XREFs of NtGdiDdDDICloseAdapter @ 0x1C0080B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDICloseAdapter(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C018B7C0)(a1, a2);
}
