/*
 * XREFs of ?TryUpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@2@Z @ 0x1800C5250
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@_JAEBUMatrix4x4@Numerics@Foundation@6@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800C4A3C (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x1800C2AE8 (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800C30FC (-UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@1@Z @ 0x1800C57F0 (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall SpatialInteractionDevices::SpatialInteractionController::TryUpdatePose(
        SpatialInteractionDevices::SpatialInteractionController *this,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a3,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a4,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a5)
{
  RTL_SRWLOCK *v9; // rbx
  char v10; // di
  __int64 v11; // rcx
  int v12; // ebp
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  bool v15; // al
  __m128 v16; // xmm5
  int v17; // ebp
  _DWORD *v18; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v19; // rcx
  _BYTE v21[36]; // [rsp+40h] [rbp-198h] BYREF
  __m128 v22; // [rsp+64h] [rbp-174h]
  __m128 v23; // [rsp+74h] [rbp-164h]
  __m128 v24; // [rsp+84h] [rbp-154h]
  _BYTE v25[160]; // [rsp+E0h] [rbp-F8h] BYREF

  v9 = (RTL_SRWLOCK *)(((unsigned __int64)this + 1056) & -(__int64)(TryAcquireSRWLockShared((PSRWLOCK)this + 132) != 0));
  if ( v9 )
  {
    memset((char *)this + 476, 0, 0x40uLL);
    memset((char *)this + 600, 0, 0x20uLL);
    v11 = *((_QWORD *)this + 111);
    v10 = 1;
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, a2, 0LL, v21);
      if ( v12 >= 0 )
      {
        v15 = (v21[16] & 2) != 0;
        *((_BYTE *)this + 596) = v15;
        if ( v15 )
        {
          v16 = _mm_shuffle_ps(v23, v22, 244);
          *(__m128 *)((char *)this + 580) = DirectX::XMQuaternionRotationMatrix(
                                              COERCE_DOUBLE(v22.m128_u64[0] & DirectX::g_XMMask3),
                                              COERCE_DOUBLE(_mm_shuffle_ps(v16, v16, 82).m128_u64[0] & DirectX::g_XMMask3),
                                              COERCE_DOUBLE(_mm_shuffle_ps(v23, v24, 14).m128_u64[0] & DirectX::g_XMMask3));
        }
        if ( a3 )
        {
          v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  0LL,
                  v25);
          if ( v17 >= 0 )
          {
            SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
              this,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v25,
              (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v21,
              a4,
              a5);
          }
          else
          {
            v18 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
            if ( v18 && *v18 )
            {
              SpatialInteractionDevices::SpatialInteractionTrace::Instance();
              SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
                v19,
                v17,
                *((_DWORD *)this + 86),
                L"No HMD Pose");
            }
          }
        }
      }
      else
      {
        v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v13 && *v13 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
            v14,
            v12,
            *((_DWORD *)this + 86),
            L"No controller Pose");
        }
        *((_BYTE *)this + 596) = 0;
      }
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v9 )
    ReleaseSRWLockShared(v9);
  return v10;
}
