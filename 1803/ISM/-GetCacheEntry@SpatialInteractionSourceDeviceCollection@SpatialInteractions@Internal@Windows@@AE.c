/*
 * XREFs of ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800A6340
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A5970 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A6930 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A7E80 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800A89A0 (-SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 *     std::_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_::_Do_call @ 0x1800ABE50 (std--_Func_impl_no_alloc__lambda_144149a9c27bf167f7fd901056a59f58__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 *v7; // r8
  __int64 *v8; // r9
  __int64 *v9; // rax
  __int64 *v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 424);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 424));
  v8 = *(__int64 **)(a1 + 464);
  v9 = v8;
  v10 = (__int64 *)v8[1];
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_10;
  do
  {
    v11 = *((_DWORD *)v10 + 8);
    v7 = v10;
    if ( v11 >= a2 )
      v10 = (__int64 *)*v10;
    else
      v10 = (__int64 *)v10[2];
    if ( v11 >= a2 )
      v9 = v7;
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v9 == v8 || a2 < *((_DWORD *)v9 + 8) )
LABEL_10:
    v9 = *(__int64 **)(a1 + 464);
  if ( v9 == v8 )
  {
    v12 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    v13 = v9[6];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = v9[6];
    }
    *a3 = v9[5];
    v14 = (volatile signed __int32 *)a3[1];
    a3[1] = v13;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64 *))v14)(v14, v13, v7);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v12 = 0;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v12;
}
