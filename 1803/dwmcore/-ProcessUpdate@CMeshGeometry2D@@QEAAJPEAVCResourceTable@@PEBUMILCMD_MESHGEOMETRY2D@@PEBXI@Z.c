/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801AB5E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801AC2C0 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
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
  unsigned int v14; // eax
  void **v15; // r12
  LPVOID v16; // rax
  void **v17; // r15
  LPVOID v18; // rax
  unsigned int v19; // r8d
  unsigned int *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  __m128i v24; // [rsp+30h] [rbp-48h]
  __m128i v25; // [rsp+40h] [rbp-38h]
  SIZE_T dwBytes_4; // [rsp+50h] [rbp-28h]

  v24 = *a3;
  dwBytes_4 = a3[1].m128i_u64[0];
  v25 = *a3;
  CMeshGeometry2D::UnRegisterNotifiers(this);
  v7 = a5;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
  if ( v8 )
  {
    if ( v8 > a5 || v8 != 12 * (v8 / 0xCuLL) )
    {
      v14 = 1549;
LABEL_55:
      v10 = -2003303421;
      goto LABEL_56;
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
      v14 = 1555;
LABEL_56:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14);
      CMeshGeometry2D::UnRegisterNotifiers(this);
      goto LABEL_51;
    }
    memcpy_0(*v9, a4, v8);
    v7 = a5 - v8;
    *((_DWORD *)this + 28) = v8;
    a4 += v8;
  }
  if ( !v25.m128i_i32[3] )
    goto LABEL_21;
  if ( v25.m128i_i32[3] > v7 || (v25.m128i_i8[12] & 0xF) != 0 )
  {
    v14 = 1575;
    goto LABEL_55;
  }
  v12 = (void **)((char *)this + 136);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-136LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v13 = HeapAlloc(WPF::g_processHeap, 0, v25.m128i_u32[3]);
    *v12 = v13;
    if ( !v13 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v14 = 1581;
    goto LABEL_56;
  }
  memcpy_0(*v12, a4, v25.m128i_u32[3]);
  v7 -= v25.m128i_u32[3];
  *((_DWORD *)this + 32) = v25.m128i_i32[3];
  a4 += (unsigned int)v25.m128i_i32[3];
LABEL_21:
  if ( !(_DWORD)dwBytes_4 )
    goto LABEL_32;
  if ( (unsigned int)dwBytes_4 > v7 || (dwBytes_4 & 3) != 0 )
  {
    v14 = 1601;
    goto LABEL_55;
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
    v14 = 1607;
    goto LABEL_56;
  }
  memcpy_0(*v15, a4, (unsigned int)dwBytes_4);
  v7 -= dwBytes_4;
  *((_DWORD *)this + 36) = dwBytes_4;
  a4 += (unsigned int)dwBytes_4;
LABEL_32:
  if ( !HIDWORD(dwBytes_4) )
    goto LABEL_43;
  if ( HIDWORD(dwBytes_4) > v7 || (dwBytes_4 & 0x300000000LL) != 0 )
  {
    v14 = 1627;
    goto LABEL_55;
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
    v14 = 1633;
    goto LABEL_56;
  }
  memcpy_0(*v17, a4, HIDWORD(dwBytes_4));
  *((_DWORD *)this + 40) = HIDWORD(dwBytes_4);
LABEL_43:
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
        goto LABEL_50;
    }
    v14 = 1665;
    goto LABEL_55;
  }
LABEL_50:
  v10 = 0;
LABEL_51:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
