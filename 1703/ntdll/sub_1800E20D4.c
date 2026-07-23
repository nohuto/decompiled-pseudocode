/*
 * XREFs of sub_1800E20D4 @ 0x1800E20D4
 * Callers:
 *     sub_180003824 @ 0x180003824 (sub_180003824.c)
 *     sub_180003890 @ 0x180003890 (sub_180003890.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 * Callees:
 *     sub_180109410 @ 0x180109410 (sub_180109410.c)
 */

bool __fastcall sub_1800E20D4(__int64 a1)
{
  return (char *)qword_18015A258 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (unsigned int)sub_180109410(a1, (unsigned int)a1) != 0;
}
