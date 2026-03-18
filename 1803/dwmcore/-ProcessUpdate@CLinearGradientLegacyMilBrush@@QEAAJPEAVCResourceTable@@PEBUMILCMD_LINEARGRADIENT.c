/*
 * XREFs of ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1801AB27C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1801ABD60 (-RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1801AC260 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
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
  int v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // rax
  struct CResourceTable *v15; // rdx
  __int64 v16; // rax
  void **v17; // r15
  LPVOID v18; // rax
  _BYTE dwBytes[44]; // [rsp+58h] [rbp-11h]

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
    Resource = CResourceTable::GetResource((__int64)a2, v10, 0x2Fu);
    *((_QWORD *)this + 12) = Resource;
    if ( !Resource )
    {
      v12 = -2003303421;
      v13 = 1234;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
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
    v14 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[1], 0x8Eu);
    *((_QWORD *)this + 13) = v14;
    if ( !v14 )
    {
      v12 = -2003303421;
      v13 = 1253;
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v15 = (struct CResourceTable *)v9.m128i_u32[2];
  if ( v9.m128i_i32[2] )
  {
    v16 = CResourceTable::GetResource((__int64)a2, v9.m128i_u32[2], 0x8Eu);
    *((_QWORD *)this + 14) = v16;
    if ( !v16 )
    {
      v12 = -2003303421;
      v13 = 1271;
      goto LABEL_24;
    }
  }
  else
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 30) = v9.m128i_i32[3];
  *(_QWORD *)((char *)this + 124) = *(_QWORD *)dwBytes;
  *((_OWORD *)this + 9) = *(_OWORD *)&dwBytes[12];
  *((_OWORD *)this + 10) = *(_OWORD *)&dwBytes[28];
  if ( *(_DWORD *)&dwBytes[8] )
  {
    if ( *(_DWORD *)&dwBytes[8] > a5 || *(unsigned int *)&dwBytes[8] != 24 * (*(unsigned int *)&dwBytes[8] / 0x18uLL) )
    {
      v12 = -2003303421;
      v13 = 1294;
      goto LABEL_24;
    }
    v17 = (void **)((char *)this + 136);
    v12 = 0;
    if ( this == (CLinearGradientLegacyMilBrush *)-136LL )
    {
      v12 = -2147024809;
    }
    else
    {
      v18 = HeapAlloc(WPF::g_processHeap, 0, *(unsigned int *)&dwBytes[8]);
      *v17 = v18;
      if ( !v18 )
        v12 = -2147024882;
    }
    if ( v12 < 0 )
    {
      v13 = 1300;
      goto LABEL_24;
    }
    memcpy_0(*v17, a4, *(unsigned int *)&dwBytes[8]);
    *((_DWORD *)this + 33) = *(_DWORD *)&dwBytes[8];
  }
  v12 = CLinearGradientLegacyMilBrush::RegisterNotifiers(this, v15);
  if ( v12 < 0 )
  {
    v13 = 1312;
    goto LABEL_24;
  }
LABEL_25:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
