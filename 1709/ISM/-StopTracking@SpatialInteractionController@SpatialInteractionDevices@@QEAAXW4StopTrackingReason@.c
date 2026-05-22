/*
 * XREFs of ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXW4StopTrackingReason@12@@Z @ 0x1800C6690
 * Callers:
 *     _lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator() @ 0x180093BA4 (_lambda_f0fb12180c22145fe0b52491eb1f97bd_--operator().c)
 *     _lambda_c90380767cc5ac01c309f72366d316c3_::operator() @ 0x18009537C (_lambda_c90380767cc5ac01c309f72366d316c3_--operator().c)
 *     std::_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x180099140 (std--_Func_impl__lambda_e2783e877d92a7bb2c7ed47f980ce499__std--allocator_int__void__ea_180099140.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z @ 0x1800C339C (-ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::StopTracking(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx
  char v9; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 == 1 )
  {
    v4 = (RTL_SRWLOCK *)(a1 + 856);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 856));
    *(_OWORD *)(a1 + 864) = 0uLL;
    *(_DWORD *)(a1 + 880) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 1056));
  v5 = (__int64 *)(a1 + 888);
  v6 = 0LL;
  if ( &v9 != (char *)(a1 + 888) )
  {
    v6 = *v5;
    *v5 = 0LL;
  }
  if ( !*(_BYTE *)(a1 + 800) )
  {
    *(_WORD *)(a1 + 628) = 0;
    *(_WORD *)(a1 + 536) = 0;
    *(_WORD *)(a1 + 576) = 0;
    *(_BYTE *)(a1 + 578) = 0;
    v7 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStopTracking_(v8, *(_DWORD *)(a1 + 344), a2);
      }
    }
  }
  if ( a1 != -1056 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 1056));
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
