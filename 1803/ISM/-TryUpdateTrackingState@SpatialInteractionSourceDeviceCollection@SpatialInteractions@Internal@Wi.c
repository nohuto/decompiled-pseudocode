/*
 * XREFs of ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800A7C1C
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A603C (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     std::_Func_impl_no_alloc__lambda_6d0868cfbbe0089754137ce58042b931__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABB30 (std--_Func_impl_no_alloc__lambda_6d0868cfbbe0089754137ce58042b931__void_std--shared_ea_1800ABB30.c)
 *     std::_Func_impl_no_alloc__lambda_797ccfaa408e825e77d1ae9812fe3f24__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABC60 (std--_Func_impl_no_alloc__lambda_797ccfaa408e825e77d1ae9812fe3f24__void_std--shared_ea_1800ABC60.c)
 *     std::_Func_impl_no_alloc__lambda_e2697b6874d71480665f6a82282c5369__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800ABD50 (std--_Func_impl_no_alloc__lambda_e2697b6874d71480665f6a82282c5369__void_std--shared_ea_1800ABD50.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800A469C (-ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A6E64 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A7ABC (-EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(
        struct _RTL_CRITICAL_SECTION *this,
        _QWORD *a2)
{
  PRTL_CRITICAL_SECTION_DEBUG v4; // rdi
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v7; // rdx
  int v8; // eax
  unsigned int v9; // r14d
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  __int64 v11; // rbx
  HSTRING OwningThread; // rbx
  int v13; // eax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v14; // rdx
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HSTRING string; // [rsp+90h] [rbp+40h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG v23; // [rsp+A8h] [rbp+58h]

  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  string = 0LL;
  v6 = this + 2;
  EnterCriticalSection(this + 2);
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
         v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x362,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_19;
  }
  DebugInfo = this[3].DebugInfo;
  if ( DebugInfo )
  {
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 8LL))(this[3].DebugInfo);
    v23 = DebugInfo;
  }
  v11 = *(_QWORD *)&this[3].LockCount;
  if ( v11 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)&this[3].LockCount);
    v20 = v11;
  }
  OwningThread = (HSTRING)this[3].OwningThread;
  if ( !OwningThread || OwningThread != string )
  {
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDuplicateString(OwningThread, &string);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  *(_BYTE *)(*a2 + 103LL) = 0;
  v4 = v23;
  if ( !v23 || (v5 = v20) == 0 || !(**(unsigned __int8 (__fastcall ***)(_QWORD))*a2)(*a2) )
  {
    v16 = *(_DWORD *)(*a2 + 8LL);
    v17 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v17 && *v17 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeTrackingSkipped_(v18, v16);
    }
    goto LABEL_27;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, PRTL_CRITICAL_SECTION_DEBUG, __int64, HSTRING, int))(*(_QWORD *)*a2 + 104LL))(
          *a2,
          v4,
          v20,
          string,
          1);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_28;
  }
  EnterCriticalSection(v6);
  v15 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
          v14);
  v9 = v15;
  if ( v15 >= 0 )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    *(_BYTE *)(*a2 + 101LL) = 1;
LABEL_27:
    *(_BYTE *)(*a2 + 103LL) = 1;
    v9 = 0;
    v4 = v23;
    v5 = v20;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x377,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v15);
LABEL_19:
  if ( v6 )
    LeaveCriticalSection(v6);
LABEL_28:
  WindowsDeleteString(string);
  string = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v4->Type + 16LL))(v4);
  return v9;
}
