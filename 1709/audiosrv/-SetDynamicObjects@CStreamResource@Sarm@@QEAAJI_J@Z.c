/*
 * XREFs of ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C526C
 * Callers:
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C0890 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1800C1D70 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C4908 (-GrantAvailableObjects@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800C4FBC (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18002EFF0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800C43D8 (-RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C4CD0 (-IssueGrantToASAR@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x1800C4E94 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::SetDynamicObjects(Sarm::CStreamResource *this, unsigned int a2, __int64 a3)
{
  unsigned int *v6; // r14
  bool v7; // zf
  unsigned int v8; // ebx
  int v10; // eax
  unsigned int v11; // r15d
  unsigned int v12; // eax
  int v13; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+30h] [rbp-79h] BYREF
  __int64 v17; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  char *v19; // [rsp+60h] [rbp-49h]
  int v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  char *v22; // [rsp+70h] [rbp-39h]
  int v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+7Ch] [rbp-2Dh]
  char *v25; // [rsp+80h] [rbp-29h]
  int v26; // [rsp+88h] [rbp-21h]
  int v27; // [rsp+8Ch] [rbp-1Dh]
  char *v28; // [rsp+90h] [rbp-19h]
  int v29; // [rsp+98h] [rbp-11h]
  int v30; // [rsp+9Ch] [rbp-Dh]
  char *v31; // [rsp+A0h] [rbp-9h]
  int v32; // [rsp+A8h] [rbp-1h]
  int v33; // [rsp+ACh] [rbp+3h]
  __int64 *v34; // [rsp+B0h] [rbp+7h]
  int v35; // [rsp+B8h] [rbp+Fh]
  int v36; // [rsp+BCh] [rbp+13h]
  int *v37; // [rsp+C0h] [rbp+17h]
  int v38; // [rsp+C8h] [rbp+1Fh]
  int v39; // [rsp+CCh] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  SarmTraceLoggingTracer("Sarm::CStreamResource::SetDynamicObjects", 300);
  v6 = (unsigned int *)((char *)this + 80);
  v7 = a2 == *((_DWORD *)this + 20);
  if ( a2 < *((_DWORD *)this + 20) )
  {
    if ( !a3 )
    {
      v8 = -2005139194;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)0x887C0106LL);
      return v8;
    }
    v7 = a2 == *v6;
  }
  if ( v7 )
  {
    a3 = 0LL;
  }
  else
  {
    v10 = Sarm::CStreamResource::IssueGrantToASAR(this, a2, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x139,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    v12 = *v6;
    if ( a2 >= *v6 )
      Sarm::CEndpointResourcePool::RemoveFromDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), a2 - v12);
    else
      *((_DWORD *)this + 21) = v12 - a2;
    *((_DWORD *)this + 19) = *v6;
    *v6 = a2;
  }
  v13 = Sarm::CStreamResource::NotifyClientOfGrant(this, a2, a3);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v13);
    return v8;
  }
  if ( (unsigned int)dword_18014A370 > 5 )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v19 = (char *)this + 40;
    v22 = (char *)this + 16;
    v25 = (char *)this + 84;
    v28 = (char *)this + 76;
    v34 = &v17;
    v16 = *((_DWORD *)this + 13);
    v37 = &v16;
    v20 = 8;
    v23 = 16;
    v26 = 4;
    v29 = 4;
    v31 = (char *)this + 80;
    v32 = 4;
    v17 = a3;
    v35 = 8;
    v38 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_1801111E1, v14, v15, 9u, &pData);
  }
  return 0LL;
}
