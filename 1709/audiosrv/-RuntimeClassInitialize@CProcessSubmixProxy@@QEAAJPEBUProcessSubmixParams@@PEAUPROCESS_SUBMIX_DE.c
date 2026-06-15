/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18001263C
 * Callers:
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x180030774 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180007BC0 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x18000D550 (-GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        const struct tWAVEFORMATEX **a3,
        struct IStreamGroupProxy *a4)
{
  __int64 v8; // rbx
  HRESULT Instance; // eax
  int v10; // ebx
  HRESULT v11; // eax
  int v12; // eax
  struct tWAVEFORMATEX **v13; // rsi
  struct tWAVEFORMATEX *v14; // rcx
  struct tWAVEFORMATEX *v15; // r15
  __int64 (__fastcall *v16)(CBaseStreamGroupProxy *, struct IStreamGroup **); // rax
  int StreamGroup; // eax
  int v18; // eax
  __int64 v19; // rbx
  IUnknown *v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int ppv; // [rsp+20h] [rbp-B1h]
  char v28; // [rsp+40h] [rbp-91h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-89h] BYREF
  int v30; // [rsp+50h] [rbp-81h] BYREF
  struct IStreamGroup *v31; // [rsp+58h] [rbp-79h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-69h] BYREF
  struct tWAVEFORMATEX **v34; // [rsp+70h] [rbp-61h]
  struct tWAVEFORMATEX *v35; // [rsp+78h] [rbp-59h] BYREF
  char v36; // [rsp+80h] [rbp-51h]
  _DWORD v37[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v38; // [rsp+90h] [rbp-41h]
  __int64 v39; // [rsp+98h] [rbp-39h]
  unsigned __int16 *v40; // [rsp+A0h] [rbp-31h] BYREF
  int v41; // [rsp+A8h] [rbp-29h]
  int v42; // [rsp+ACh] [rbp-25h]
  void *v43; // [rsp+B0h] [rbp-21h]
  int v44; // [rsp+B8h] [rbp-19h]
  int v45; // [rsp+BCh] [rbp-15h]
  int *v46; // [rsp+C0h] [rbp-11h]
  int v47; // [rsp+C8h] [rbp-9h]
  int v48; // [rsp+CCh] [rbp-5h]
  char *v49; // [rsp+D0h] [rbp-1h]
  int v50; // [rsp+D8h] [rbp+7h]
  int v51; // [rsp+DCh] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v39 = -2LL;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( a2 )
      v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    else
      v30 = 0;
    v46 = &v30;
    v47 = 4;
    v48 = 0;
    if ( a2 )
      v28 = *((_BYTE *)a2 + 8);
    else
      v28 = 0;
    v49 = &v28;
    v50 = 1;
    v51 = 0;
    v37[0] = ((unsigned int)&unk_18010F497 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v37[1] = 5;
    v38 = 0LL;
    v40 = *(unsigned __int16 **)(v8 + 8);
    v41 = *v40;
    v42 = 2;
    v43 = &unk_18010F4A2;
    v44 = 39;
    v45 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v37, 0LL, 0LL, 4, &v40);
  }
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v10 = Instance;
  if ( Instance < 0 )
  {
    v23 = (unsigned int)Instance;
    v24 = 2666LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v24,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v23,
      ppv);
    goto LABEL_31;
  }
  v11 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v10 = v11;
  if ( v11 < 0 )
  {
    v23 = (unsigned int)v11;
    v24 = 2672LL;
    goto LABEL_40;
  }
  v12 = ((__int64 (__fastcall *)(IUnknown *, const struct tWAVEFORMATEX **))pProxy->lpVtbl[2].Release)(pProxy, a3);
  v10 = v12;
  if ( v12 < 0 )
  {
    v23 = (unsigned int)v12;
    v24 = 2674LL;
    goto LABEL_40;
  }
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 14, *(_QWORD *)a2);
  v34 = (struct tWAVEFORMATEX **)((char *)this + 208);
  v35 = 0LL;
  v36 = 1;
  v10 = CloneWaveFormat(a3[6], &v35);
  if ( v36 )
  {
    v13 = v34;
    v14 = *v34;
    v15 = v35;
    if ( v35 != *v34 )
    {
      if ( v14 )
        CoTaskMemFree(v14);
      *v13 = v15;
    }
  }
  if ( v10 < 0 )
  {
    v23 = (unsigned int)v10;
    v24 = 2678LL;
    goto LABEL_40;
  }
  v31 = 0LL;
  v16 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct IStreamGroup **))(*(_QWORD *)a4 + 264LL);
  if ( v16 == CBaseStreamGroupProxy::GetStreamGroup )
    StreamGroup = CBaseStreamGroupProxy::GetStreamGroup(a4, &v31);
  else
    StreamGroup = v16(a4, &v31);
  v10 = StreamGroup;
  if ( StreamGroup < 0 )
  {
    v25 = (unsigned int)StreamGroup;
    v26 = 2682LL;
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(IUnknown *, struct IStreamGroup *))pProxy->lpVtbl[3].QueryInterface)(pProxy, v31);
    v10 = v18;
    if ( v18 >= 0 )
    {
      v19 = *((_QWORD *)this + 6);
      v20 = pProxy;
      *((_QWORD *)this + 6) = pProxy;
      if ( v20 )
        ((void (__fastcall *)(IUnknown *))v20->lpVtbl->AddRef)(v20);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v21 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = a4;
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
      v10 = 0;
      goto LABEL_29;
    }
    v25 = (unsigned int)v18;
    v26 = 2683LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v26,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v25,
    ppv);
LABEL_29:
  if ( v31 )
    (*(void (__fastcall **)(struct IStreamGroup *))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_31:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v10;
}
