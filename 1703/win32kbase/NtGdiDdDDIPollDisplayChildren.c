/*
 * XREFs of NtGdiDdDDIPollDisplayChildren @ 0x1C009BF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIPollDisplayChildren(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C018B950)(a1, a2);
}
