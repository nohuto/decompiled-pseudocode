/*
 * XREFs of PspInitializeDesktopActivityModeratorCallouts @ 0x14081A4BC
 * Callers:
 *     PspInitPhase1 @ 0x14081A1E8 (PspInitPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 */

__int64 __fastcall PspInitializeDesktopActivityModeratorCallouts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 589829;
  v5 = 512;
  v4 = 8;
  v7 = 0LL;
  v8 = 0LL;
  v6 = PspDamHostInterface;
  result = ExRegisterHost(&PspDamExtensionHost, a2, (unsigned __int16 *)&v3);
  if ( (int)result < 0 )
    PspDamExtensionHost = 0LL;
  return result;
}
