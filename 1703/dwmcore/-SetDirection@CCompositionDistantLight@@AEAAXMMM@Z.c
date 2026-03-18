/*
 * XREFs of ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18017358C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180173620 (-SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180172FD0 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

void __fastcall CCompositionDistantLight::SetDirection(CCompositionDistantLight *this, float a2, float a3, float a4)
{
  float v5; // eax
  unsigned __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  float v7; // [rsp+28h] [rbp-10h]

  v6 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  v7 = a4;
  CCompositionLight::NormalizeVec3(
    this,
    (const struct Windows::Foundation::Numerics::float3 *)&v6,
    (struct Windows::Foundation::Numerics::float3 *)&v6);
  if ( *((float *)this + 34) != *(float *)&v6
    || *((float *)this + 35) != *((float *)&v6 + 1)
    || *((float *)this + 36) != v7 )
  {
    v5 = v7;
    *((_QWORD *)this + 17) = v6;
    *((float *)this + 36) = v5;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    CResource::InvalidateAnimationSources(this, 3LL);
  }
}
