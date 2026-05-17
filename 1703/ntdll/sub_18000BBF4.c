/*
 * XREFs of sub_18000BBF4 @ 0x18000BBF4
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 */

__int64 sub_18000BBF4()
{
  qword_18015B258 = (__int64)&qword_18015B250;
  qword_18015B250 = (__int64)&qword_18015B250;
  qword_18015B1F8 = (__int64)&qword_18015B1F0;
  qword_18015B1F0 = (__int64)&qword_18015B1F0;
  RtlInitializeCriticalSectionEx(&unk_18015B220, 0LL, 0LL);
  return sub_18000BBA8();
}
