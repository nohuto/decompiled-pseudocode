/*
 * XREFs of ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x1800C685C
 * Callers:
 *     ?SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z @ 0x180095948 (-SetInputDeviceHapticsFeedback@SpatialInputControllerCollection@@QEAAJKEEG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTimeProvider@SpatialInteractionController@SpatialInteractionDevices@@CAJPEAPEAUIHapticsTimerProvider@2@@Z @ 0x1800C6C48 (-CreateTimeProvider@SpatialInteractionController@SpatialInteractionDevices@@CAJPEAPEAUIHapticsTi.c)
 *     ??1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ @ 0x1800C6CAC (--1DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAV23@@Z @ 0x1800C6CFC (-EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEA.c)
 *     wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x1800C6F60 (wil--details--ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___--_ScopeExitFn__lambda_b557.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback(
        SpatialInteractionDevices::SpatialInteractionController *this,
        __int16 a2,
        char a3,
        unsigned __int16 a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int TimeProvider; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int16 v11; // ax
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-69h] BYREF
  __int64 v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+38h] [rbp-59h] BYREF
  __int128 v21; // [rsp+40h] [rbp-51h]
  __int128 v22; // [rsp+50h] [rbp-41h]
  unsigned __int16 *v23; // [rsp+60h] [rbp-31h]
  __int64 v24; // [rsp+68h] [rbp-29h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+70h] [rbp-21h]
  __int64 v26; // [rsp+78h] [rbp-19h]
  _OWORD v27[2]; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int16 *v28; // [rsp+A0h] [rbp+Fh]
  char v29; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  __int16 v31; // [rsp+F8h] [rbp+67h] BYREF
  __int16 v32; // [rsp+100h] [rbp+6Fh] BYREF
  char v33; // [rsp+108h] [rbp+77h] BYREF
  unsigned __int16 v34; // [rsp+110h] [rbp+7Fh] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v24 = -2LL;
  v18 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 896);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 896));
  v25 = v5;
  *(_QWORD *)&v21 = &v18;
  *((_QWORD *)&v21 + 1) = this;
  *(_QWORD *)&v22 = &v32;
  *((_QWORD *)&v22 + 1) = &v33;
  v23 = &v34;
  v27[0] = v21;
  v27[1] = v22;
  v28 = &v34;
  v29 = 1;
  if ( v32 != 4100 )
  {
    v6 = -2147024809;
    v7 = 1380LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)v6);
    goto LABEL_35;
  }
  if ( !*((_BYTE *)this + 1064) )
  {
    v6 = -2147020579;
    v7 = 1381LL;
    goto LABEL_5;
  }
  v19 = 0LL;
  TimeProvider = SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::EnsureDevice(
                   (SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)&v19,
                   this);
  v6 = TimeProvider;
  if ( TimeProvider >= 0 )
  {
    LOBYTE(v9) = v33;
    TimeProvider = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 106) + 80LL))(
                     *((_QWORD *)this + 106),
                     v9);
    v6 = TimeProvider;
    if ( TimeProvider >= 0 )
    {
      *((_BYTE *)this + 944) = v33 != 0;
      if ( v34 )
        goto LABEL_17;
      *((_QWORD *)this + 117) = 0LL;
      TimeProvider = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 106) + 96LL))(
                       *((_QWORD *)this + 106),
                       &v31);
      v6 = TimeProvider;
      if ( TimeProvider < 0 )
      {
        v10 = 1394LL;
        goto LABEL_32;
      }
      if ( v31 )
      {
        v11 = v34;
      }
      else
      {
        v11 = -5536;
        v34 = -5536;
      }
      if ( v11 )
      {
LABEL_17:
        v12 = (_QWORD *)((char *)this + 952);
        if ( !*((_QWORD *)this + 119) )
        {
          TimeProvider = SpatialInteractionDevices::SpatialInteractionController::CreateTimeProvider((struct SpatialInteractionDevices::IHapticsTimerProvider **)this + 119);
          v6 = TimeProvider;
          v18 = TimeProvider;
          if ( TimeProvider < 0 )
          {
            v10 = 1405LL;
            goto LABEL_32;
          }
          v13 = 0LL;
          v26 = 0LL;
          v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          v15 = v14;
          if ( v14 )
          {
            *((_DWORD *)v14 + 3) = 1;
            *v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SpatialInteractionDevices::IHapticsTimerCallback>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            v15[2] = this;
            *v15 = off_1800D97C0;
            v13 = v15;
          }
          v16 = *((_QWORD *)this + 120);
          *((_QWORD *)this + 120) = v13;
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          TimeProvider = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v12 + 56LL))(
                           *v12,
                           *((_QWORD *)this + 120));
          v6 = TimeProvider;
          v18 = TimeProvider;
          if ( TimeProvider < 0 )
          {
            v10 = 1416LL;
            goto LABEL_32;
          }
        }
        TimeProvider = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v12 + 48LL))(*v12, &v20);
        v6 = TimeProvider;
        if ( TimeProvider < 0 )
        {
          v10 = 1419LL;
          goto LABEL_32;
        }
        *((_QWORD *)this + 117) = v20 + v34;
        TimeProvider = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 64LL))(*v12);
        v6 = TimeProvider;
        if ( TimeProvider < 0 )
        {
          v10 = 1421LL;
          goto LABEL_32;
        }
      }
      v6 = 0;
      goto LABEL_34;
    }
    v10 = 1386LL;
  }
  else
  {
    v10 = 1384LL;
  }
LABEL_32:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)(unsigned int)TimeProvider);
LABEL_34:
  SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::~DeviceHandleScope((SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *)&v19);
LABEL_35:
  wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___(v27);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
