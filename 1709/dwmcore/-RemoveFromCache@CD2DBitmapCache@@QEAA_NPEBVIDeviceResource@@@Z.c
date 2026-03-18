/*
 * XREFs of ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800C4C6C
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800C5C30 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801501A0 (-NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150210 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150370 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1AD0 (-NotifyInvalidResource@CColorKeyBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD2DBitmapCache::RemoveFromCache(CD2DBitmapCache *this, const struct IDeviceResource *a2)
{
  char v2; // r8
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // r8
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
      v7 = *((_QWORD *)this + 7);
      if ( v4 < v6 - 1 )
      {
        do
        {
          v8 = v4++;
          *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v4);
        }
        while ( v4 < *((_DWORD *)this + 20) - 1 );
      }
      --*((_DWORD *)this + 20);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
    }
    return 1;
  }
  return v2;
}
