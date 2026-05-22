/*
 * XREFs of ?UpdateRigTransforms@SpatialInputControllerCollection@@AEAAXPEAUIPerceptionTimestamp@Perception@Windows@@PEA_J@Z @ 0x180091444
 * Callers:
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800946C8 (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Percept.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180036808 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     GetHeadToPose @ 0x180091098 (GetHeadToPose.c)
 *     GetRigToHead @ 0x1800912BC (GetRigToHead.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SpatialInputControllerCollection::UpdateRigTransforms(
        SpatialInputControllerCollection *this,
        struct Windows::Perception::IPerceptionTimestamp *a2,
        LARGE_INTEGER *a3)
{
  __int128 v6; // xmm6
  __int128 v7; // xmm7
  __int128 v8; // xmm8
  __int128 v9; // xmm9
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __m256i v15; // [rsp+38h] [rbp-A9h] BYREF
  __m256i v16; // [rsp+58h] [rbp-89h]
  __int128 v17; // [rsp+78h] [rbp-69h] BYREF
  __int128 v18; // [rsp+88h] [rbp-59h]
  __m256i v19; // [rsp+98h] [rbp-49h]
  __int64 v20; // [rsp+B8h] [rbp-29h]

  v20 = -2LL;
  v15.m256i_i32[0] = 1065353216;
  *(__int64 *)((char *)v15.m256i_i64 + 4) = 0LL;
  *(__int64 *)((char *)&v15.m256i_i64[1] + 4) = 0LL;
  v15.m256i_i32[5] = 1065353216;
  v15.m256i_i64[3] = 0LL;
  v16.m256i_i64[0] = 0LL;
  v16.m256i_i32[2] = 1065353216;
  *(__int64 *)((char *)&v16.m256i_i64[1] + 4) = 0LL;
  *(__int64 *)((char *)&v16.m256i_i64[2] + 4) = 0LL;
  v16.m256i_i32[7] = 1065353216;
  v6 = _xmm;
  v17 = _xmm;
  v7 = _xmm;
  v18 = _xmm;
  v8 = _xmm;
  *(_OWORD *)v19.m256i_i8 = _xmm;
  v9 = _xmm;
  *(_OWORD *)&v19.m256i_u64[2] = _xmm;
  v10 = 0LL;
  v11 = 0LL;
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 3136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3136));
  if ( !a2 )
  {
    v13 = *((_QWORD *)this + 397);
    if ( v13 )
    {
      v10 = *((_QWORD *)this + 397);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v10);
    }
  }
  v14 = *((_QWORD *)this + 400);
  if ( v14 )
  {
    v11 = *((_QWORD *)this + 400);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v11);
  }
  if ( v12 )
    LeaveCriticalSection(v12);
  if ( a2 || v10 )
    GetHeadToPose((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v10, (__int64)a3, &v15);
  else
    QueryPerformanceCounter(a3);
  if ( v11 )
  {
    GetRigToHead(v11, &v17);
    v9 = *(_OWORD *)&v19.m256i_u64[2];
    v8 = *(_OWORD *)v19.m256i_i8;
    v7 = v18;
    v6 = v17;
  }
  v17 = *(_OWORD *)v15.m256i_i8;
  v18 = *(_OWORD *)&v15.m256i_u64[2];
  v19 = v16;
  *(__m128 *)((char *)this + 2956) = DirectX::XMMatrixMultiply(*(double *)&v6, (__m128 *)&v17);
  *(_OWORD *)((char *)this + 2972) = v7;
  *(_OWORD *)((char *)this + 2988) = v8;
  *(_OWORD *)((char *)this + 3004) = v9;
  *(_OWORD *)((char *)this + 3020) = v6;
  *(_OWORD *)((char *)this + 3036) = v7;
  *(_OWORD *)((char *)this + 3052) = v8;
  *(_OWORD *)((char *)this + 3068) = v9;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
