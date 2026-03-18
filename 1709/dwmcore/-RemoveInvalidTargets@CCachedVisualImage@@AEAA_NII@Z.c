/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008E5F0
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008A910 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x18008AE88 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18008B0FC (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800BEB44 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, int a2, int a3)
{
  int v3; // ebx
  char v4; // si
  _QWORD *v7; // rbp
  __int64 v8; // r14
  __int64 *v9; // rdi
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+2Ch] [rbp-3Ch]

  v3 = *((_DWORD *)this + 66);
  v4 = 0;
  if ( v3 > 0 )
  {
    v7 = (_QWORD *)((char *)this + 240);
    do
    {
      v8 = (unsigned int)(v3 - 1);
      v9 = (__int64 *)(*v7 + 48 * v8);
      if ( !CCachedVisualImage::RenderTargetBitmapInfo::IsValid((CCachedVisualImage::RenderTargetBitmapInfo *)v9)
        || (CRenderTargetBitmap::GetRenderBounds(v9[1], &v11), v12 - (_DWORD)v11 != a2)
        || v13 - HIDWORD(v11) != a3 )
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v9);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v7, (unsigned int)v8);
        v4 = 1;
      }
      --v3;
    }
    while ( v3 > 0 );
  }
  return v4;
}
