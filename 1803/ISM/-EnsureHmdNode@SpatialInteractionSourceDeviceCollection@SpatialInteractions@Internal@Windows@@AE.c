/*
 * XREFs of ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A7ABC
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800A7C1C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  char *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rcx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v10; // rax
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  v3 = (char *)this + 144;
  if ( *((_OWORD *)this + 9) == *(_OWORD *)&DirectX::g_XMZero || !*((_QWORD *)this + 17) )
    return 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 344);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  v5 = *((_QWORD *)this + 15);
  if ( !v5 || *((_QWORD *)this + 52) )
  {
LABEL_15:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))(*(_QWORD *)v5 + 24LL))(
         v5,
         *((_QWORD *)this + 17),
         v3,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = v14;
    v11 = 0LL;
    v14 = 0LL;
    v12 = *((_QWORD *)this + 52);
    *((_QWORD *)this + 52) = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = v14;
    }
    if ( v11 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34F,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v6);
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
