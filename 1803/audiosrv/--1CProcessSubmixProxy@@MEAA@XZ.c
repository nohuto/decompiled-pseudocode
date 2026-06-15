/*
 * XREFs of ??1CProcessSubmixProxy@@MEAA@XZ @ 0x180044CC0
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180044810 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     ?GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z @ 0x18001DFE0 (-GetStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAPEAUIStreamGroup@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180044240 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::~CProcessSubmixProxy(CProcessSubmixProxy *this)
{
  char *v2; // rsi
  CBaseStreamGroupProxy *v3; // rcx
  __int64 (__fastcall *v4)(CBaseStreamGroupProxy *, struct IStreamGroup **); // rax
  int StreamGroup; // eax
  TLG_PENABLECALLBACK v6; // rdx
  PVOID v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  HANDLE ProcessHeap; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v19; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall *v20)(Microsoft::WRL::Details::WeakReferenceImpl *, char); // rax
  __int64 v21; // rdx
  Microsoft::WRL::Details::WeakReferenceImpl *v22; // rcx
  struct IStreamGroup *v23; // [rsp+38h] [rbp-59h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-51h] BYREF
  int v25; // [rsp+44h] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-49h] BYREF
  char *v27; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h]
  __int64 v30; // [rsp+68h] [rbp-29h]
  unsigned __int16 *v31; // [rsp+78h] [rbp-19h] BYREF
  int v32; // [rsp+80h] [rbp-11h]
  int v33; // [rsp+84h] [rbp-Dh]
  void *v34; // [rsp+88h] [rbp-9h]
  int v35; // [rsp+90h] [rbp-1h]
  int v36; // [rsp+94h] [rbp+3h]
  char **v37; // [rsp+98h] [rbp+7h]
  __int64 v38; // [rsp+A0h] [rbp+Fh]
  int *v39; // [rsp+A8h] [rbp+17h]
  __int64 v40; // [rsp+B0h] [rbp+1Fh]
  char *v41; // [rsp+B8h] [rbp+27h]
  __int64 v42; // [rsp+C0h] [rbp+2Fh]

  v30 = -2LL;
  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = (CBaseStreamGroupProxy *)*((_QWORD *)this + 25);
  if ( v3 )
  {
    v23 = 0LL;
    v4 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct IStreamGroup **))(*(_QWORD *)v3 + 264LL);
    if ( v4 == CBaseStreamGroupProxy::GetStreamGroup )
      StreamGroup = CBaseStreamGroupProxy::GetStreamGroup(v3, &v23);
    else
      StreamGroup = v4(v3, &v23);
    if ( StreamGroup >= 0 )
      (*(void (__fastcall **)(_QWORD, struct IStreamGroup *))(**((_QWORD **)this + 6) + 80LL))(
        *((_QWORD *)this + 6),
        v23);
    if ( v23 )
      (*(void (__fastcall **)(struct IStreamGroup *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    qword_18018A2A8 = (__int64)qword_18018A2B8;
    byte_18018A2B0 = 1;
    TraceLoggingRegisterEx(qword_18018A2B8, v6, v7);
    dword_18018A2B4 = 1;
    (*(void (__fastcall **)(void *))(qword_18018A2A0 + 8LL))(&qword_18018A2A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 4u )
  {
    v27 = v2;
    v37 = &v27;
    v38 = 8LL;
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    else
      v10 = 0;
    v25 = v10;
    v39 = &v25;
    v40 = 4LL;
    v41 = (char *)this + 124;
    v42 = 1LL;
    v28[0] = ((unsigned int)&unk_180145ACB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v28[1] = 4;
    v29 = 0LL;
    v31 = *(unsigned __int16 **)(v8 + 8);
    v32 = *v31;
    v33 = 2;
    v34 = &unk_180145AD6;
    v35 = 57;
    v36 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v28, 0LL, 0LL, 5, &v31, (_DWORD)v23);
  }
  v11 = (void *)*((_QWORD *)this + 26);
  if ( v11 )
    CoTaskMemFree(v11);
  v12 = *((_QWORD *)this + 25);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (void *)*((_QWORD *)this + 22);
  if ( v13 )
  {
    v14 = (__int64)(*((_QWORD *)this + 24) - (_QWORD)v13) >> 3;
    if ( v14 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v14 < 0x1000 )
      {
LABEL_28:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
        *((_QWORD *)this + 22) = 0LL;
        *((_QWORD *)this + 23) = 0LL;
        *((_QWORD *)this + 24) = 0LL;
        goto LABEL_29;
      }
      if ( ((unsigned __int8)v13 & 0x1F) == 0 )
      {
        v15 = *((_QWORD *)v13 - 1);
        if ( v15 < (unsigned __int64)v13 && (unsigned __int64)v13 - v15 - 8 <= 0x1F )
        {
          v13 = (void *)*((_QWORD *)v13 - 1);
          goto LABEL_28;
        }
      }
    }
    v20 = (Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *, char))_o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
    goto LABEL_39;
  }
LABEL_29:
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v17 = *((_QWORD *)this + 14);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v18 = *((_QWORD *)this + 6);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( *((__int64 *)this + 5) < 0 && !ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *((_QWORD *)this + 5) + 12)) )
  {
    if ( !v19 )
      goto LABEL_40;
    v20 = *(Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, char))(*(_QWORD *)v19 + 32LL);
    v21 = 1LL;
    v22 = v19;
    if ( v20 == Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor' )
    {
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v19, 1);
      goto LABEL_40;
    }
LABEL_39:
    v20(v22, v21);
LABEL_40:
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
}
