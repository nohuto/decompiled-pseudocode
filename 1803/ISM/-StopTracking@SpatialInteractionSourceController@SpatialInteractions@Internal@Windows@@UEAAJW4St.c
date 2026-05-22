/*
 * XREFs of ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x1800D8790
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z @ 0x1800D3BD8 (-ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800D920C (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopTracking(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64, __int128 *); // rax
  int v8; // eax
  unsigned int v9; // esi
  _QWORD *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rbp
  _DWORD *v16; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v17; // rcx
  bool v18; // zf
  char v19; // [rsp+38h] [rbp-60h] BYREF
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 == 1 )
  {
    if ( a3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int128 *))(*a1 + 64LL))(a1, &v21) )
      {
        v6 = a1[109];
        v7 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 64LL);
        v20 = v21;
        v8 = v7(a3, v6, &v20);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4FD,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
    }
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)a1);
    AcquireSRWLockExclusive((PSRWLOCK)a1 + 104);
    *(_OWORD *)(a1 + 105) = 0uLL;
    *((_DWORD *)a1 + 214) = 0;
    if ( a1 != (_QWORD *)-832LL )
      ReleaseSRWLockExclusive((PSRWLOCK)a1 + 104);
    *((_BYTE *)a1 + 101) = 1;
  }
  v11 = a1 + 138;
  AcquireSRWLockExclusive((PSRWLOCK)a1 + 138);
  v12 = a1 + 108;
  v13 = 0LL;
  v14 = 0LL;
  if ( &v19 != (char *)(a1 + 108) )
  {
    v13 = *v12;
    *v12 = 0LL;
    v14 = v13;
  }
  if ( *((_BYTE *)a1 + 784) )
  {
    *((_BYTE *)a1 + 785) = 0;
    v15 = v14;
  }
  else
  {
    *((_WORD *)a1 + 220) = 0;
    *((_WORD *)a1 + 174) = 0;
    *((_WORD *)a1 + 194) = 0;
    *((_BYTE *)a1 + 390) = 0;
    v15 = v14;
    v16 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v16 && *v16 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStopTracking_(v17, *((_DWORD *)a1 + 2), a2);
    }
  }
  v18 = v11 == 0LL;
  if ( a1 != (_QWORD *)-1104LL )
  {
    ReleaseSRWLockExclusive((PSRWLOCK)a1 + 138);
    v18 = v11 == 0LL;
  }
  if ( v18 )
    v14 = v15;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
