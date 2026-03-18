/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x18004BA20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x18004BAE4 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18004BC90 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  __m128d v5; // xmm6
  __m128i v6; // xmm7
  __int64 v7; // rdx
  struct CResourceTable *v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  __int64 Resource; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+4Ch] [rbp-3Ch]

  v5 = *(__m128d *)a3;
  v6 = *((__m128i *)a3 + 1);
  *(_QWORD *)((char *)&v15 + 4) = *((_QWORD *)a3 + 4);
  LODWORD(v15) = v6.m128i_i32[3];
  HIDWORD(v15) = *((_DWORD *)a3 + 10);
  CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
  v7 = (unsigned int)_mm_cvtsi128_si32(v6);
  *((_QWORD *)this + 9) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 50LL);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEA8u);
LABEL_16:
      CSolidColorLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( !v6.m128i_i32[1] )
  {
    *((_QWORD *)this + 11) = 0LL;
    goto LABEL_5;
  }
  v13 = CResourceTable::GetResource(a2, v6.m128i_u32[1], 62LL);
  *((_QWORD *)this + 11) = v13;
  if ( !v13 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xEBCu);
    goto LABEL_16;
  }
LABEL_5:
  v8 = (struct CResourceTable *)v6.m128i_u32[2];
  if ( !v6.m128i_i32[2] )
  {
    *((_QWORD *)this + 12) = 0LL;
    goto LABEL_7;
  }
  v14 = CResourceTable::GetResource(a2, v6.m128i_u32[2], 62LL);
  *((_QWORD *)this + 12) = v14;
  if ( !v14 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xED0u);
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 104) = v15;
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers(this, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xEDBu);
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v10;
}
