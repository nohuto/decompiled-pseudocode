/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x18017A98C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18017BE90 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(struct CResource **this, struct CResourceTable *a2, __m128i *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edx
  __int64 Resource; // rax
  signed int v8; // ebx
  __int64 v9; // rax
  signed int v10; // eax
  signed int v11; // eax
  __m128i v13; // [rsp+30h] [rbp-18h]

  v3 = a3[1].m128i_u32[0];
  v13 = *a3;
  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
  *((_DWORD *)this + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x37u);
    this[17] = (struct CResource *)Resource;
    if ( !Resource )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x1D5u);
LABEL_15:
      CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
      goto LABEL_16;
    }
  }
  else
  {
    this[17] = 0LL;
  }
  if ( v3 )
  {
    v9 = CResourceTable::GetResource((__int64)a2, v3, 0x37u);
    this[18] = (struct CResource *)v9;
    if ( !v9 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x1E7u);
      goto LABEL_15;
    }
  }
  else
  {
    this[18] = 0LL;
  }
  v10 = CResource::RegisterNotifier((CResource *)this, this[17]);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x202u);
  }
  else
  {
    v11 = CResource::RegisterNotifier((CResource *)this, this[18]);
    v8 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x203u);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1F0u);
    goto LABEL_15;
  }
LABEL_16:
  CResource::NotifyOnChanged((CGradientBrush *)this, 0, 0LL);
  return (unsigned int)v8;
}
