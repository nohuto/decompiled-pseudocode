/*
 * XREFs of sub_1800FF98C @ 0x1800FF98C
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800FF98C(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  HANDLE v4; // r10
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v7; // [rsp+26h] [rbp-62h]
  __int64 v8; // [rsp+40h] [rbp-48h]
  int v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+4Ch] [rbp-3Ch]
  __int64 v11; // [rsp+54h] [rbp-34h]
  __int64 v12; // [rsp+5Ch] [rbp-2Ch]

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = sub_1800062F4(a1);
  v7 = 4128;
  return ZwTraceEvent(v4, 0x403u, 0x24u, Fields);
}
