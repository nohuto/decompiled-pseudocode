/*
 * XREFs of _lambda_3c80eefd21da3fd8241f60fb2dc55ba0_::operator() @ 0x1800A5E4C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3c80eefd21da3fd8241f60fb2dc55ba0__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABDB0 (std--_Func_impl_no_alloc__lambda_3c80eefd21da3fd8241f60fb2dc55ba0__void_std--shared_ea_1800ABDB0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800A3944 (-StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A49CC (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A8A90 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A8ED8 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A92EC (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3c80eefd21da3fd8241f60fb2dc55ba0_::operator()(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **a1,
        _QWORD *a2)
{
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  unsigned int v11; // eax
  _QWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  int *v15; // [rsp+58h] [rbp-A8h]
  int *v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h] BYREF
  char v18; // [rsp+6Ch] [rbp-94h]
  int v19; // [rsp+90h] [rbp-70h] BYREF
  const char *v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  char v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  _BYTE v24[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+148h] [rbp+48h]
  __int64 v26; // [rsp+150h] [rbp+50h]
  __int64 v27; // [rsp+158h] [rbp+58h]
  __int64 v28; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v4 = *(_DWORD *)(*a2 + 12LL);
  v5 = *(_DWORD *)(*a2 + 8LL);
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  v14 = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "DeviceRemoved";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  memset_0(v24, 0, sizeof(v24));
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *)v13,
    v5,
    v4);
  v6 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 80);
  EnterCriticalSection(v7);
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(*a1, v8);
  if ( v9 >= 0 )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 344);
    EnterCriticalSection(v10);
    if ( *((_QWORD *)*a1 + 50) )
    {
      v6 = *((_QWORD *)*a1 + 50);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    if ( v10 )
      LeaveCriticalSection(v10);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a2 + 112LL))(*a2, 2LL, v6);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v13,
    v11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  return wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
