/*
 * XREFs of sub_180059D2C @ 0x180059D2C
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 */

__int64 sub_180059D2C()
{
  qword_18015C278 = (__int64)&qword_18015C270;
  qword_18015C270 = (__int64)&qword_18015C270;
  qword_18015C218 = (__int64)&qword_18015C210;
  qword_18015C210 = (__int64)&qword_18015C210;
  RtlInitializeCriticalSectionEx(&stru_18015C240, 0, 0);
  return sub_18005CE48();
}
