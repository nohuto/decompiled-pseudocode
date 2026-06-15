/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800D3244
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800D3228 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x180097F2C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800CFD24 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  const WCHAR *v3; // rsi
  LPCRITICAL_SECTION v4; // rcx
  LPVOID v5; // rbx
  int v6; // eax
  char v7; // al
  UINT32 cData; // r11d
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r10
  __int64 v12; // rcx
  __int64 v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+40h] [rbp-41h] BYREF
  __int64 v15; // [rsp+48h] [rbp-39h] BYREF
  __int64 v16; // [rsp+50h] [rbp-31h] BYREF
  __int64 v17; // [rsp+58h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+60h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+17h] BYREF
  int *v21; // [rsp+A8h] [rbp+27h]
  UINT32 v22; // [rsp+B0h] [rbp+2Fh]
  int v23; // [rsp+B4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v17 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v17) >= 0 && v17 )
  {
    v13 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v17, &v13) >= 0 )
    {
      v3 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13);
      v16 = 0LL;
      v14 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, const WCHAR *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                     + 24LL))(
              g_DeviceGraphStore,
              v3,
              &v16);
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v16 + 112LL))(v16, lpCriticalSection);
        v15 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 208LL))(v13, &v15);
        if ( v15 )
        {
          v14 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                  g_DeviceGraphManager,
                  v13);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 296LL))(v13);
          v5 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v5 )
          {
            *(_QWORD *)v5 = 0LL;
            *((_QWORD *)v5 + 1) = 0LL;
            *(_DWORD *)v5 = 0;
            *((_QWORD *)v5 + 1) = 0LL;
          }
          else
          {
            v5 = 0LL;
          }
          lpCriticalSection[2] = (LPCRITICAL_SECTION)v5;
          if ( (*(int (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v13 + 280LL))(v13, v5) >= 0 && *(_DWORD *)v5 == 1 )
          {
            v6 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
                   this,
                   &v13,
                   *((const unsigned __int16 **)v5 + 1));
            if ( v6 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                2541LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v6);
          }
          if ( v5 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'((LPVOID *)v5);
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 224LL))(v13);
          v14 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                 + 40LL))(
                  g_DeviceGraphManager,
                  v13,
                  v15,
                  v7 == 0,
                  0LL);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        v4 = lpCriticalSection[0];
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
      }
      if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                           (__int64)v4,
                           lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
            + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, v3);
        v21 = &v14;
        v22 = cData;
        v23 = 0;
        TlgWrite(v11, &unk_1801468E7, v9, v10, cData, &pData);
      }
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v17);
}
