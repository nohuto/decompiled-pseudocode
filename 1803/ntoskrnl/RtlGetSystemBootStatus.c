/*
 * XREFs of RtlGetSystemBootStatus @ 0x140627A20
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatus(int a1, __int64 a2, int a3, void *a4)
{
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v5 = a1;
  v6 = a2;
  return RtlpSystemBootStatusRequest(0x1Fu, (__int64)&v5, 1u, a4);
}
