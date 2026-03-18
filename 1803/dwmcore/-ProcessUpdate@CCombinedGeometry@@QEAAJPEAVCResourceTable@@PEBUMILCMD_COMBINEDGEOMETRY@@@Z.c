/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1801AADF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1801AC190 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(struct CResource **this, struct CResourceTable *a2, __m128i *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edx
  struct CResource *Resource; // rax
  int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __m128i v14; // [rsp+30h] [rbp-18h]

  v3 = a3[1].m128i_u32[0];
  v14 = *a3;
  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 12));
  *((_DWORD *)this + 40) = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
  if ( v6 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v6, 0x3Cu);
    this[21] = Resource;
    if ( !Resource )
    {
      v8 = -2003303421;
      v9 = 475;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v9);
      CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
      goto LABEL_17;
    }
  }
  else
  {
    this[21] = 0LL;
    Resource = 0LL;
  }
  if ( v3 )
  {
    v10 = CResourceTable::GetResource((__int64)a2, v3, 0x3Cu);
    this[22] = (struct CResource *)v10;
    if ( !v10 )
    {
      v8 = -2003303421;
      v9 = 493;
      goto LABEL_16;
    }
    Resource = this[21];
  }
  else
  {
    this[22] = 0LL;
  }
  v11 = CResource::RegisterNotifier((CResource *)this, Resource);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x209u);
  }
  else
  {
    v12 = CResource::RegisterNotifier((CResource *)this, this[22]);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x20Au);
  }
  if ( v8 < 0 )
  {
    v9 = 502;
    goto LABEL_16;
  }
LABEL_17:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((CVisual *)this, 0LL, 0LL);
  return (unsigned int)v8;
}
