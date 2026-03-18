/*
 * XREFs of ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801A50D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801A4584 (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A541C (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashArray(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  _DWORD *v11; // r8
  __m128i v12; // xmm0
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __m128i v15; // [rsp+40h] [rbp-20h] BYREF
  __m128i v16; // [rsp+50h] [rbp-10h] BYREF
  struct CResourceTable *v17; // [rsp+88h] [rbp+28h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  if ( v5 != a5 || (a5 & 3) != 0 )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xCCu);
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 144);
    v10 = (unsigned __int64)v5 >> 2;
    if ( !*((_DWORD *)a3 + 2) )
    {
      *((_QWORD *)this + 19) = *((_QWORD *)this + 18);
      std::vector<float>::reserve((char *)this + 144, v10);
    }
    v11 = (_DWORD *)*((_QWORD *)this + 19);
    v15.m128i_i64[0] = (__int64)v14;
    v15.m128i_i64[1] = v10;
    v12 = v15;
    v15.m128i_i64[0] = (__int64)v14;
    v15.m128i_i64[1] = 0LL;
    v16 = v12;
    v14[0] = v10;
    v14[1] = a4;
    std::vector<float>::insert<gsl::details::span_iterator<gsl::span<float const,-1>,0>,void>(v9, &v17, v11, &v15, &v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged(this, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))6, 0LL);
  }
  return v6;
}
