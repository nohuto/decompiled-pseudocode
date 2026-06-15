/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009C3D8
 * Callers:
 *     std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Do_call @ 0x180095360 (std--_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000C800 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18005B43C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180098B30 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 v2; // rbx
  LPVOID v3; // rbx
  CAudioResourceManager *v4; // rcx
  char v5; // al
  const GUID *v6; // r8
  const GUID *v7; // r9
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  struct IStreamGroupProxy *v10; // [rsp+38h] [rbp-59h] BYREF
  int v11; // [rsp+40h] [rbp-51h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v13; // [rsp+50h] [rbp-41h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64); // [rsp+58h] [rbp-39h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData[6]; // [rsp+78h] [rbp-19h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v14 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (struct IInspectable **)&v14) >= 0 && v14 )
  {
    v10 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v14, (__int64)&v10) >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v10 + 120LL))(v10);
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v13);
      v11 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
              g_DeviceGraphStore,
              v2,
              &v13);
      if ( v11 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v13 + 96LL))(v13, lpCriticalSection);
        *(_QWORD *)fPending = 0LL;
        v11 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, WINBOOL *))(*(_QWORD *)v10 + 208LL))(v10, fPending);
        if ( *(_QWORD *)fPending )
        {
          v11 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct IStreamGroupProxy *))(*(_QWORD *)g_DeviceGraphManager
                                                                                             + 48LL))(
                  g_DeviceGraphManager,
                  v10);
          (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v10 + 296LL))(v10);
          v3 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v3 )
          {
            *(_QWORD *)v3 = 0LL;
            *((_QWORD *)v3 + 1) = 0LL;
            *(_DWORD *)v3 = 0;
            *((_QWORD *)v3 + 1) = 0LL;
          }
          else
          {
            v3 = 0LL;
          }
          lpCriticalSection[2] = (LPCRITICAL_SECTION)v3;
          if ( (*(int (__fastcall **)(struct IStreamGroupProxy *, LPVOID))(*(_QWORD *)v10 + 280LL))(v10, v3) >= 0
            && *(_DWORD *)v3 == 1 )
          {
            memset(pData, 0, sizeof(pData));
            CAudioResourceManager::CreateInternalLoopbackStream(
              v4,
              *((const unsigned __int16 **)v3 + 1),
              v10,
              (struct SYSTEM_AUDIO_STREAM *)pData);
            (*(void (__fastcall **)(struct IStreamGroupProxy *, EVENT_DATA_DESCRIPTOR *, _QWORD))(*(_QWORD *)v10 + 288LL))(
              v10,
              pData,
              *((_QWORD *)v3 + 1));
          }
          if ( v3 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'((LPVOID *)v3);
          v5 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v10 + 224LL))(v10);
          v11 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct IStreamGroupProxy *, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v10,
                  *(_QWORD *)fPending,
                  v5 == 0,
                  0LL);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)fPending);
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
      }
      InitOnceBeginInitialize(
        &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
        0,
        fPending,
        (LPVOID *)lpCriticalSection);
      if ( fPending[0] )
      {
        lpCriticalSection[0] = (LPCRITICAL_SECTION)qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      v9 = *(const struct _TlgProvider_t **)&lpCriticalSection[0]->LockCount;
      if ( *(_DWORD *)v9 > 4u )
      {
        pData[2].Ptr = (ULONGLONG)&v11;
        pData[2].Size = 4;
        pData[2].Reserved = 0;
        TlgWrite(v9, &unk_18010FDB9, v6, v7, 3u, pData);
      }
      Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v10);
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v14);
}
