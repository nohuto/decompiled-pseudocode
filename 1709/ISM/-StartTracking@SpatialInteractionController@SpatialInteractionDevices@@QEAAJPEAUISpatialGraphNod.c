/*
 * XREFs of ?StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@456@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C6244
 * Callers:
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x1800C31E4 (-ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x1800C4994 (-EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEA.c)
 *     _lambda_69257da0bcd1689e03b316a9b6592b56_::operator() @ 0x1800C657C (_lambda_69257da0bcd1689e03b316a9b6592b56_--operator().c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInteractionDevices::SpatialInteractionController::StartTracking(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rsi
  int v9; // ebx
  SpatialInteractionDevices::SpatialInteractionController *v10; // rcx
  bool v11; // si
  unsigned int v12; // esi
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-B1h] BYREF
  int v23[2]; // [rsp+38h] [rbp-A9h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-99h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp-91h] BYREF
  __int128 v27; // [rsp+58h] [rbp-89h]
  __int128 v28; // [rsp+68h] [rbp-79h]
  __int128 v29; // [rsp+78h] [rbp-69h]
  _OWORD v30[3]; // [rsp+88h] [rbp-59h] BYREF
  char v31; // [rsp+B8h] [rbp-29h]
  __int64 v32; // [rsp+C0h] [rbp-21h]
  __int128 Source1; // [rsp+C8h] [rbp-19h] BYREF
  int v34; // [rsp+D8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v32 = -2LL;
  v25 = 1;
  v22 = 0;
  _InterlockedExchange64((volatile __int64 *)(a1 + 736), GetTickCount64());
  v8 = *(_QWORD *)(a1 + 744);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 664));
  if ( !*(_BYTE *)(a1 + 656) )
  {
    *(_BYTE *)(a1 + 656) = 1;
    pftDueTime = (struct _FILETIME)(-10000 * v8);
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 648), &pftDueTime, 0, 0);
  }
  if ( a1 != -664 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 664));
  if ( *(_BYTE *)(a1 + 800) )
    return v22;
  *(_QWORD *)v23 = 0LL;
  Source1 = 0uLL;
  v34 = 0;
  *(_QWORD *)&v27 = a1;
  *((_QWORD *)&v27 + 1) = v23;
  *(_QWORD *)&v28 = &v22;
  *((_QWORD *)&v28 + 1) = &v25;
  *(_QWORD *)&v29 = &v24;
  *((_QWORD *)&v29 + 1) = &Source1;
  v30[0] = v27;
  v30[1] = v28;
  v30[2] = v29;
  v31 = 1;
  v9 = 0;
  v24 = 0;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 856));
  Source1 = *(_OWORD *)(a1 + 864);
  v34 = *(_DWORD *)(a1 + 880);
  v11 = RtlCompareMemory(
          &Source1,
          &`SpatialInteractionDevices::SpatialInteractionController::GetDynamicNodeInfo'::`2'::noNodeId,
          0x10uLL) != 16;
  if ( a1 != -856 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 856));
  if ( !v11 )
  {
    SpatialInteractionDevices::SpatialInteractionController::EnsureInitializationRetryParameters(v10);
    v12 = 1;
    if ( SpatialInteractionDevices::SpatialInteractionController::s_DynamicNodeInfoBindingAttemptsCount )
    {
      while ( !*(_BYTE *)(a1 + 1088) )
      {
        if ( v12 > 1 )
          Sleep(SpatialInteractionDevices::SpatialInteractionController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds);
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL))(
               a3,
               *(_QWORD *)(a1 + 792),
               &Source1);
        if ( v9 >= 0 )
        {
          AcquireSRWLockExclusive((PSRWLOCK)(a1 + 856));
          *(_OWORD *)(a1 + 864) = Source1;
          *(_DWORD *)(a1 + 880) = v34;
          if ( a1 != -856 )
            ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 856));
          break;
        }
        v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v13 && *v13 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::ControllerGetDynamicNodeFailed_(
            v14,
            v9,
            *(_DWORD *)(a1 + 344));
        }
        if ( ++v12 > SpatialInteractionDevices::SpatialInteractionController::s_DynamicNodeInfoBindingAttemptsCount )
          break;
      }
    }
    v24 = v12 - 1;
  }
  v22 = v9;
  if ( v9 >= 0 )
  {
    v17 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 )
    {
      *(_QWORD *)v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD, int *))(*(_QWORD *)a2 + 32LL))(
            a2,
            a4,
            &Source1,
            v25,
            v23);
    v9 = v18;
    v22 = v18;
    if ( v18 < 0 )
    {
      v15 = (unsigned int)v18;
      v16 = 1256LL;
      goto LABEL_28;
    }
    v31 = 0;
    lambda_69257da0bcd1689e03b316a9b6592b56_::operator()(v30);
    v21 = *(_QWORD *)v23;
    if ( *(_QWORD *)v23 )
    {
      *(_QWORD *)v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v22;
  }
  v15 = (unsigned int)v9;
  v16 = 1246LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
    (const char *)v15);
  v31 = 0;
  lambda_69257da0bcd1689e03b316a9b6592b56_::operator()(v30);
  v19 = *(_QWORD *)v23;
  if ( *(_QWORD *)v23 )
  {
    *(_QWORD *)v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v9;
}
