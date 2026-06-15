/*
 * XREFs of ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800C43D8
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C526C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C4500 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::RemoveFromDynamicPool(
        Sarm::CEndpointResourcePool *this,
        unsigned int Data1)
{
  __int64 v2; // rax
  const GUID *v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  UINT32 cData; // [rsp+20h] [rbp-59h]
  unsigned int v9; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-45h] BYREF
  Sarm::CEndpointResourcePool *v11; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  const GUID *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  unsigned int *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  unsigned int *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  Sarm::CEndpointResourcePool **v23; // [rsp+B0h] [rbp+37h]
  __int64 v24; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  GUID pRelatedActivityId; // [rsp+E8h] [rbp+6Fh] BYREF

  pRelatedActivityId.Data1 = Data1;
  v2 = *((_QWORD *)this + 2);
  if ( !v2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL,
      cData);
    __debugbreak();
  }
  v4 = (const GUID *)(v2 + 20);
  v5 = v2 + 24;
  v6 = *(_DWORD *)(v2 + 20) - *(_DWORD *)(v2 + 24);
  v9 = v6;
  if ( (unsigned int)dword_18014A370 > 4 )
  {
    v15 = v5;
    v10 = v6 - Data1;
    v19 = &v9;
    v21 = &v10;
    p_pRelatedActivityId = &pRelatedActivityId;
    v23 = &v11;
    v14 = 4LL;
    v16 = 4LL;
    v17 = v4;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v11 = this;
    v24 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_18011108E, v4, &pRelatedActivityId, 8u, &pData);
    Data1 = pRelatedActivityId.Data1;
    v6 = v9;
  }
  if ( Data1 <= v6 )
  {
    *(_DWORD *)(*((_QWORD *)this + 2) + 24LL) += Data1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0102LL);
    return 2289828098LL;
  }
}
