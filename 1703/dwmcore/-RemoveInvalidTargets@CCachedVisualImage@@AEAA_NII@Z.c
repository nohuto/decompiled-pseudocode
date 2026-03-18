/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180047ED0
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047A70 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180046654 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180046CD0 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18004744C (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7D50 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(
        CCachedVisualImage *this,
        __int64 a2,
        __int64 a3,
        struct _GUID *a4)
{
  int v4; // ebx
  char v5; // si
  int v6; // r15d
  int v7; // r12d
  _QWORD *v8; // rbp
  __int64 v9; // r14
  __int64 *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+2Ch] [rbp-3Ch]

  v4 = *((_DWORD *)this + 52);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  if ( v4 > 0 )
  {
    v8 = (_QWORD *)((char *)this + 184);
    do
    {
      v9 = (unsigned int)(v4 - 1);
      v10 = (__int64 *)(*v8 + 48 * v9);
      if ( !CCachedVisualImage::RenderTargetBitmapInfo::IsValid(
              (CCachedVisualImage::RenderTargetBitmapInfo *)v10,
              a2,
              a3,
              a4)
        || (CRenderTargetBitmap::GetRenderBounds(v10[1], &v12), v13 - (_DWORD)v12 != v7)
        || v14 - HIDWORD(v12) != v6 )
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v10);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v8, (unsigned int)v9);
        v5 = 1;
      }
      --v4;
    }
    while ( v4 > 0 );
  }
  return v5;
}
