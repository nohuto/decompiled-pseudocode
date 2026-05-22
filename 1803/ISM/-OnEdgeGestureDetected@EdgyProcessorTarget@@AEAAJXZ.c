/*
 * XREFs of ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B4280
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800B41B8 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x180066190 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800B4704 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnEdgeGestureDetected(
        EdgyProcessorTarget *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  __int64 v6; // r14
  EdgyImpl *v7; // rcx
  bool CandidateEdgyDetectedInfo; // al
  __int64 v9; // rsi
  const unsigned __int16 *v10; // rdx
  __int64 v11; // r15
  FLOAT v12; // xmm1_4
  __m128i v13; // xmm0
  FLOAT v14; // xmm1_4
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  int v21; // ebx
  __int16 v23; // [rsp+50h] [rbp-59h] BYREF
  __int64 v24; // [rsp+58h] [rbp-51h]
  __int64 v25; // [rsp+60h] [rbp-49h]
  unsigned int v26[2]; // [rsp+68h] [rbp-41h]
  _BYTE v27[16]; // [rsp+70h] [rbp-39h] BYREF
  int v28; // [rsp+80h] [rbp-29h]
  __int64 v29; // [rsp+98h] [rbp-11h]
  __int64 v30; // [rsp+A0h] [rbp-9h] BYREF
  int v31; // [rsp+A8h] [rbp-1h]
  struct D2D_VECTOR_2F v32; // [rsp+ACh] [rbp+3h]
  __int64 v33; // [rsp+B8h] [rbp+Fh]
  D2D_VECTOR_2F v34; // [rsp+C0h] [rbp+17h]
  __int64 v35; // [rsp+C8h] [rbp+1Fh]
  int v36; // [rsp+D0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct D2D_VECTOR_2F v38; // [rsp+110h] [rbp+67h] BYREF
  D2D_VECTOR_2F v39; // [rsp+118h] [rbp+6Fh] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 8) - 2) > 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2A8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      a4);
    __debugbreak();
  }
  v5 = 0;
  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  *(_QWORD *)v26 = 0LL;
  memset_0(v27, 0, 0x28uLL);
  v6 = 0LL;
  v7 = (EdgyImpl *)(*((_QWORD *)this + 13) + 64LL);
  v29 = 0LL;
  if ( *((_QWORD *)v7 + 1) )
  {
    CandidateEdgyDetectedInfo = EdgyImpl::GetCandidateEdgyDetectedInfo(v7, (struct CandidateEdgyDetectedInfo *)&v23);
    v6 = v29;
  }
  else
  {
    CandidateEdgyDetectedInfo = 0;
  }
  if ( CandidateEdgyDetectedInfo )
  {
    v9 = *((_QWORD *)this + 13);
    v10 = *(const unsigned __int16 **)(v9 + 72);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v9 + 88);
      v12 = (float)*(int *)(v9 + 32);
      v38.x = (float)*(int *)(v9 + 28);
      v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 19));
      v38.y = v12;
      v14 = (float)*((int *)this + 20);
      LODWORD(v39.x) = _mm_cvtepi32_ps(v13).m128_u32[0];
      v39.y = v14;
      if ( (_BYTE)v23 )
      {
        if ( *((_QWORD *)v10 + 3) >= 8uLL )
          v10 = *(const unsigned __int16 **)v10;
        BamoEdgyControllerClientProxy::EdgyGestureDetected(
          (BamoEdgyControllerClientProxy *)(v25 + 8),
          v10,
          *(unsigned int *)(v9 + 24),
          &v38,
          *(_QWORD *)(v9 + 40),
          &v39);
      }
      if ( HIBYTE(v23) )
      {
        v15 = *(_QWORD *)(v11 + 16);
        v16 = *(_QWORD *)(v11 + 56);
        v31 = *(_DWORD *)(v9 + 24);
        v33 = *(_QWORD *)(v9 + 40);
        v35 = *((_QWORD *)this + 11);
        v32 = v38;
        v36 = v28;
        v30 = v6;
        v34 = v39;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v15 + 160LL))(
                v15,
                v16,
                &v30,
                56LL);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1B1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
            (const char *)(unsigned int)v17);
          JUMPOUT(0x1800B4459LL);
        }
      }
    }
    v18 = *((_QWORD *)this + 12);
    v19 = v18 == 0;
    if ( !v18 )
    {
      v20 = v24;
      *((_QWORD *)this + 12) = v24;
      v19 = v20 == 0;
    }
    LOBYTE(v5) = !v19;
    v21 = v5 + 2;
  }
  else
  {
    v21 = 1;
  }
  *((_DWORD *)this + 8) = v21;
  return 0LL;
}
