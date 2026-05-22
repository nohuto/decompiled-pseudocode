/*
 * XREFs of _lambda_b140be1596bfe507958c2c38a65a7737_::operator() @ 0x1800D83A8
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D8130 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 *     wil::details::lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___::_lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___ @ 0x1800D94FC (wil--details--lambda_call__lambda_b140be1596bfe507958c2c38a65a7737___--_lambda_call__lambda_b140.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800D3AC0 (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATI.c)
 *     ?SetErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII@Z @ 0x1800D917C (-SetErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_b140be1596bfe507958c2c38a65a7737_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v3; // rax
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v5; // rcx
  RTL_SRWLOCK *v6; // rcx
  PVOID v7; // rdx
  PVOID v8; // rcx
  RTL_SRWLOCK *v9; // rsi
  __int64 v10; // r14
  RTL_SRWLOCK *v11; // r15
  int *v12; // r12
  int *v13; // r13
  char v14; // bp
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1 + 138;
  AcquireSRWLockExclusive(v2);
  v3 = *a1;
  Ptr = 0LL;
  v5 = *a1 + 108;
  if ( &v17 != (char *)v5 )
  {
    Ptr = v5->Ptr;
    v5->Ptr = 0LL;
    v3 = *a1;
  }
  v6 = a1[1];
  v7 = 0LL;
  if ( &v17 != (char *)v6 )
  {
    v7 = v6->Ptr;
    v6->Ptr = 0LL;
  }
  v8 = v3[108].Ptr;
  v3[108].Ptr = v7;
  if ( v8 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v9 = *a1;
  v10 = (__int64)a1[5];
  v11 = a1[4];
  v12 = (int *)a1[3];
  v13 = (int *)a1[2];
  v14 = BYTE5((*a1)[34].Ptr) != 0;
  v15 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v15 && *v15 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
      v16,
      *v13,
      (int)v9[1].Ptr,
      HIDWORD(v9[1].Ptr),
      *v12,
      v14,
      (char)v11->Ptr,
      v10);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetErrorStatus(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)*a1,
    (SLODWORD(a1[2]->Ptr) >> 31) & 0x82000009,
    (SLODWORD(a1[2]->Ptr) >> 31) & 2);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
}
