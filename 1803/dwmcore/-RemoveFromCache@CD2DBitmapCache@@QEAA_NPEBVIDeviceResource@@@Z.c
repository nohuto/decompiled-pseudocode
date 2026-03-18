/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x180179C58
 * Callers:
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179990 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179A20 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180179B80 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802139F0 (-NotifyInvalidResource@CColorKeyBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180215040 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  char v2; // r8
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 i; // r8
  __int64 v8; // rcx

  v2 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v4);
      if ( (const struct IDeviceResource *)((v5 + 16) & -(__int64)(v5 != 0)) == a2 )
        break;
      if ( ++v4 >= *((_DWORD *)this + 20) )
        return v2;
    }
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v5 + 16), (CD2DBitmapCache *)((char *)this + 24));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = *((_DWORD *)this + 20);
    if ( v4 < v6 )
    {
      for ( i = *((_QWORD *)this + 7); v4 < v6 - 1; v6 = *((_DWORD *)this + 20) )
      {
        v8 = v4++;
        *(_QWORD *)(i + 8 * v8) = *(_QWORD *)(i + 8LL * v4);
      }
      *((_DWORD *)this + 20) = v6 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
    }
    return 1;
  }
  return v2;
}
