/*
 * XREFs of ?GetContentLocalBoundsRect@CCompositionSurfaceBitmap@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A980
 * Callers:
 *     ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x180009D90 (-EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID.c)
 * Callees:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetContentLocalBoundsRect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char result; // al
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (__fastcall *v5)(CDxHandleBitmapRealization *, CMILMatrix *); // rax
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 384);
  result = 0;
  if ( v2 )
  {
    v4 = (CDxHandleBitmapRealization *)(v2 + 104);
    v7 = 0;
    v5 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, CMILMatrix *))(*(_QWORD *)v4 + 32LL);
    if ( v5 == CDxHandleBitmapRealization::GetTransform )
      CDxHandleBitmapRealization::GetTransform(v4, (CMILMatrix *)v6);
    else
      ((void (__fastcall *)(CDxHandleBitmapRealization *, _BYTE *, __int64))v5)(v4, v6, a2);
    return 1;
  }
  return result;
}
