/*
 * XREFs of sub_1800FFAA8 @ 0x1800FFAA8
 * Callers:
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 * Callees:
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     sub_1800FD9BC @ 0x1800FD9BC (sub_1800FD9BC.c)
 */

NTSTATUS __fastcall sub_1800FFAA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  __int64 v6; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-31h] BYREF
  __int16 v9; // [rsp+26h] [rbp-2Bh]
  __int64 v10; // [rsp+40h] [rbp-11h]
  __int64 v11; // [rsp+48h] [rbp-9h]
  __int64 v12; // [rsp+50h] [rbp-1h]
  __int64 v13; // [rsp+58h] [rbp+7h]
  __int64 v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+74h] [rbp+23h]

  v15 = 0LL;
  v14 = 0LL;
  v16 = 0;
  v10 = a1;
  v11 = a3;
  v12 = a2;
  v13 = a4;
  v17 = sub_1800062F4(a1);
  v6 = sub_1800FD9BC(a1, &v15, &v16);
  v14 = v15 - *(_QWORD *)(a1 + 632) - v6;
  v9 = 4133;
  return ZwTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
