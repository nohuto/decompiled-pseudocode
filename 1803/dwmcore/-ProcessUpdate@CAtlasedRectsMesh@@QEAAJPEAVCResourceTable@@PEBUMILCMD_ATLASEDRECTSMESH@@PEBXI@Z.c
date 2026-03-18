/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800B57BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800B56B0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        CAtlasedRectsMesh *this,
        struct CResourceTable *a2,
        __m128i *a3,
        char *a4,
        unsigned int a5)
{
  SIZE_T v7; // r15
  unsigned int v8; // edi
  void **v9; // r13
  int v10; // ebx
  LPVOID v11; // rax
  void **v12; // r13
  LPVOID v13; // rax
  void **v14; // rbp
  LPVOID v15; // rax
  unsigned int v17; // eax
  __m128i v18; // [rsp+30h] [rbp-58h]
  SIZE_T dwBytes; // [rsp+50h] [rbp-38h]

  v18 = *a3;
  v7 = a3[1].m128i_u32[2];
  dwBytes = a3[1].m128i_u64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v8 = a5;
  *((_DWORD *)this + 14) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  *((_DWORD *)this + 15) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  if ( (_DWORD)dwBytes )
  {
    if ( (unsigned int)dwBytes > a5 || (dwBytes & 0xF) != 0 )
    {
      v17 = 214;
      goto LABEL_36;
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
      v17 = 220;
      goto LABEL_37;
    }
    memcpy_0(*v9, a4, (unsigned int)dwBytes);
    v8 = a5 - dwBytes;
    *((_DWORD *)this + 16) = dwBytes;
    a4 += (unsigned int)dwBytes;
  }
  if ( HIDWORD(dwBytes) )
  {
    if ( HIDWORD(dwBytes) > v8 || (dwBytes & 0xF00000000LL) != 0 )
    {
      v17 = 240;
      goto LABEL_36;
    }
    v12 = (void **)((char *)this + 88);
    v10 = 0;
    if ( this == (CAtlasedRectsMesh *)-88LL )
    {
      v10 = -2147024809;
    }
    else
    {
      v13 = HeapAlloc(WPF::g_processHeap, 0, HIDWORD(dwBytes));
      *v12 = v13;
      if ( !v13 )
        v10 = -2147024882;
    }
    if ( v10 < 0 )
    {
      v17 = 246;
      goto LABEL_37;
    }
    memcpy_0(*v12, a4, HIDWORD(dwBytes));
    v8 -= HIDWORD(dwBytes);
    *((_DWORD *)this + 20) = HIDWORD(dwBytes);
    a4 += HIDWORD(dwBytes);
  }
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)v7 <= v8 && (v7 & 3) == 0 )
    {
      v14 = (void **)((char *)this + 104);
      v10 = 0;
      if ( this == (CAtlasedRectsMesh *)-104LL )
      {
        v10 = -2147024809;
      }
      else
      {
        v15 = HeapAlloc(WPF::g_processHeap, 0, v7);
        *v14 = v15;
        if ( !v15 )
          v10 = -2147024882;
      }
      if ( v10 >= 0 )
      {
        memcpy_0(*v14, a4, v7);
        *((_DWORD *)this + 24) = v7;
        goto LABEL_25;
      }
      v17 = 272;
LABEL_37:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v17);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_26;
    }
    v17 = 266;
LABEL_36:
    v10 = -2003303421;
    goto LABEL_37;
  }
LABEL_25:
  v10 = 0;
LABEL_26:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
