/*
 * XREFs of ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800F6494
 * Callers:
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800F6BCC (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800F7690 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F69F8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::AddToDynamicPool(Sarm::CEndpointResourcePool *this, unsigned int Data1)
{
  __int64 v2; // r8
  int v4; // eax
  unsigned int v5; // eax
  UINT32 cData; // [rsp+20h] [rbp-59h]
  int v8; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-45h] BYREF
  Sarm::CEndpointResourcePool *v10; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  GUID *p_pActivityId; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  __int64 v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  int *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  unsigned int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  Sarm::CEndpointResourcePool **v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  GUID pActivityId; // [rsp+E8h] [rbp+6Fh] BYREF

  pActivityId.Data1 = Data1;
  v2 = *((_QWORD *)this + 2);
  if ( !v2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL,
      cData);
    __debugbreak();
  }
  v4 = *(_DWORD *)(v2 + 20) - *(_DWORD *)(v2 + 24);
  v8 = v4;
  if ( (unsigned int)dword_180188330 > 4 )
  {
    v14 = v2 + 24;
    v9 = Data1 + v4;
    v18 = &v8;
    v20 = &v9;
    p_pActivityId = &pActivityId;
    v22 = &v10;
    v13 = 4LL;
    v15 = 4LL;
    v16 = v2 + 20;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v10 = this;
    v23 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_180188330, &unk_180147CE9, &pActivityId, (LPCGUID)(v2 + 20), 8u, &pData);
    v2 = *((_QWORD *)this + 2);
    Data1 = pActivityId.Data1;
  }
  v5 = *(_DWORD *)(v2 + 24);
  if ( Data1 <= v5 )
  {
    *(_DWORD *)(v2 + 24) = v5 - Data1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0101LL);
    return 2289828097LL;
  }
}
