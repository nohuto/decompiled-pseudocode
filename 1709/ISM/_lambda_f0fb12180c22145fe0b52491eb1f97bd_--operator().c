/*
 * XREFs of _lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator() @ 0x180093BA4
 * Callers:
 *     std::_Func_impl__lambda_f0fb12180c22145fe0b52491eb1f97bd__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800993B0 (std--_Func_impl__lambda_f0fb12180c22145fe0b52491eb1f97bd__std--allocator_int__void__ea_1800993B0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StartActivity@DeviceRemoved@RawInputProvidersTracing@@QEAAXKK@Z @ 0x18008E364 (-StartActivity@DeviceRemoved@RawInputProvidersTracing@@QEAAXKK@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FCAC (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType_ea_18008FCAC.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091840 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     ?Destroy@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180096594 (-Destroy@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800969AC (-Stop@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@12@@Z @ 0x1800C6690 (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator()(
        SpatialInputControllerCollection **a1,
        RTL_SRWLOCK **a2)
{
  unsigned int v4; // r15d
  int Ptr_high; // ebx
  int Ptr; // edi
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v8; // rdi
  bool v9; // bl
  __int64 v10; // rbx
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v12; // rdx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  __int64 v15; // rdx
  void *v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int128 Source1_8; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+58h] [rbp-B0h]
  void **v20; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v21[3]; // [rsp+70h] [rbp-98h] BYREF
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
  _BYTE v32[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v33; // [rsp+180h] [rbp+78h]
  __int64 v34; // [rsp+188h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+88h]
  void *Block; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v4 = 0;
  Ptr_high = HIDWORD((*a2)[43].Ptr);
  Ptr = (int)(*a2)[43].Ptr;
  v21[0] = 0LL;
  v21[1] = &v20;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "DeviceRemoved";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  Block = 0LL;
  v20 = &RawInputProvidersTracing::DeviceRemoved::`vftable';
  RawInputProvidersTracing::DeviceRemoved::StartActivity((RawInputProvidersTracing::DeviceRemoved *)&v20, Ptr, Ptr_high);
  v7 = *a2;
  v8 = *a2 + 107;
  AcquireSRWLockShared(v8);
  Source1_8 = *(_OWORD *)&v7[108].Ptr;
  v19 = (int)v7[110].Ptr;
  v9 = RtlCompareMemory(
         &Source1_8,
         &`SpatialInteractionDevices::SpatialInteractionController::GetDynamicNodeInfo'::`2'::noNodeId,
         0x10uLL) != 16;
  if ( v8 )
    ReleaseSRWLockShared(v8);
  SpatialInteractionDevices::SpatialInteractionController::StopTracking(*a2, 2LL);
  if ( v9 )
  {
    v10 = 0LL;
    v11 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 2872);
    EnterCriticalSection(v11);
    v13 = SpatialInputControllerCollection::EnsureResources(*a1, v12);
    if ( v13 >= 0 )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 3136);
      EnterCriticalSection(v14);
      if ( *((_QWORD *)*a1 + 399) )
      {
        v10 = *((_QWORD *)*a1 + 399);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
      if ( v14 )
        LeaveCriticalSection(v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x473,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v13);
    }
    if ( v11 )
      LeaveCriticalSection(v11);
    if ( v10 )
    {
      v15 = *((_QWORD *)*a1 + 366);
      if ( v15 )
      {
        v17 = Source1_8;
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v10 + 64LL))(v10, v15, &v17);
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(&v20, v4);
  v20 = &RawInputProvidersTracing::DeviceRemoved::`vftable';
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v20);
  if ( Block )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block, 0xFFFFFFFF) == 1 )
    {
      v16 = Block;
      if ( Block )
      {
        wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)Block + 8);
        operator delete(v16);
      }
    }
    Block = 0LL;
  }
  wil::ActivityBase<RawInputProvidersTracing,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>((__int64)&v25);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
}
