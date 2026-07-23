/*
 * XREFs of RtlWakeAddressSingle @ 0x1800FB4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeAddressSingle(PVOID Address)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v1, 0);
  RtlpWakeByAddress((unsigned __int64)Address, 0);
}
