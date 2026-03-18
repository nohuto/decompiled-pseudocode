/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?PerformDelayedSnapshot@CSnapshot@@QEAAJXZ @ 0x180165104 (-PerformDelayedSnapshot@CSnapshot@@QEAAJXZ.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180045EA4 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180046654 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x180046BE8 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x180047470 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180047D8C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x180047ED0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800480B0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180048230 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7D50 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  BOOL v5; // esi
  int Bounds; // eax
  struct _GUID *v7; // r9
  float v8; // xmm0_4
  float v9; // xmm1_4
  struct _GUID *v10; // r9
  int v11; // esi
  _QWORD *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  CRenderTargetBitmap *v17; // rcx
  struct IBitmapSource *v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[12]; // [rsp+38h] [rbp-28h] BYREF
  int v20; // [rsp+44h] [rbp-1Ch]
  __int64 v21; // [rsp+50h] [rbp-10h]
  float v22; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v23; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v20 = 0;
  v18 = 0LL;
  memset(v19, 0, sizeof(v19));
  v21 = 0LL;
  v4 = g_LockTilingTarget;
  v5 = g_LockTilingTarget;
  if ( g_LockTilingTarget )
    v4 = 1LL;
  g_LockTilingTarget = v4;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(
              (CCachedVisualImage *)v4,
              a2,
              (struct BitmapSourceInfo *)v19) < 0
    || CCachedVisualImage::GetBitmapSource(
         (CCachedVisualImage *)((char *)this + 8),
         &v18,
         (const struct BitmapSourceInfo *)v19) < 0 )
  {
    *((_BYTE *)this + 320) = 1;
  }
  else
  {
    g_LockTilingTarget = v5 && g_LockTilingTarget;
    Bounds = CCachedVisualImage::GetBounds((__int64)this + 8, 0LL, 0, (__int64)this + 344);
    v2 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x885u);
    }
    else
    {
      v8 = (float)(*((float *)this + 89) - *((float *)this + 87)) + 6291456.25;
      v9 = *((float *)this + 88) - *((float *)this + 86);
      v22 = v8;
      *(float *)&v23.LowPart = v9 + 6291456.25;
      CCachedVisualImage::RemoveInvalidTargets(
        this,
        (unsigned int)((int)(v23.LowPart << 10) >> 11),
        (unsigned int)((int)(LODWORD(v8) << 10) >> 11),
        v7);
      v11 = *((_DWORD *)this + 52);
      if ( v11 > 0 )
      {
        v12 = (_QWORD *)((char *)this + 184);
        do
        {
          v13 = (unsigned int)(v11 - 1);
          v14 = *v12 + 48 * v13;
          if ( *(_BYTE *)(v14 + 44)
            || !CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
                  *v12 + 48 * v13,
                  *(__int64 *)v19,
                  *(int *)&v19[8],
                  v10)
            && ((v17 = *(CRenderTargetBitmap **)(v14 + 8),
                 v22 = 0.0,
                 (int)CRenderTargetBitmap::GetDeviceInfo(v17, &v23, (struct DisplayId *)&v22, v10) < 0)
             || !DisplayId::IsSpecific((DisplayId *)&v22))
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 104LL) + 128LL))(*(_QWORD *)(v14 + 8) + 104LL) )
          {
            CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v14);
            DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt((char *)this + 184, (unsigned int)v13);
          }
          --v11;
        }
        while ( v11 > 0 );
      }
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
      v15 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 323) = 1;
      *(_BYTE *)(v15 + 340) = 1;
    }
  }
  ReleaseInterface<ID2D1Geometry>(&v18);
  return v2;
}
