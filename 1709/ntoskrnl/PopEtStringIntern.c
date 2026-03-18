/*
 * XREFs of PopEtStringIntern @ 0x140459884
 * Callers:
 *     PopEtEnergyContextSetState @ 0x140457394 (PopEtEnergyContextSetState.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     RtlInternTableIntern @ 0x140458D2C (RtlInternTableIntern.c)
 */

__int64 __fastcall PopEtStringIntern(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = 32LL;
  v9[1] = v8;
  v9[2] = 1LL;
  memset(v8, 0, sizeof(v8));
  v8[3] = 2LL;
  v8[2] = 2 * a2 + 2;
  v8[0] = a1;
  v6 = RtlInternTableIntern(PopEtGlobals + 56, (__int64)v9);
  result = 0LL;
  if ( !v6 )
    return 3221225626LL;
  *a3 = v6;
  return result;
}
