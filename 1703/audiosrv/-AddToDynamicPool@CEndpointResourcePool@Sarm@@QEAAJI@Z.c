/*
 * XREFs of ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800C5284
 * Callers:
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C5904 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C64CC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5730 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::AddToDynamicPool(Sarm::CEndpointResourcePool *this, unsigned int Data1)
{
  __int64 v3; // rax
  const GUID *v4; // r8
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  UINT32 cData; // [rsp+20h] [rbp-69h]
  int v11; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-55h] BYREF
  Sarm::CEndpointResourcePool *v13; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp-29h]
  __int64 v16; // [rsp+68h] [rbp-21h]
  __int64 v17; // [rsp+70h] [rbp-19h]
  __int64 v18; // [rsp+78h] [rbp-11h]
  const GUID *v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  int *v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+98h] [rbp+Fh]
  unsigned int *v23; // [rsp+A0h] [rbp+17h]
  __int64 v24; // [rsp+A8h] [rbp+1Fh]
  Sarm::CEndpointResourcePool **v25; // [rsp+B0h] [rbp+27h]
  __int64 v26; // [rsp+B8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  GUID pRelatedActivityId; // [rsp+F8h] [rbp+6Fh] BYREF

  pRelatedActivityId.Data1 = Data1;
  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL,
      cData);
    __debugbreak();
  }
  v4 = (const GUID *)(v3 + 20);
  v5 = v3 + 24;
  v6 = *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 24);
  v11 = v6;
  if ( (unsigned int)dword_18012A220 > 4 )
  {
    v17 = v5;
    v12 = Data1 + v6;
    v21 = &v11;
    v23 = &v12;
    p_pRelatedActivityId = &pRelatedActivityId;
    v25 = &v13;
    v16 = 4LL;
    v18 = 4LL;
    v19 = v4;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v13 = this;
    v26 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FA9C0, v4, &pRelatedActivityId, 8u, &pData);
    Data1 = pRelatedActivityId.Data1;
  }
  v7 = *((_QWORD *)this + 2);
  v8 = *(_DWORD *)(v7 + 24);
  if ( Data1 <= v8 )
  {
    *(_DWORD *)(v7 + 24) = v8 - Data1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0101LL);
    return 2289828097LL;
  }
}
