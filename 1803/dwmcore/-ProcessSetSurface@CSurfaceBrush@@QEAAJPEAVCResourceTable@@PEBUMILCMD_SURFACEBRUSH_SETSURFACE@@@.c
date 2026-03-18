/*
 * XREFs of ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18009AA38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180099478 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSurface(
        struct D2D_RECT_F *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETSURFACE *a3)
{
  unsigned int v4; // edi
  struct CResource *ResourceWithoutType; // rax
  __int64 v6; // r9
  FLOAT v7; // xmm1_4
  __m128i v8; // xmm0
  FLOAT v9; // xmm1_4
  char v10; // r10
  __int64 (__fastcall *v12)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  int v13; // eax
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v7 = (float)*(int *)(v6 + 16);
  v14.left = (float)*(int *)(v6 + 12);
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(v6 + 20));
  v14.top = v7;
  v9 = (float)*(int *)(v6 + 24);
  LODWORD(v14.right) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v14.bottom = v9;
  if ( ResourceWithoutType == *(struct CResource **)&this[5].right
    || (v13 = CSurfaceBrush::SetSurface((struct CResource **)this, ResourceWithoutType), v4 = v13, v13 >= 0) )
  {
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v14, &this[7].left) )
    {
      v10 = 1;
      this[7] = v14;
    }
    if ( v10 )
    {
      v12 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)&this->left + 64LL);
      if ( v12 == CResource::NotifyOnChanged )
        CResource::NotifyOnChanged((CVisual *)this, 0LL, (CCompositionSurfaceBitmap *)this);
      else
        v12((CVisual *)this, 0LL, (CCompositionSurfaceBitmap *)this);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x78u);
  }
  return v4;
}
