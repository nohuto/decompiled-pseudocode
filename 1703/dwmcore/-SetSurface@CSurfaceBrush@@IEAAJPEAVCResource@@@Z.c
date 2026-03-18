/*
 * XREFs of ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180038004
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180039248 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 *     ?ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@@Z @ 0x1800C0E18 (-ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x1800C1CD0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  char *v5; // rbp
  _BOOL8 (__fastcall *v6)(__int64, int); // rax
  bool v7; // al
  int v8; // eax

  v2 = 0;
  if ( a2 != this[12] )
  {
    v5 = 0LL;
    if ( a2 )
    {
      v6 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
      if ( v6 == CCompositionSurfaceBitmap::IsOfType )
        v7 = CCompositionSurfaceBitmap::IsOfType((__int64)a2, 97);
      else
        v7 = v6((__int64)a2, 97);
      if ( v7 )
      {
        v5 = (char *)a2 + 64;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 61LL) )
      {
        *((_BYTE *)a2 + 306) = 1;
        *((_BYTE *)a2 + 308) = 0;
        CResource::NotifyOnChanged(a2, 0LL, 0LL);
        v5 = (char *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 102LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x38Du);
        return v2;
      }
      v8 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x390u);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
    this[12] = a2;
    Microsoft::WRL::ComPtr<IImageSource>::operator=(this + 13, v5);
  }
  return v2;
}
