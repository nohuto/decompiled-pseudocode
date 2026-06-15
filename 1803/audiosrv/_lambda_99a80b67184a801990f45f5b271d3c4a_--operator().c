/*
 * XREFs of _lambda_99a80b67184a801990f45f5b271d3c4a_::operator() @ 0x1800CF71C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800CB400 (std--_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_99a80b67184a801990f45f5b271d3c4a_::operator()(__int64 a1)
{
  unsigned int v2; // ebx
  const WCHAR *v3; // r14
  int v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  char v10; // al
  int v11; // eax
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r11
  __int64 v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21[2]; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21[1] = -2LL;
  v2 = 0;
  v21[0] = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(*(_QWORD **)a1, v21) >= 0 && v21[0] )
  {
    v17 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(v21, &v17) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 400LL))(v17, **(_QWORD **)(a1 + 8)) )
    {
      v3 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 120LL))(v17);
      v19 = 0LL;
      v4 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const WCHAR *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                    + 24LL))(
             g_DeviceGraphStore,
             v3,
             &v19);
      v5 = v4;
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v19 + 112LL))(v19, &lpCriticalSection);
        v18 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 208LL))(v17, &v18);
        v5 = v6;
        if ( v6 >= 0 )
        {
          if ( v18 )
          {
            v8 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                   g_DeviceGraphManager,
                   v17);
            if ( v8 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                2597LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v8);
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 296LL))(v17);
          if ( v18 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 224LL))(v17);
            v11 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                    g_DeviceGraphManager,
                    v17,
                    v18,
                    v10 == 0,
                    0LL);
            v9 = retaddr;
            if ( v11 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                2607LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v11);
          }
          if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               (__int64)v9,
                               lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                + 1) > 4u )
          {
            TlgCreateWsz(&pDesc, v3);
            TlgCreateWsz(&v24, **(LPCWSTR **)(a1 + 8));
            TlgWrite(v14, &unk_180146887, v12, v13, 4u, &pData);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
          if ( lpCriticalSection )
          {
            LeaveCriticalSection(lpCriticalSection);
            lpCriticalSection = 0LL;
          }
          v15 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          goto LABEL_25;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA21,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA19,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v4);
      }
      v7 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v2 = v5;
    }
LABEL_25:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v21);
  return v2;
}
