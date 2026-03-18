/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18017B260
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x18017BFC0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  unsigned int v8; // ebp
  void **v9; // r12
  int v10; // ebx
  LPVOID v11; // rax
  void **v12; // r12
  LPVOID v13; // rax
  DWORD v14; // r9d
  void **v15; // r12
  LPVOID v16; // rax
  void **v17; // r15
  LPVOID v18; // rax
  unsigned int v19; // r8d
  unsigned int *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v24; // [rsp+20h] [rbp-58h]
  __m128i v25; // [rsp+30h] [rbp-48h]
  __m128i v26; // [rsp+40h] [rbp-38h]
  SIZE_T dwBytes_4; // [rsp+50h] [rbp-28h]

  v25 = *a3;
  dwBytes_4 = a3[1].m128i_u64[0];
  v26 = *a3;
  CMeshGeometry2D::UnRegisterNotifiers(this);
  v7 = a5;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 8));
  if ( v8 )
  {
    if ( v8 > a5 || v8 != 12 * (v8 / 0xCuLL) )
    {
      v24 = 1533;
LABEL_56:
      v14 = -2003303421;
      v10 = -2003303421;
      goto LABEL_57;
    }
    v9 = (void **)((char *)this + 120);
    v10 = 0;
    if ( this == (CMeshGeometry2D *)-120LL )
    {
      v10 = -2147024809;
    }
    else
    {
      v11 = HeapAlloc(WPF::g_processHeap, 0, v8);
      *v9 = v11;
      if ( !v11 )
        v10 = -2147024882;
    }
    if ( v10 < 0 )
    {
      v24 = 1539;
LABEL_17:
      v14 = v10;
LABEL_57:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v24);
      CMeshGeometry2D::UnRegisterNotifiers(this);
      goto LABEL_52;
    }
    memcpy_0(*v9, a4, v8);
    v7 = a5 - v8;
    *((_DWORD *)this + 28) = v8;
    a4 += v8;
  }
  if ( !v26.m128i_i32[3] )
    goto LABEL_22;
  if ( v26.m128i_i32[3] > v7 || (v26.m128i_i8[12] & 0xF) != 0 )
  {
    v24 = 1559;
    goto LABEL_56;
  }
  v12 = (void **)((char *)this + 136);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-136LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v13 = HeapAlloc(WPF::g_processHeap, 0, v26.m128i_u32[3]);
    *v12 = v13;
    if ( !v13 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v24 = 1565;
    goto LABEL_17;
  }
  memcpy_0(*v12, a4, v26.m128i_u32[3]);
  v7 -= v26.m128i_u32[3];
  *((_DWORD *)this + 32) = v26.m128i_i32[3];
  a4 += (unsigned int)v26.m128i_i32[3];
LABEL_22:
  if ( !(_DWORD)dwBytes_4 )
    goto LABEL_33;
  if ( (unsigned int)dwBytes_4 > v7 || (dwBytes_4 & 3) != 0 )
  {
    v24 = 1585;
    goto LABEL_56;
  }
  v15 = (void **)((char *)this + 152);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-152LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v16 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)dwBytes_4);
    *v15 = v16;
    if ( !v16 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v24 = 1591;
    goto LABEL_17;
  }
  memcpy_0(*v15, a4, (unsigned int)dwBytes_4);
  v7 -= dwBytes_4;
  *((_DWORD *)this + 36) = dwBytes_4;
  a4 += (unsigned int)dwBytes_4;
LABEL_33:
  if ( !HIDWORD(dwBytes_4) )
    goto LABEL_44;
  if ( HIDWORD(dwBytes_4) > v7 || (dwBytes_4 & 0x300000000LL) != 0 )
  {
    v24 = 1611;
    goto LABEL_56;
  }
  v17 = (void **)((char *)this + 168);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-168LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v18 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes_4));
    *v17 = v18;
    if ( !v18 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v24 = 1617;
    goto LABEL_17;
  }
  memcpy_0(*v17, a4, HIDWORD(dwBytes_4));
  *((_DWORD *)this + 40) = HIDWORD(dwBytes_4);
LABEL_44:
  v19 = *((_DWORD *)this + 32) >> 4;
  if ( v19 >= *((_DWORD *)this + 36) >> 2 )
    v19 = *((_DWORD *)this + 36) >> 2;
  v20 = (unsigned int *)*((_QWORD *)this + 21);
  if ( *((_DWORD *)this + 28) / 0xCu < v19 )
    v19 = *((_DWORD *)this + 28) / 0xCu;
  v21 = *((_DWORD *)this + 40) >> 2;
  v22 = 0;
  if ( v21 )
  {
    while ( *v20 < v19 )
    {
      ++v22;
      ++v20;
      if ( v22 >= v21 )
        goto LABEL_51;
    }
    v24 = 1649;
    goto LABEL_56;
  }
LABEL_51:
  v10 = 0;
LABEL_52:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
