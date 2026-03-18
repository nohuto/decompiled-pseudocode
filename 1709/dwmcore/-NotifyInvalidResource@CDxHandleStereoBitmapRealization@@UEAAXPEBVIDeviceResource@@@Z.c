/*
 * XREFs of ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800C5C30
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800C4C6C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1C50 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1801D3170 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::NotifyInvalidResource(
        CDxHandleStereoBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  __int64 v4; // rax

  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleStereoBitmapRealization *)((char *)this + 392), a2) )
  {
    v4 = *((_QWORD *)this + 48);
    if ( v4 )
    {
      if ( (const struct IDeviceResource *)((v4 + 16) & -(__int64)(v4 != 0)) == a2 )
        CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)((char *)this - 24));
    }
    CDxHandleBitmapRealization::NotifyInvalidResource(this, a2);
  }
}
