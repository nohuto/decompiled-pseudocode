/*
 * XREFs of ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964
 * Callers:
 *     ?OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180013230 (-OnWeakReferenceTargetRemoved@CVisual@@UEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800856C0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008663C (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x1801730D0 (-RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180173C60 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180174230 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CVisual *,0>::Remove(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = *a1;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      if ( v6 == *(_QWORD *)(v2 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  if ( (unsigned int)v5 < v4 - 1 )
  {
    do
    {
      v7 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(v2 + 8 * v7) = *(_QWORD *)(v2 + 8LL * (unsigned int)v5);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
  }
  --*((_DWORD *)a1 + 6);
  return 1LL;
}
