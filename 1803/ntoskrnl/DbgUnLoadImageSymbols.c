/*
 * XREFs of DbgUnLoadImageSymbols @ 0x14028641C
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x1401B2BA0 (DebugService2.c)
 */

void __stdcall DbgUnLoadImageSymbols(PSTRING Name, PVOID Base, ULONG_PTR ProcessId)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  v4 = 0;
  v5 = 0;
  v3[0] = Base;
  v3[1] = ProcessId;
  DebugService2((__int64)Name, (__int64)v3, 4u);
}
