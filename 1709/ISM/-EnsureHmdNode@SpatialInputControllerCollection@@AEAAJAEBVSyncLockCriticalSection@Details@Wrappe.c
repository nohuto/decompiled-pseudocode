/*
 * XREFs of ?EnsureHmdNode@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800954E0
 * Callers:
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInputControllerCollection::EnsureHmdNode(
        SpatialInputControllerCollection *this,
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
  v3 = (char *)this + 2936;
  if ( *(_OWORD *)((char *)this + 2936) == *(_OWORD *)&DirectX::g_XMZero || !*((_QWORD *)this + 366) )
    return 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 3136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  v5 = *((_QWORD *)this + 364);
  if ( !v5 || *((_QWORD *)this + 401) )
  {
LABEL_15:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))(*(_QWORD *)v5 + 24LL))(
         v5,
         *((_QWORD *)this + 366),
         v3,
         &v14);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = v14;
    v11 = 0LL;
    v14 = 0LL;
    v12 = *((_QWORD *)this + 401);
    *((_QWORD *)this + 401) = v10;
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
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x68E,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
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
