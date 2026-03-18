/*
 * XREFs of ?Get3DBounds@CSpatialVisualContent@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2030
 * Callers:
 *     ?Get3DContentBounds@CSpatialVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4064 (-Get3DContentBounds@CSpatialVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801C1E10 (-ComputeSceneToLocalTransform@CSpatialVisualContent@@AEBAXAEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CSpatialVisualContent::Get3DBounds(CSpatialVisualContent *this, struct D2D_SIZE_F *a2, __m128 *a3)
{
  __int64 v6; // rcx
  _BYTE v8[64]; // [rsp+20h] [rbp-49h] BYREF
  int v9; // [rsp+60h] [rbp-9h]
  _DWORD v10[4]; // [rsp+70h] [rbp+7h] BYREF
  _DWORD v11[4]; // [rsp+80h] [rbp+17h] BYREF
  _DWORD v12[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( a2 && (v6 = *((_QWORD *)this + 8)) != 0 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *, _DWORD *))(*(_QWORD *)v6 + 48LL))(v6, v10, v11);
    v9 = 0;
    v12[0] = v10[0];
    v12[1] = v10[1];
    v12[4] = v10[2];
    v12[2] = v11[0];
    v12[3] = v11[1];
    v12[5] = v11[2];
    CSpatialVisualContent::ComputeSceneToLocalTransform(this, a2, (struct CMILMatrix *)v8);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v8, (__int64)v12, a3);
  }
  else
  {
    a3[1].m128_i32[0] = 0;
    a3[1].m128_i32[1] = 0;
    a3->m128_i32[3] = 0;
    a3->m128_i32[2] = 0;
    a3->m128_i32[1] = 0;
    a3->m128_i32[0] = 0;
  }
  return 0LL;
}
