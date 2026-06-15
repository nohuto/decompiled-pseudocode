/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18001D2B0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        struct PROCESS_SUBMIX_DESCRIPTOR *a3,
        struct IStreamGroupProxy *a4)
{
  HRESULT Instance; // eax
  int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // r14
  void *v18; // rcx
  __int64 (__fastcall *v19)(CBaseStreamGroupProxy *__hidden, struct IStreamGroup **); // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  IUnknown *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rsi
  int v27; // eax
  __int64 v28; // rdx
  void *v29; // r8
  int ppv; // [rsp+20h] [rbp-B1h]
  int ppva; // [rsp+20h] [rbp-B1h]
  int pAuthInfo; // [rsp+30h] [rbp-A1h]
  IUnknown *pProxy; // [rsp+40h] [rbp-91h] BYREF
  __int64 v34; // [rsp+48h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-81h] BYREF
  int v36; // [rsp+54h] [rbp-7Dh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-79h] BYREF
  char *v38; // [rsp+60h] [rbp-71h] BYREF
  _DWORD v39[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v40; // [rsp+70h] [rbp-61h]
  union _RTL_RUN_ONCE *v41; // [rsp+78h] [rbp-59h] BYREF
  int v42; // [rsp+80h] [rbp-51h]
  __int64 v43; // [rsp+88h] [rbp-49h]
  unsigned __int16 *v44; // [rsp+90h] [rbp-41h] BYREF
  int v45; // [rsp+98h] [rbp-39h]
  int v46; // [rsp+9Ch] [rbp-35h]
  void *v47; // [rsp+A0h] [rbp-31h]
  int v48; // [rsp+A8h] [rbp-29h]
  int v49; // [rsp+ACh] [rbp-25h]
  char **v50; // [rsp+B0h] [rbp-21h]
  __int64 v51; // [rsp+B8h] [rbp-19h]
  int *v52; // [rsp+C0h] [rbp-11h]
  __int64 v53; // [rsp+C8h] [rbp-9h]
  char *v54; // [rsp+D0h] [rbp-1h]
  __int64 v55; // [rsp+D8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v43 = -2LL;
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA59,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    goto LABEL_36;
  }
  v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      ppva);
    goto LABEL_36;
  }
  v11 = ((__int64 (__fastcall *)(IUnknown *, struct PROCESS_SUBMIX_DESCRIPTOR *))pProxy->lpVtbl[2].Release)(pProxy, a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA61,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      ppva);
    goto LABEL_36;
  }
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
  v12 = *(_QWORD *)a2;
  v13 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = *(_QWORD *)a2;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = (unsigned __int16 *)*((_QWORD *)a3 + 6);
  v15 = v14[8];
  v16 = CoTaskMemAlloc(v15 + 18);
  v17 = v16;
  if ( v16 )
  {
    memcpy_0(v16, v14, v15 + 18);
    v9 = 0;
  }
  else
  {
    v9 = -2147024882;
  }
  v18 = (void *)*((_QWORD *)this + 26);
  if ( v17 != v18 )
  {
    if ( v18 )
      CoTaskMemFree(v18);
    *((_QWORD *)this + 26) = v17;
  }
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA65,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9,
      ppva);
    goto LABEL_36;
  }
  v34 = 0LL;
  v19 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct IStreamGroup **))(*(_QWORD *)a4 + 264LL);
  if ( v19 == CBaseStreamGroupProxy::GetStreamGroup )
  {
    v20 = *((_QWORD *)a4 + 10);
    if ( v20 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(*((_QWORD *)a4 + 10));
      v20 = *((_QWORD *)a4 + 10);
    }
    v34 = v20;
    goto LABEL_19;
  }
  v27 = v19(a4, (struct IStreamGroup **)&v34);
  v9 = v27;
  if ( v27 >= 0 )
  {
LABEL_19:
    v21 = ((__int64 (__fastcall *)(IUnknown *))pProxy->lpVtbl[3].QueryInterface)(pProxy);
    v9 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v21,
        ppva);
    }
    else
    {
      v22 = *((_QWORD *)this + 6);
      v23 = pProxy;
      *((_QWORD *)this + 6) = pProxy;
      if ( v23 )
        ((void (__fastcall *)(IUnknown *))v23->lpVtbl->AddRef)(v23);
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v24 = *((_QWORD *)this + 25);
      *((_QWORD *)this + 25) = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v41 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_18018A2A0;
        qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
        qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v42 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v41, v28, v29);
      }
      v25 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v25 > 4u )
      {
        v38 = (char *)this + 8;
        v50 = &v38;
        v51 = 8LL;
        v36 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
        v52 = &v36;
        v53 = 4LL;
        v54 = (char *)this + 124;
        v55 = 1LL;
        v39[0] = ((unsigned int)&unk_180145B10 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v39[1] = 4;
        v40 = 0LL;
        v44 = *(unsigned __int16 **)(v25 + 8);
        v45 = *v44;
        v46 = 2;
        v47 = &unk_180145B1B;
        v48 = 55;
        v49 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v25 + 32), v39, 0LL, 0LL, 5, &v44, pAuthInfo);
      }
      *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
      v9 = 0;
    }
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA69,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v27,
    ppva);
LABEL_34:
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_36:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
