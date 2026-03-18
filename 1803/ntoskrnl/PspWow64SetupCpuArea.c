/*
 * XREFs of PspWow64SetupCpuArea @ 0x1405634CC
 * Callers:
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1401317D4 (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x1405643B0 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // ax
  int v4; // eax
  unsigned __int64 *v5; // r10
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 1064);
  if ( !v2 || (v3 = *(_WORD *)(v2 + 8)) == 0 )
    v3 = -31132;
  v4 = RtlpArchContextFlagFromMachine(v3);
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, (int *)&v7, &v8);
  *v5 = (((unsigned int)~(v8 - 1) & (((*v5 - 8) & 0xFFFFFFFFFFFFFFF8uLL) - v7)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
