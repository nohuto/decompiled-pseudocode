/*
 * XREFs of sub_1800FE1FC @ 0x1800FE1FC
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     sub_180060CFC @ 0x180060CFC (sub_180060CFC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_1800FE1FC(__int64 a1, int a2, __int64 a3, __int64 a4)
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
  v12 = sub_180060CFC(a1);
  v7 = 4128;
  return ZwTraceEvent(v4, 0x403u, 0x24u, Fields);
}
