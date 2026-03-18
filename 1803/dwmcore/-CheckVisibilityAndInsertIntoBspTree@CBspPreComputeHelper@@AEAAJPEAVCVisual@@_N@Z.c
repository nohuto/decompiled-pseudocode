/*
 * XREFs of ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180211578
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800A3BC4 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800C2614 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x180211688 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3)
{
  unsigned int v6; // ebx
  const struct CMILMatrix *TopByReference; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  const struct CMILMatrix *v11; // rax
  const struct Windows::Foundation::Numerics::float4x4 *v12; // rdx
  _DWORD *v13; // rax
  bool v14; // r8
  bool v15; // cl
  int PolygonAndPushToBspTree; // eax
  _OWORD v18[4]; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp-18h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 216LL))(a2) || a3 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 64));
    v8 = *((_OWORD *)TopByReference + 1);
    v18[0] = *(_OWORD *)TopByReference;
    v9 = *((_OWORD *)TopByReference + 2);
    v18[1] = v8;
    v10 = *((_OWORD *)TopByReference + 3);
    LODWORD(TopByReference) = *((_DWORD *)TopByReference + 16);
    v18[2] = v9;
    v18[3] = v10;
    v19 = (int)TopByReference;
    v11 = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
    CMILMatrix::Multiply(v11, (const struct CMILMatrix *)v18, (struct CMILMatrix *)v18);
    CMILMatrix::IsFacingUser((CMILMatrix *)v18, v12);
    v13 = (_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 128);
    v15 = 1;
    if ( !v14 )
    {
      if ( *v13 == 1 && !a3 )
        return v6;
      if ( *v13 )
        v15 = 0;
    }
    PolygonAndPushToBspTree = CBspPreComputeHelper::CreatePolygonAndPushToBspTree(this, a2, v14, v15, a3);
    v6 = PolygonAndPushToBspTree;
    if ( PolygonAndPushToBspTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PolygonAndPushToBspTree, 0x10Bu);
  }
  return v6;
}
