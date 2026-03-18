/*
 * XREFs of ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x18009551C
 * Callers:
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800955E0 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@@Z @ 0x1800956B8 (-ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CComponentTransform2D::SetCenter(CComponentTransform2D *this, double a2, double a3)
{
  unsigned int v3; // edi
  signed int v6; // eax
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((float *)this + 20) != *(float *)&a2 || *((float *)this + 21) != *(float *)&a3 )
  {
    *((_DWORD *)this + 20) = LODWORD(a2);
    *((_DWORD *)this + 21) = LODWORD(a3);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v7 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v6 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 1u, (const struct D2DVector2 *)&v7);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x10Cu);
    else
      CResource::InvalidateAnimationSources(this, 1u);
  }
  return v3;
}
