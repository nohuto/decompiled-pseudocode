/*
 * XREFs of ?Invoke@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAUIHolographicDisplay@785@@Z @ 0x1800A5390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800A7080 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::Invoke(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *this,
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
  v8 = (struct _RTL_CRITICAL_SECTION *)(v6 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 80));
  EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 344));
  v10 = *(_QWORD *)(v6 + 392);
  if ( v10 )
  {
    *(_QWORD *)(v6 + 392) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *(_QWORD *)(v6 + 384);
  if ( v11 )
  {
    *(_QWORD *)(v6 + 384) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(_QWORD *)(v6 + 400);
  if ( v12 )
  {
    *(_QWORD *)(v6 + 400) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *(_QWORD *)(v6 + 408);
  if ( v13 )
  {
    *(_QWORD *)(v6 + 408) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v6 != -344 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 344));
  v14 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDisplayChanged(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)v6,
          v9,
          a3,
          v7);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v14);
  else
LABEL_16:
    v14 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v14;
}
