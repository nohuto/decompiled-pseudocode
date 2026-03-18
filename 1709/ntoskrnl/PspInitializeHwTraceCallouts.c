/*
 * XREFs of PspInitializeHwTraceCallouts @ 0x14084AD34
 * Callers:
 *     PspInitPhase1 @ 0x14084A9B0 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x1405D82F4 (ExRegisterHost.c)
 */

__int64 __fastcall PspInitializeHwTraceCallouts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 65546;
  v5 = 512;
  v4 = 0;
  v6 = PspHwTraceHostInterface;
  v7 = 0LL;
  v8 = 0LL;
  result = ExRegisterHost(&PspHwTraceExtensionHost, a2, (unsigned __int16 *)&v3);
  if ( (int)result < 0 )
    PspHwTraceExtensionHost = 0LL;
  return result;
}
