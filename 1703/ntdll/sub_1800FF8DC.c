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

NTSTATUS __fastcall sub_1800FF8DC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        HANDLE TraceHandle)
{
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // rax
  _BYTE Fields[6]; // [rsp+20h] [rbp-41h] BYREF
  __int16 v13; // [rsp+26h] [rbp-3Bh]
  __int64 v14; // [rsp+40h] [rbp-21h]
  __int64 v15; // [rsp+48h] [rbp-19h]
  __int64 v16; // [rsp+50h] [rbp-11h]
  __int64 v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp-1h]
  __int64 v19; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+74h] [rbp+13h]

  v17 = a4;
  v19 = 0LL;
  v18 = 0LL;
  v20 = 0;
  v14 = a1;
  v16 = a2;
  v21 = sub_1800062F4(a1);
  if ( a5 != v9 )
    v8 -= a6;
  v15 = v8;
  v10 = sub_1800FD9BC(a1, &v19, &v20);
  v18 = v19 - *(_QWORD *)(a1 + 632) - v10;
  v13 = 4138;
  return ZwTraceEvent(TraceHandle, 0x403u, 0x3Cu, Fields);
}
