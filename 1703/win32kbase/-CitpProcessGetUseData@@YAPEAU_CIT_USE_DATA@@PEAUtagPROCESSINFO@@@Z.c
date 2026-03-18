/*
 * XREFs of ?CitpProcessGetUseData@@YAPEAU_CIT_USE_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C005332C
 * Callers:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 * Callees:
 *     ?CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154704 (-CitpProcessGetProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_USE_DATA *__fastcall CitpProcessGetUseData(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROG_DATA *ProgData; // rax
  __int64 v3; // r11

  if ( !byte_1C018E8B8 )
    return 0LL;
  ProgData = CitpProcessGetProgData(a1);
  if ( ProgData )
    return (struct _CIT_PROG_DATA *)((char *)ProgData + 88);
  if ( !*(_QWORD *)(v3 + 872) )
    return 0LL;
  return (struct _CIT_IMPACT_CONTEXT *)((char *)qword_1C018E8C8 + 216);
}
