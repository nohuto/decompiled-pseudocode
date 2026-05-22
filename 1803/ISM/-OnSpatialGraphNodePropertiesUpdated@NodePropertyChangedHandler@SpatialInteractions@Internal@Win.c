/*
 * XREFs of ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x1800D5760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x1800D6060 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1800D60D0 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::OnSpatialGraphNodePropertiesUpdated(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v20; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  v9 = a1 + 64;
  if ( *a3 != *(_DWORD *)(a1 + 64)
    || a3[1] != *(_DWORD *)(a1 + 68)
    || a3[2] != *(_DWORD *)(a1 + 72)
    || a3[3] != *(_DWORD *)(a1 + 76) )
  {
    v11 = 140LL;
    goto LABEL_23;
  }
  v10 = *(_QWORD *)(a1 + 96);
  if ( a2 != v10 )
  {
    v11 = 141LL;
LABEL_23:
    v13 = -2147418113;
    v14 = 2147549183LL;
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_21;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 4) != 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v10 + 168LL))(v10, v9, &v20);
      v13 = v16;
      if ( v16 < 0 )
      {
        v14 = (unsigned int)v16;
        v11 = 153LL;
        goto LABEL_24;
      }
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
        *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
        v20);
    }
    else if ( (a4 & 8) != 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v10 + 176LL))(v10, v9, &v20);
      v13 = v17;
      if ( v17 < 0 )
      {
        v14 = (unsigned int)v17;
        v11 = 159LL;
        goto LABEL_24;
      }
      v15 = (unsigned __int8)v20;
      goto LABEL_20;
    }
LABEL_21:
    v13 = 0;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v10 + 160LL))(v10, v9, &v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v15 = v20;
LABEL_20:
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
      *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
      v15);
    goto LABEL_21;
  }
  v14 = (unsigned int)v12;
  v11 = 147LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)v14);
LABEL_25:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v13;
}
