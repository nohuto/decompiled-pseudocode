/*
 * XREFs of ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D8130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_b140be1596bfe507958c2c38a65a7737_::operator() @ 0x1800D83A8 (_lambda_b140be1596bfe507958c2c38a65a7737_--operator().c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1800D84F4 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StartTracking(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  __int64 v9; // r15
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-91h] BYREF
  int v19[2]; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-81h] BYREF
  struct _FILETIME pftDueTime; // [rsp+48h] [rbp-79h] BYREF
  __int128 v22; // [rsp+50h] [rbp-71h]
  __int128 v23; // [rsp+60h] [rbp-61h]
  __int128 v24; // [rsp+70h] [rbp-51h]
  _OWORD v25[3]; // [rsp+80h] [rbp-41h] BYREF
  char v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]
  _QWORD v28[2]; // [rsp+C0h] [rbp-1h] BYREF
  int v29; // [rsp+D0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v27 = -2LL;
  v18 = 0;
  _InterlockedExchange64((volatile __int64 *)(a1 + 208), GetTickCount64());
  v9 = *(_QWORD *)(a1 + 216);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 136));
  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    pftDueTime = (struct _FILETIME)(-10000 * v9);
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 120), &pftDueTime, 0, 0);
  }
  if ( a1 != -136 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 136));
  if ( *(_BYTE *)(a1 + 784) )
  {
    *(_BYTE *)(a1 + 785) = 1;
    return v18;
  }
  *(_QWORD *)v19 = 0LL;
  v28[0] = 0LL;
  v28[1] = 0LL;
  v29 = 0;
  *(_QWORD *)&v22 = a1;
  *((_QWORD *)&v22 + 1) = v19;
  *(_QWORD *)&v23 = &v18;
  *((_QWORD *)&v23 + 1) = &a5;
  *(_QWORD *)&v24 = &v20;
  *((_QWORD *)&v24 + 1) = v28;
  v25[0] = v22;
  v25[1] = v23;
  v25[2] = v24;
  v26 = 1;
  v20 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 64LL))(a1, v28) )
    v10 = 0;
  else
    v10 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
            (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)a1,
            a3,
            (struct Windows::Internal::Holographic::DynamicNodeInfo *)v28,
            &v20);
  v18 = v10;
  if ( v10 >= 0 )
  {
    v13 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *, _QWORD, int *))(*(_QWORD *)a2 + 32LL))(
            a2,
            a4,
            v28,
            a5,
            v19);
    v10 = v14;
    v18 = v14;
    if ( v14 >= 0 )
    {
      if ( !a4 || a4 != *(HSTRING *)(a1 + 872) )
      {
        WindowsDeleteString(*(HSTRING *)(a1 + 872));
        *(_QWORD *)(a1 + 872) = 0LL;
        WindowsDuplicateString(a4, (HSTRING *)(a1 + 872));
      }
      v26 = 0;
      lambda_b140be1596bfe507958c2c38a65a7737_::operator()(v25);
      v17 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      return v18;
    }
    v11 = (unsigned int)v14;
    v12 = 1186LL;
  }
  else
  {
    v11 = (unsigned int)v10;
    v12 = 1176LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)v11);
  v26 = 0;
  lambda_b140be1596bfe507958c2c38a65a7737_::operator()(v25);
  v15 = *(_QWORD *)v19;
  if ( *(_QWORD *)v19 )
  {
    *(_QWORD *)v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v10;
}
