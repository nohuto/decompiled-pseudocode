/*
 * XREFs of _lambda_69257da0bcd1689e03b316a9b6592b56_::operator() @ 0x1800C657C
 * Callers:
 *     ?StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@456@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C6244 (-StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNod.c)
 *     wil::details::lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___::_lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___ @ 0x1800C6FF8 (wil--details--lambda_call__lambda_69257da0bcd1689e03b316a9b6592b56___--_lambda_call__lambda_6925.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800C328C (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKW4SPATIA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

int __fastcall lambda_69257da0bcd1689e03b316a9b6592b56_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rsi
  PVOID Ptr; // rbx
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  RTL_SRWLOCK *v6; // rax
  PVOID v7; // rdx
  PVOID v8; // rcx
  RTL_SRWLOCK *v9; // rsi
  __int64 v10; // r14
  RTL_SRWLOCK *v11; // r15
  int *v12; // r12
  bool v13; // zf
  int *v14; // rdi
  char v15; // bp
  struct SpatialInteractionDevices::SpatialInteractionTrace *v16; // rax
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v2 = *a1 + 132;
  AcquireSRWLockExclusive(v2);
  Ptr = 0LL;
  v4 = *a1 + 111;
  if ( &v20 != (char *)v4 )
  {
    Ptr = v4->Ptr;
    v4->Ptr = 0LL;
  }
  v5 = a1[1];
  v6 = *a1 + 111;
  v7 = 0LL;
  if ( &v20 != (char *)v5 )
  {
    v7 = v5->Ptr;
    v5->Ptr = 0LL;
  }
  v8 = v6->Ptr;
  v6->Ptr = v7;
  if ( v8 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v9 = *a1;
  v10 = (__int64)a1[5];
  v11 = a1[4];
  v12 = (int *)a1[3];
  v13 = BYTE1((*a1)[50].Ptr) == 0;
  v14 = (int *)a1[2];
  v15 = !v13;
  v16 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
  v17 = (_DWORD *)*((_QWORD *)v16 + 1);
  if ( v17 && *v17 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    LODWORD(v16) = SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
                     v18,
                     *v14,
                     (int)v9[43].Ptr,
                     *v12,
                     v15,
                     (char)v11->Ptr,
                     v10);
  }
  if ( Ptr )
    LODWORD(v16) = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return (int)v16;
}
