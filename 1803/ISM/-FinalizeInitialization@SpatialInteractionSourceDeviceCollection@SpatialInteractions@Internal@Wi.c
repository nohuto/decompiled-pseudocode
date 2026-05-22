/*
 * XREFs of ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A603C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3a5f5691d5f37ec9112637a21316a111__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABDF0 (std--_Func_impl_no_alloc__lambda_3a5f5691d5f37ec9112637a21316a111__void_std--shared_ea_1800ABDF0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A328C (--1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800A337C (-StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800A4724 (-SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG.c)
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800A7C1C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A9A80 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        _QWORD *a2)
{
  int v4; // ebx
  int updated; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int16 v8; // bx
  __int16 v9; // si
  __int16 v10; // r14
  const WCHAR *StringRawBuffer; // r15
  int v12; // edi
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int *v17; // [rsp+40h] [rbp-C8h]
  _QWORD *v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  _QWORD v21[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v22; // [rsp+88h] [rbp-80h]
  int *v23; // [rsp+90h] [rbp-78h]
  int *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h] BYREF
  char v26; // [rsp+A4h] [rbp-64h]
  int v27; // [rsp+C8h] [rbp-40h] BYREF
  const char *v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h]
  char v30; // [rsp+E0h] [rbp-28h]
  __int64 v31; // [rsp+E8h] [rbp-20h]
  char v32[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v33; // [rsp+180h] [rbp+78h]
  __int64 v34; // [rsp+188h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+88h]
  __int64 v36; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v20 = -2LL;
  v16 = 0;
  v4 = *(_DWORD *)(*a2 + 8LL);
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "FinalizeControllerInitialization";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v21,
    v4);
  v17 = &v16;
  v18 = v21;
  LOBYTE(v19) = 1;
  updated = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
  v6 = updated;
  v16 = updated;
  if ( updated < 0 )
  {
    v7 = 352LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_10;
  }
  *(_BYTE *)(*a2 + 102LL) = 1;
  updated = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(this);
  v6 = updated;
  if ( updated < 0 )
  {
    v7 = 357LL;
    goto LABEL_5;
  }
  v8 = *(_WORD *)(*a2 + 272LL);
  v9 = *(_WORD *)(*a2 + 270LL);
  v10 = *(_WORD *)(*a2 + 268LL);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a2 + 24LL), 0LL);
  v12 = *(_DWORD *)(*a2 + 8LL);
  v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v13 && *v13 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(
      v14,
      v12,
      StringRawBuffer,
      v10,
      v9,
      v8);
  }
  v6 = 0;
LABEL_10:
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Stop((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v21);
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::~FinalizeControllerInitialization((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v21);
  return v6;
}
