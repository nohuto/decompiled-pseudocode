/*
 * XREFs of ?Invoke@DisplayChangedHandler@@UEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180090F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayChangedHandler::Invoke(
        DisplayChangedHandler *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v6; // rbx
  char v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
    goto LABEL_16;
  v7 = *((_BYTE *)this + 16);
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 2872);
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 2872));
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 3136));
  v10 = *(_QWORD *)(v6 + 3184);
  if ( v10 )
  {
    *(_QWORD *)(v6 + 3184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *(_QWORD *)(v6 + 3176);
  if ( v11 )
  {
    *(_QWORD *)(v6 + 3176) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(_QWORD *)(v6 + 3192);
  if ( v12 )
  {
    *(_QWORD *)(v6 + 3192) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *(_QWORD *)(v6 + 3200);
  if ( v13 )
  {
    *(_QWORD *)(v6 + 3200) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v6 != -3136 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 3136));
  v14 = SpatialInputControllerCollection::OnDisplayChanged((SpatialInputControllerCollection *)v6, v9, a3, v7);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x106,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v14);
  else
LABEL_16:
    v14 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v14;
}
