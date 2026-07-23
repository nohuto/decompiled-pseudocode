/*
 * XREFs of EtwEventWrite @ 0x180007400
 * Callers:
 *     EtwEventWriteEndScenario @ 0x1800048C0 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     sub_180043AA8 @ 0x180043AA8 (sub_180043AA8.c)
 *     EtwEventWriteStartScenario @ 0x180088410 (EtwEventWriteStartScenario.c)
 *     sub_1800C8548 @ 0x1800C8548 (sub_1800C8548.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800FC960 @ 0x1800FC960 (sub_1800FC960.c)
 *     sub_1800FC9D4 @ 0x1800FC9D4 (sub_1800FC9D4.c)
 *     sub_1801093D4 @ 0x1801093D4 (sub_1801093D4.c)
 * Callees:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 */

ULONG __cdecl EtwEventWrite(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return sub_180007480(RegHandle, (_DWORD)EventDescriptor, 0, 0, 0, 0LL, 0LL, UserDataCount, (__int64)UserData);
}
