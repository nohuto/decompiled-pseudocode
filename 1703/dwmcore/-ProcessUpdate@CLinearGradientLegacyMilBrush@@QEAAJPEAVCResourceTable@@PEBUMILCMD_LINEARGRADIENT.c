/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x18012EB10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180174AAC (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x180174F20 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::ProcessUpdate(
        CLinearGradientLegacyMilBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTLEGACYMILBRUSH *a3,
        const void *a4,
        unsigned int a5)
{
  __m128d v8; // xmm6
  __m128i v9; // xmm7
  unsigned int v10; // edx
  __int64 Resource; // rax
  int v12; // edi
  __int64 v13; // rax
  struct CResourceTable *v14; // rdx
  __int64 v15; // rax
  void **v16; // rsi
  LPVOID v17; // rax
  int v18; // eax
  _BYTE dwBytes[44]; // [rsp+58h] [rbp-1h]

  v8 = *(__m128d *)a3;
  v9 = *((__m128i *)a3 + 1);
  *(_OWORD *)dwBytes = *((_OWORD *)a3 + 2);
  *(_QWORD *)&dwBytes[32] = *((_QWORD *)a3 + 8);
  *(_OWORD *)&dwBytes[16] = *((_OWORD *)a3 + 3);
  *(_DWORD *)&dwBytes[40] = *((_DWORD *)a3 + 18);
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  v10 = _mm_cvtsi128_si32(v9);
  *((_QWORD *)this + 11) = *(_OWORD *)&_mm_unpackhi_pd(v8, v8);
  if ( v10 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v10, 0x32u);
    *((_QWORD *)this + 12) = Resource;
    if ( !Resource )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF27u);
LABEL_24:
      CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
      goto LABEL_25;
    }
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( v9.m128i_i32[1] )
  {
    v13 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[1], 0x3Eu);
    *((_QWORD *)this + 13) = v13;
    if ( !v13 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF3Bu);
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v14 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( v9.m128i_i32[2] )
  {
    v15 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[2], 0x3Eu);
    *((_QWORD *)this + 14) = v15;
    if ( !v15 )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF4Fu);
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 30) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 124) = *(_QWORD *)dwBytes;
  *((_DWORD *)this + 33) = *(_DWORD *)&dwBytes[8];
  *((_OWORD *)this + 9) = *(_OWORD *)&dwBytes[12];
  *((_OWORD *)this + 10) = *(_OWORD *)&dwBytes[28];
  if ( *(_DWORD *)&dwBytes[8] )
  {
    if ( *(_DWORD *)&dwBytes[8] > a5 || *(unsigned int *)&dwBytes[8] != 24 * (*(unsigned int *)&dwBytes[8] / 0x18uLL) )
    {
      v12 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF6Cu);
      goto LABEL_24;
    }
    v16 = (void **)((char *)this + 136);
    v12 = 0;
    if ( this == (CLinearGradientLegacyMilBrush *)-136LL )
    {
      v12 = -2147024809;
    }
    else
    {
      v17 = HeapAlloc(WPF::g_processHeap, 0, *(unsigned int *)&dwBytes[8]);
      *v16 = v17;
      if ( !v17 )
        v12 = -2147024882;
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xF74u);
      goto LABEL_24;
    }
    memcpy_0(*v16, a4, *((unsigned int *)this + 33));
  }
  v18 = CLinearGradientLegacyMilBrush::RegisterNotifiers(this, v14);
  v12 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF7Fu);
    goto LABEL_24;
  }
LABEL_25:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
