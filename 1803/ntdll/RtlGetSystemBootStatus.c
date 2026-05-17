/*
 * XREFs of RtlGetSystemBootStatus @ 0x1800E6D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800839FC @ 0x1800839FC (sub_1800839FC.c)
 */

__int64 __fastcall RtlGetSystemBootStatus(int a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v5 = a1;
  v6 = a2;
  return sub_1800839FC(0x1Fu, (__int64)&v5, 1u, a4);
}
