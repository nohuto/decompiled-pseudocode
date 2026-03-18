/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18012EE54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180174F80 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v7; // esi
  unsigned int v8; // eax
  void **v9; // r14
  int v10; // ebx
  LPVOID v11; // rax
  __int64 v12; // rax
  void **v13; // r14
  LPVOID v14; // rax
  int v15; // r9d
  __int64 v16; // rax
  void **v17; // r14
  LPVOID v18; // rax
  __int64 v19; // rax
  void **v20; // rsi
  LPVOID v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v28; // [rsp+20h] [rbp-58h]
  __m128i v29; // [rsp+30h] [rbp-48h]
  __m128i v30; // [rsp+40h] [rbp-38h]
  SIZE_T dwBytes_4; // [rsp+50h] [rbp-28h]

  v29 = *a3;
  dwBytes_4 = a3[1].m128i_u64[0];
  v30 = *a3;
  CMeshGeometry2D::UnRegisterNotifiers(this);
  v7 = a5;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v29, 8));
  *((_DWORD *)this + 28) = v8;
  if ( v8 )
  {
    if ( v8 > a5 || v8 != 12 * (v8 / 0xCuLL) )
    {
      v28 = 219;
LABEL_56:
      v15 = -2003303421;
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
      v28 = 227;
LABEL_17:
      v15 = v10;
LABEL_57:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v28);
      CMeshGeometry2D::UnRegisterNotifiers(this);
      goto LABEL_52;
    }
    memcpy_0(*v9, a4, *((unsigned int *)this + 28));
    v12 = *((unsigned int *)this + 28);
    v7 = a5 - v12;
    a4 += v12;
  }
  *((_DWORD *)this + 32) = v30.m128i_i32[3];
  if ( !v30.m128i_i32[3] )
    goto LABEL_22;
  if ( v30.m128i_i32[3] > v7 || (v30.m128i_i8[12] & 0xF) != 0 )
  {
    v28 = 252;
    goto LABEL_56;
  }
  v13 = (void **)((char *)this + 136);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-136LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v14 = HeapAlloc(WPF::g_processHeap, 0, v30.m128i_u32[3]);
    *v13 = v14;
    if ( !v14 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v28 = 260;
    goto LABEL_17;
  }
  memcpy_0(*v13, a4, *((unsigned int *)this + 32));
  v16 = *((unsigned int *)this + 32);
  v7 -= v16;
  a4 += v16;
LABEL_22:
  *((_DWORD *)this + 36) = dwBytes_4;
  if ( !(_DWORD)dwBytes_4 )
    goto LABEL_33;
  if ( (unsigned int)dwBytes_4 > v7 || (dwBytes_4 & 3) != 0 )
  {
    v28 = 285;
    goto LABEL_56;
  }
  v17 = (void **)((char *)this + 152);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-152LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v18 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)dwBytes_4);
    *v17 = v18;
    if ( !v18 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v28 = 293;
    goto LABEL_17;
  }
  memcpy_0(*v17, a4, *((unsigned int *)this + 36));
  v19 = *((unsigned int *)this + 36);
  v7 -= v19;
  a4 += v19;
LABEL_33:
  *((_DWORD *)this + 40) = HIDWORD(dwBytes_4);
  if ( !HIDWORD(dwBytes_4) )
    goto LABEL_44;
  if ( HIDWORD(dwBytes_4) > v7 || (dwBytes_4 & 0x300000000LL) != 0 )
  {
    v28 = 318;
    goto LABEL_56;
  }
  v20 = (void **)((char *)this + 168);
  v10 = 0;
  if ( this == (CMeshGeometry2D *)-168LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v21 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes_4));
    *v20 = v21;
    if ( !v21 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v28 = 326;
    goto LABEL_17;
  }
  memcpy_0(*v20, a4, *((unsigned int *)this + 40));
LABEL_44:
  v22 = *((_DWORD *)this + 36) >> 2;
  v23 = *((_DWORD *)this + 32) >> 4;
  if ( *((_DWORD *)this + 28) / 0xCu < v22 )
    v22 = *((_DWORD *)this + 28) / 0xCu;
  if ( v22 < v23 )
    v23 = v22;
  v24 = (unsigned int *)*((_QWORD *)this + 21);
  v25 = *((_DWORD *)this + 40) >> 2;
  v26 = 0;
  if ( v25 )
  {
    while ( *v24 < v23 )
    {
      ++v26;
      ++v24;
      if ( v26 >= v25 )
        goto LABEL_51;
    }
    v28 = 356;
    goto LABEL_56;
  }
LABEL_51:
  v10 = 0;
LABEL_52:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
