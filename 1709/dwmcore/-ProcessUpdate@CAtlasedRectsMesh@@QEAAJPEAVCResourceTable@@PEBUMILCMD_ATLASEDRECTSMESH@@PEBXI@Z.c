/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800B60F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800B5FA0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
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
  DWORD v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-68h]
  __m128i v19; // [rsp+30h] [rbp-58h]
  SIZE_T dwBytes; // [rsp+50h] [rbp-38h]

  v19 = *a3;
  v7 = a3[1].m128i_u32[2];
  dwBytes = a3[1].m128i_u64[0];
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  v8 = a5;
  *((_DWORD *)this + 14) = _mm_cvtsi128_si32(_mm_srli_si128(v19, 8));
  *((_DWORD *)this + 15) = _mm_cvtsi128_si32(_mm_srli_si128(v19, 12));
  if ( (_DWORD)dwBytes )
  {
    if ( (unsigned int)dwBytes > a5 || (dwBytes & 0xF) != 0 )
    {
      v18 = 211;
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
      v18 = 217;
LABEL_31:
      v17 = v10;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, v18);
      CAtlasedRectsMesh::UnRegisterNotifiers(this);
      goto LABEL_26;
    }
    memcpy_0(*v9, a4, (unsigned int)dwBytes);
    v8 = a5 - dwBytes;
    *((_DWORD *)this + 16) = dwBytes;
    a4 += (unsigned int)dwBytes;
  }
  if ( !HIDWORD(dwBytes) )
    goto LABEL_17;
  if ( HIDWORD(dwBytes) > v8 || (dwBytes & 0xF00000000LL) != 0 )
  {
    v18 = 237;
    goto LABEL_37;
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
    v18 = 243;
    goto LABEL_31;
  }
  memcpy_0(*v12, a4, HIDWORD(dwBytes));
  v8 -= HIDWORD(dwBytes);
  *((_DWORD *)this + 20) = HIDWORD(dwBytes);
  a4 += HIDWORD(dwBytes);
LABEL_17:
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
      v18 = 269;
      goto LABEL_31;
    }
    v18 = 263;
LABEL_37:
    v17 = -2003303421;
    v10 = -2003303421;
    goto LABEL_38;
  }
LABEL_25:
  v10 = 0;
LABEL_26:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
