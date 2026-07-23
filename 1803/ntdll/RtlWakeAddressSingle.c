/*
 * XREFs of RtlWakeAddressSingle @ 0x180049D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeAddressSingle(PVOID Address)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v1, 0);
  sub_18004A8A8(Address, 0LL);
}
