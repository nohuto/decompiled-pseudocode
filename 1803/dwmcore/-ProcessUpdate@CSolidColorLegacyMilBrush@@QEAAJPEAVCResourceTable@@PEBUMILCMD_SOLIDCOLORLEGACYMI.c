/*
 * XREFs of ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x1800B6058
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800B5F00 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800B5FA0 (-RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::ProcessUpdate(
        CSolidColorLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SOLIDCOLORLEGACYMILBRUSH *a3)
{
  __m128d v5; // xmm6
  __m128i v6; // xmm7
  unsigned int v7; // edx
  struct CResourceTable *v8; // rdx
  int v9; // ebx
  __int64 Resource; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+4Ch] [rbp-3Ch]

  v5 = *(__m128d *)a3;
  v6 = *((__m128i *)a3 + 1);
  *(_QWORD *)((char *)&v15 + 4) = *((_QWORD *)a3 + 4);
  LODWORD(v15) = v6.m128i_i32[3];
  HIDWORD(v15) = *((_DWORD *)a3 + 10);
  CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  v7 = _mm_cvtsi128_si32(v6);
  *((_QWORD *)this + 9) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  if ( v7 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v7, 0x2Fu);
    *((_QWORD *)this + 10) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      v12 = 2492;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v12);
      CSolidColorLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
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
  v13 = CResourceTable::GetResource((__int64)a2, v6.m128i_u32[1], 0x8Eu);
  *((_QWORD *)this + 11) = v13;
  if ( !v13 )
  {
    v9 = -2003303421;
    v12 = 2511;
    goto LABEL_16;
  }
LABEL_5:
  v8 = (struct CResourceTable *)v6.m128i_u32[2];
  if ( !v6.m128i_i32[2] )
  {
    *((_QWORD *)this + 12) = 0LL;
    goto LABEL_7;
  }
  v14 = CResourceTable::GetResource((__int64)a2, v6.m128i_u32[2], 0x8Eu);
  *((_QWORD *)this + 12) = v14;
  if ( !v14 )
  {
    v9 = -2003303421;
    v12 = 2529;
    goto LABEL_16;
  }
LABEL_7:
  *(_OWORD *)((char *)this + 104) = v15;
  v9 = CSolidColorLegacyMilBrush::RegisterNotifiers((struct CResource **)this, v8);
  if ( v9 < 0 )
  {
    v12 = 2540;
    goto LABEL_16;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v9;
}
