/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800C03DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800C02B0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  SIZE_T v7; // rbp
  unsigned int v8; // esi
  void **v9; // r15
  int v10; // ebx
  LPVOID v11; // rax
  __int64 v12; // rax
  void **v13; // r15
  LPVOID v14; // rax
  __int64 v15; // rax
  void **v16; // rsi
  LPVOID v17; // rax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-58h]
  __m128i v21; // [rsp+30h] [rbp-48h]
  SIZE_T dwBytes; // [rsp+50h] [rbp-28h]

  v21 = *a3;
  v7 = a3[1].m128i_u32[2];
  dwBytes = a3[1].m128i_u64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v8 = a5;
  *((_DWORD *)this + 16) = dwBytes;
  *((_DWORD *)this + 14) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 8));
  *((_DWORD *)this + 15) = _mm_cvtsi128_si32(_mm_srli_si128(v21, 12));
  if ( (_DWORD)dwBytes )
  {
    if ( (unsigned int)dwBytes > a5 || (dwBytes & 0xF) != 0 )
    {
      v20 = 561;
      goto LABEL_37;
    }
    v9 = (void **)((char *)this + 72);
    v10 = 0;
    if ( this == (CAtlasedRectsMesh *)-72LL )
    {
      v10 = -2147024809;
    }
    else
    {
      v11 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)dwBytes);
      *v9 = v11;
      if ( !v11 )
        v10 = -2147024882;
    }
    if ( v10 < 0 )
    {
      v20 = 569;
LABEL_31:
      v19 = v10;
LABEL_38:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v20);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_26;
    }
    memcpy_0(*v9, a4, *((unsigned int *)this + 16));
    v12 = *((unsigned int *)this + 16);
    v8 = a5 - v12;
    a4 += v12;
  }
  *((_DWORD *)this + 20) = HIDWORD(dwBytes);
  if ( !HIDWORD(dwBytes) )
    goto LABEL_17;
  if ( HIDWORD(dwBytes) > v8 || (dwBytes & 0xF00000000LL) != 0 )
  {
    v20 = 594;
    goto LABEL_37;
  }
  v13 = (void **)((char *)this + 88);
  v10 = 0;
  if ( this == (CAtlasedRectsMesh *)-88LL )
  {
    v10 = -2147024809;
  }
  else
  {
    v14 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes));
    *v13 = v14;
    if ( !v14 )
      v10 = -2147024882;
  }
  if ( v10 < 0 )
  {
    v20 = 602;
    goto LABEL_31;
  }
  memcpy_0(*v13, a4, *((unsigned int *)this + 20));
  v15 = *((unsigned int *)this + 20);
  v8 -= v15;
  a4 += v15;
LABEL_17:
  *((_DWORD *)this + 24) = v7;
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)v7 <= v8 && (v7 & 3) == 0 )
    {
      v16 = (void **)((char *)this + 104);
      v10 = 0;
      if ( this == (CAtlasedRectsMesh *)-104LL )
      {
        v10 = -2147024809;
      }
      else
      {
        v17 = HeapAlloc(WPF::g_processHeap, 0, v7);
        *v16 = v17;
        if ( !v17 )
          v10 = -2147024882;
      }
      if ( v10 >= 0 )
      {
        memcpy_0(*v16, a4, *((unsigned int *)this + 24));
        goto LABEL_25;
      }
      v20 = 635;
      goto LABEL_31;
    }
    v20 = 627;
LABEL_37:
    v19 = -2003303421;
    v10 = -2003303421;
    goto LABEL_38;
  }
LABEL_25:
  v10 = 0;
LABEL_26:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
