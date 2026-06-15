/*
 * XREFs of ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140057014
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017480 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140057870 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140057FA0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140059230 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400012EC (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x14001BF44 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 */

__int64 __fastcall CCrossProcessEndpointTraceLogger::Glitch(__int64 a1, unsigned int a2, const CHAR *a3)
{
  const CHAR *v3; // r9
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v9; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  int *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]

  v3 = a3;
  v9 = 1;
  if ( (unsigned int)dword_140089020 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_140089020, 2uLL) )
  {
    v13 = 16LL;
    v12 = a1 + 8;
    v10 = a2;
    v14 = (int *)&v10;
    v15 = 4LL;
    TlgCreateSz(&pDesc, v3);
    v18 = 4LL;
    v17 = &v9;
    TlgWrite((TraceLoggingHProvider)&dword_140089020, &unk_1400727ED, v6, v7, 6u, &pData);
  }
  (**(void (__fastcall ***)(__int64, _QWORD, int *, const CHAR *))(a1 + 104))(a1 + 104, 0LL, &v9, v3);
  return (**(__int64 (__fastcall ***)(__int64, _QWORD, int *))(a1 + 104))(a1 + 104, a2, &v9);
}
