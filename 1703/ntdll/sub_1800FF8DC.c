/*
 * XREFs of sub_1800FF8DC @ 0x1800FF8DC
 * Callers:
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 * Callees:
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     sub_1800FD9BC @ 0x1800FD9BC (sub_1800FD9BC.c)
 */

__int64 __fastcall sub_1800FF8DC(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = sub_1800062F4(a1);
  sub_1800FD9BC(a1, &v3, &v4);
  return ZwTraceEvent();
}
