/*
 * XREFs of ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D9D0
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180171F60 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x1801AC6B8 (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180215B00 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBitmapRealization::GetSourceRect(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // edx
  float v5; // xmm1_4
  int v6; // ecx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( *(int *)(a1 + 272) < 2
    || (v4 = *(_DWORD *)(a1 + 200), *(_DWORD *)(a1 + 208) <= v4)
    || *(_DWORD *)(a1 + 212) <= *(_DWORD *)(a1 + 204) )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(a1 + 144) + 32LL))(a1 + 144, &v8, &v9);
    v6 = v8;
    *(_QWORD *)a2 = 0LL;
    v5 = (float)v9;
    *(float *)(a2 + 8) = (float)v6;
  }
  else
  {
    v2 = 1;
    *(float *)a2 = (float)v4;
    *(float *)(a2 + 4) = (float)*(int *)(a1 + 204);
    *(float *)(a2 + 8) = (float)*(int *)(a1 + 208);
    v5 = (float)*(int *)(a1 + 212);
  }
  *(float *)(a2 + 12) = v5;
  return v2;
}
