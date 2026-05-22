/*
 * XREFs of ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x180092B20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007D094 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180089098 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180090588 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180090C58 (GetHolographicInputSession.c)
 *     ?DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ @ 0x180091E54 (-DisableHeadEventHandler@SpatialInputControllerCollection@@AEAAXXZ.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180096504 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@IEAAXXZ @ 0x180097AF4 (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-$al.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SpatialInputControllerCollection::OnFinalRelease(SpatialInputControllerCollection *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rbx
  struct _TP_WORK *v19; // rsi
  DWORD LastError; // ebx
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  const struct TraceSessionConfig *HolographicInputSession; // rax
  int v26; // eax
  unsigned __int64 v27[6]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v28[7]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v29[24]; // [rsp+A8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  SpatialInputControllerCollection::DisableHeadEventHandler((struct _RTL_CRITICAL_SECTION *)this);
  v2 = *((_QWORD *)this + 386);
  if ( v2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
    *(_QWORD *)(v2 + 32) = 0LL;
    v3 = *(__int64 **)(v2 + 24);
    v4 = *(_QWORD *)(v2 + 40);
    v5 = *v3;
    if ( *(_BYTE *)(v2 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 64))(v3, v4);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 80))(v3, v4);
    if ( v2 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
  }
  v6 = *((_QWORD *)this + 387);
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
    *(_QWORD *)(v6 + 32) = 0LL;
    v7 = *(__int64 **)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *v7;
    if ( *(_BYTE *)(v6 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 64))(v7, v8);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v9 + 80))(v7, v8);
    if ( v6 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2872));
  v10 = *((_QWORD *)this + 388);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *((_QWORD *)this + 388);
  if ( v12 )
  {
    *((_QWORD *)this + 388) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v13 = *((_QWORD *)this + 401);
  if ( v13 )
  {
    *((_QWORD *)this + 401) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 397);
  if ( v14 )
  {
    *((_QWORD *)this + 397) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 398);
  if ( v15 )
  {
    *((_QWORD *)this + 398) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 399);
  if ( v16 )
  {
    *((_QWORD *)this + 399) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 400);
  if ( v17 )
  {
    *((_QWORD *)this + 400) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( this != (SpatialInputControllerCollection *)-3136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  if ( this != (SpatialInputControllerCollection *)-2872LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2872));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  v18 = (char *)this + 2856;
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    (__int64)this + 2856,
    *(_QWORD **)(*((_QWORD *)this + 357) + 8LL));
  *(_QWORD *)(*(_QWORD *)v18 + 8LL) = *(_QWORD *)v18;
  **(_QWORD **)v18 = *(_QWORD *)v18;
  *(_QWORD *)(*(_QWORD *)v18 + 16LL) = *(_QWORD *)v18;
  *((_QWORD *)this + 358) = 0LL;
  if ( this != (SpatialInputControllerCollection *)-2816LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 2816));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3216));
  *((_BYTE *)this + 3256) = 1;
  std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::_Tidy((char *)this + 3264);
  if ( this != (SpatialInputControllerCollection *)-3216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 3216));
  v19 = (struct _TP_WORK *)*((_QWORD *)this + 413);
  if ( v19 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v19, 0);
    CloseThreadpoolWork(v19);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 413) = 0LL;
  v22 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v22 )
  {
    if ( *v22 )
    {
      RawInputProvidersTracing::Instance();
      v24 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( *(_DWORD *)v24 > 4u
        && (*(_BYTE *)(v24 + 16) & 2) != 0
        && (*(_QWORD *)(v24 + 24) & 2LL) == *(_QWORD *)(v24 + 24) )
      {
        TlgWrite((TraceLoggingHProvider)v24, &unk_1800F06AC, 0LL, 0LL, 2u, &pData);
      }
    }
  }
  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v27, v21, v23);
  v26 = TracingSessionHelper::StartOrStop(HolographicInputSession, 0);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v26);
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>(v29);
  std::wstring::_Tidy_deallocate(v28);
  std::wstring::_Tidy_deallocate(v27);
  RIMDeviceCollection::Close(this);
}
