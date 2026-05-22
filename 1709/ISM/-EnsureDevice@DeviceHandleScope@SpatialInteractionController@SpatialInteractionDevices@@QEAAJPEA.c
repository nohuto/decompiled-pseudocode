/*
 * XREFs of ?EnsureDevice@DeviceHandleScope@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAV23@@Z @ 0x1800C6CFC
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x1800C685C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800C6B54 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@AEAAJAEBVSyncLockCr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??0SpatialInteractionDevice@@QEAA@XZ @ 0x180074820 (--0SpatialInteractionDevice@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 *     ?UnableToOpenDevice_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800C375C (-UnableToOpenDevice_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope::EnsureDevice(
        SpatialInteractionDevices::SpatialInteractionController::DeviceHandleScope *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2)
{
  unsigned int v3; // r12d
  HSTRING *v4; // r15
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  wchar_t *StringRawBuffer; // rbx
  SpatialInteractionDevice *v12; // rax
  SpatialInteractionDevice *v13; // rdi
  unsigned int v14; // edi
  __int64 v15; // rdi
  __int64 v16; // rcx
  const wchar_t *v17; // rbx
  _DWORD *v18; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v22; // [rsp+A8h] [rbp+48h]

  v3 = *((_DWORD *)a2 + 86);
  v4 = (HSTRING *)((char *)a2 + 792);
  v5 = (_QWORD *)((char *)a2 + 848);
  v6 = *((_QWORD *)a2 + 106);
  if ( !v6 )
  {
    if ( !*v4 )
    {
      v8 = -2147418113;
      v22 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5FF,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
        (const char *)0x8000FFFFLL);
LABEL_16:
      v14 = v8;
      v8 = v22;
      goto LABEL_23;
    }
    StringRawBuffer = (wchar_t *)WindowsGetStringRawBuffer(*v4, 0LL);
    *v5 = 0LL;
    v12 = (SpatialInteractionDevice *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v12 )
    {
      v8 = -2147024882;
      v22 = -2147024882;
      goto LABEL_14;
    }
    v13 = SpatialInteractionDevice::SpatialInteractionDevice(v12);
    v8 = SpatialInteractionDevice::RuntimeClassInitialize(
           v13,
           StringRawBuffer,
           (struct SpatialInteractionDevices::HID_HANDLE **)v3);
    if ( v8 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(SpatialInteractionDevice *, GUID *, _QWORD *))v13)(
             v13,
             &GUID_eb320af3_98c1_46ea_8716_cb99240a0843,
             v5);
    }
    else if ( !v13 )
    {
      goto LABEL_13;
    }
    (*(void (__fastcall **)(SpatialInteractionDevice *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_13:
    v22 = v8;
    if ( v8 >= 0 )
      goto LABEL_17;
LABEL_14:
    v9 = (unsigned int)v8;
    v10 = 1536LL;
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 152LL))(v6);
  v8 = v7;
  v22 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 1531LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)v9);
    goto LABEL_16;
  }
LABEL_17:
  v15 = *v5;
  if ( *(_QWORD *)this != *v5 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*v5);
      v8 = v22;
    }
    v16 = *(_QWORD *)this;
    *(_QWORD *)this = v15;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v8 = v22;
    }
  }
  v14 = 0;
LABEL_23:
  if ( v8 < 0 )
  {
    v17 = WindowsGetStringRawBuffer(*v4, 0LL);
    v18 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v18 )
    {
      if ( *v18 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::UnableToOpenDevice_(v19, v22, v3, v17);
      }
    }
  }
  return v14;
}
