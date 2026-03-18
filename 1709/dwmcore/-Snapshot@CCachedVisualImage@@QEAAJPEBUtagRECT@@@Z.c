/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x180159560 (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089F6C (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18008A910 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18008ADA0 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008B120 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008E1B0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18008E4AC (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18008E5F0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008E8C0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18008EA30 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800BEB44 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  BOOL v5; // esi
  signed int Bounds; // eax
  float v7; // xmm0_4
  float v8; // xmm1_4
  int v9; // esi
  _QWORD *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  CRenderTargetBitmap *v15; // rcx
  struct IBitmapSource *v16; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v17[12]; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+44h] [rbp-1Ch]
  __int64 v19; // [rsp+50h] [rbp-10h]
  float v20; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v21; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v18 = 0;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v4 = g_LockTilingTarget;
  v5 = g_LockTilingTarget;
  if ( g_LockTilingTarget )
    v4 = 1LL;
  g_LockTilingTarget = v4;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(
              (CCachedVisualImage *)v4,
              a2,
              (struct BitmapSourceInfo *)v17) < 0
    || (int)CCachedVisualImage::GetBitmapSource(
              (CCachedVisualImage *)((char *)this + 8),
              &v16,
              (const struct BitmapSourceInfo *)v17) < 0 )
  {
    *((_BYTE *)this + 376) = 1;
  }
  else
  {
    g_LockTilingTarget = v5 && g_LockTilingTarget;
    Bounds = CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, (char *)this + 400);
    v2 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bounds, 0x850u);
    }
    else
    {
      v7 = (float)(*((float *)this + 103) - *((float *)this + 101)) + 6291456.25;
      v8 = *((float *)this + 102) - *((float *)this + 100);
      v20 = v7;
      *(float *)&v21.LowPart = v8 + 6291456.25;
      CCachedVisualImage::RemoveInvalidTargets(this, (int)(v21.LowPart << 10) >> 11, (int)(LODWORD(v7) << 10) >> 11);
      v9 = *((_DWORD *)this + 66);
      if ( v9 > 0 )
      {
        v10 = (_QWORD *)((char *)this + 240);
        do
        {
          v11 = (unsigned int)(v9 - 1);
          v12 = *v10 + 48 * v11;
          if ( *(_BYTE *)(v12 + 44)
            || !CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
                  *v10 + 48 * v11,
                  *(__int64 *)v17,
                  *(int *)&v17[8])
            && ((v15 = *(CRenderTargetBitmap **)(v12 + 8),
                 v20 = 0.0,
                 (int)CRenderTargetBitmap::GetDeviceInfo(v15, &v21, (struct DisplayId *)&v20) < 0)
             || !DisplayId::IsSpecific((DisplayId *)&v20))
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 144LL) + 104LL))(*(_QWORD *)(v12 + 8) + 144LL) )
          {
            CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v12);
            DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt((char *)this + 240, (unsigned int)v11);
          }
          --v9;
        }
        while ( v9 > 0 );
      }
      CCachedVisualImage::UnRegisterNotifiers((CCachedVisualImage *)((char *)this + 16));
      v13 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 378) = 1;
      *(_BYTE *)(v13 + 297) = 1;
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v16);
  return v2;
}
