/*
 * XREFs of sub_18005F008 @ 0x18005F008
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 * Callees:
 *     sub_18005F060 @ 0x18005F060 (sub_18005F060.c)
 */

PVOID __fastcall sub_18005F008(__int64 a1, ULONG_PTR *a2)
{
  int v3; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  sub_18005F060(&BaseAddress, a2, 4u, v3, v4, *(_QWORD *)(a1 + 32));
  return BaseAddress;
}
