/*
 * XREFs of PepIdlePreExecute @ 0x1C000CFA0
 * Callers:
 *     PepIdlePreExecuteV2 @ 0x1C000D000 (PepIdlePreExecuteV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepIdlePreExecute(__int64 *a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 result; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v5 = *a1;
  v7[0] = 0;
  v7[1] = a2;
  v7[2] = a3;
  v8 = a5;
  v7[3] = a4;
  result = PoFxProcessorNotification(v5, 21LL, v7);
  if ( (int)result < 0 )
    return 0LL;
  if ( v7[0] < 0 )
    return v7[0];
  return result;
}
