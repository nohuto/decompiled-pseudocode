/*
 * XREFs of RtlSetSystemBootStatus @ 0x1800839D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800839FC @ 0x1800839FC (sub_1800839FC.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v6 = a3;
  v4 = a1;
  v5 = a2;
  return sub_1800839FC(32LL, &v4);
}
