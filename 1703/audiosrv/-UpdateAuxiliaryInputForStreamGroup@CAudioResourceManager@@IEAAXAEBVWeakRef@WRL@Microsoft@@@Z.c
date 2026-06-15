/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800AD2EC
 * Callers:
 *     std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Do_call @ 0x1800A7620 (std--_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B1A4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B230 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18007B910 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  __int64 v2; // r9
  LPCRITICAL_SECTION v3; // rcx
  LPVOID v4; // rbx
  CAudioResourceManager *v5; // rcx
  char v6; // al
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rcx
  struct IStreamGroupProxy *v11; // [rsp+38h] [rbp-59h] BYREF
  int v12; // [rsp+40h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-49h] BYREF
  __int64 v14; // [rsp+50h] [rbp-41h] BYREF
  __int64 v15; // [rsp+58h] [rbp-39h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData[6]; // [rsp+78h] [rbp-19h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v15 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v15) >= 0 && v15 )
  {
    v11 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v15, (__int64 *)&v11) >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v11 + 120LL))(v11);
      v14 = 0LL;
      v12 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
              g_DeviceGraphStore,
              v2,
              &v14);
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v14 + 88LL))(v14, lpCriticalSection);
        v13 = 0LL;
        v12 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)v11 + 208LL))(v11, &v13);
        if ( v13 )
        {
          v12 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct IStreamGroupProxy *))(*(_QWORD *)g_DeviceGraphManager
                                                                                             + 48LL))(
                  g_DeviceGraphManager,
                  v11);
          (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v11 + 304LL))(v11);
          v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v4 )
          {
            *(_QWORD *)v4 = 0LL;
            *((_QWORD *)v4 + 1) = 0LL;
            *(_DWORD *)v4 = 0;
            *((_QWORD *)v4 + 1) = 0LL;
          }
          else
          {
            v4 = 0LL;
          }
          lpCriticalSection[2] = (LPCRITICAL_SECTION)v4;
          if ( (*(int (__fastcall **)(struct IStreamGroupProxy *, LPVOID))(*(_QWORD *)v11 + 288LL))(v11, v4) >= 0
            && *(_DWORD *)v4 == 1 )
          {
            memset(pData, 0, sizeof(pData));
            CAudioResourceManager::CreateInternalLoopbackStream(
              v5,
              *((const unsigned __int16 **)v4 + 1),
              v11,
              (struct SYSTEM_AUDIO_STREAM *)pData);
            (*(void (__fastcall **)(struct IStreamGroupProxy *, EVENT_DATA_DESCRIPTOR *, _QWORD))(*(_QWORD *)v11 + 296LL))(
              v11,
              pData,
              *((_QWORD *)v4 + 1));
          }
          if ( v4 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'((LPVOID *)v4);
          v6 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v11 + 232LL))(v11);
          v12 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct IStreamGroupProxy *, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v11,
                  v13,
                  v6 == 0,
                  0LL);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
        v3 = lpCriticalSection[0];
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
      }
      v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                        (__int64)v3,
                                                        lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                          + 1);
      if ( *(_DWORD *)v7 > 4u )
      {
        pData[2].Ptr = (ULONGLONG)&v12;
        pData[2].Size = 4;
        pData[2].Reserved = 0;
        TlgWrite(v7, &unk_1800F9B45, v8, v9, 3u, pData);
      }
      v10 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
}
