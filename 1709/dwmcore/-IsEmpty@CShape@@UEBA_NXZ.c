/*
 * XREFs of ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800481B0
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180032030 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CShape::IsEmpty(CShape *this)
{
  __int64 (__fastcall *v1)(CRegionShape *, __m128 *, __int64); // rax
  __m128 v3; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, __int64))(*(_QWORD *)this + 32LL);
  if ( v1 == CRegionShape::GetTightBounds )
    CRegionShape::GetTightBounds(this, &v3, 0LL);
  else
    v1(this, &v3, 0LL);
  return v3.m128_f32[2] <= v3.m128_f32[0] || v3.m128_f32[3] <= v3.m128_f32[1];
}
