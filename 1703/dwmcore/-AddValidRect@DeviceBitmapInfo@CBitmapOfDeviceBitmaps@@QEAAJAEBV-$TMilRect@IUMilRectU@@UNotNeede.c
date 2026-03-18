/*
 * XREFs of ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180056AA0
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2510 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(
        __int64 a1,
        const RECT *a2,
        HRGN *a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx
  unsigned __int32 v9; // r8d
  unsigned __int32 v10; // ebp
  unsigned __int32 v11; // r9d
  unsigned int v12; // r11d
  bool v13; // cc
  bool v14; // cf
  unsigned int right; // ecx
  RECT *v16; // rbp
  unsigned int bottom; // r8d
  unsigned int top; // edx
  __int64 v20; // rcx
  HRGN v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  HRGN RectRgnIndirect; // rax
  __int64 v30; // rdx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  int v35; // r10d
  unsigned int v36; // r11d
  signed int LastError; // eax
  unsigned int v38; // [rsp+20h] [rbp-38h]
  __m128i v39; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a1 + 4) == DisplayId::None )
  {
    v39 = *(__m128i *)a2;
    v9 = v39.m128i_u32[1];
    v10 = v39.m128i_u32[2];
    v11 = v39.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v39);
    if ( *(_DWORD *)(a1 + 56) > v12 )
      v12 = *(_DWORD *)(a1 + 56);
    v13 = *(_DWORD *)(a1 + 60) <= v39.m128i_i32[1];
    v39.m128i_i32[0] = v12;
    if ( !v13 )
      v9 = *(_DWORD *)(a1 + 60);
    v14 = *(_DWORD *)(a1 + 64) < v39.m128i_i32[2];
    v39.m128i_i32[1] = v9;
    if ( v14 )
      v10 = *(_DWORD *)(a1 + 64);
    v14 = *(_DWORD *)(a1 + 68) < v39.m128i_i32[3];
    v39.m128i_i32[2] = v10;
    if ( v14 )
      v11 = *(_DWORD *)(a1 + 68);
    v39.m128i_i32[3] = v11;
    if ( v10 > v12 && v11 > v9 )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v39);
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v30) )
      {
        if ( v35 )
        {
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)v32 = 0LL;
        }
        else
        {
          *(__m128i *)v32 = v39;
        }
      }
      else if ( !v35 )
      {
        if ( v36 < *(_DWORD *)v32 )
          *(_DWORD *)v32 = v36;
        if ( v33 < *(_DWORD *)(v32 + 4) )
          *(_DWORD *)(v32 + 4) = v33;
        if ( v10 > *(_DWORD *)(v32 + 8) )
          *(_DWORD *)(v32 + 8) = v10;
        if ( v34 > *(_DWORD *)(v32 + 12) )
          *(_DWORD *)(v32 + 12) = v34;
      }
    }
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    right = a2->right;
    v16 = (RECT *)(a1 + 24);
    if ( right > a2->left
      && (bottom = a2->bottom, top = a2->top, bottom > top)
      && (a2->left < (unsigned int)v16->left
       || top < *(_DWORD *)(a1 + 28)
       || right > *(_DWORD *)(a1 + 32)
       || bottom > *(_DWORD *)(a1 + 36)) )
    {
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(a2, a1 + 24) )
      {
        *v16 = *a2;
      }
      else
      {
        SetLastError(0);
        RectRgnIndirect = CreateRectRgnIndirect((const RECT *)(a1 + 24));
        *(_QWORD *)(a1 + 40) = RectRgnIndirect;
        if ( !RectRgnIndirect )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v38 = 1886;
          goto LABEL_62;
        }
      }
    }
    else
    {
      *a4 = 1;
    }
    if ( !*(_QWORD *)(a1 + 40) )
    {
LABEL_21:
      if ( !*a4 )
      {
        v20 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 88) = 1;
        *(_OWORD *)(v20 + 172) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v20 + 188) = *(_OWORD *)(a1 + 24);
      }
      return v4;
    }
  }
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( *a3 || (SetLastError(0), v21 = CreateRectRgnIndirect(a2), (*a3 = v21) != 0LL) )
  {
    SetLastError(0);
    if ( CombineRgn(*(HRGN *)(a1 + 40), *(HRGN *)(a1 + 40), *a3, 2) )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v22) )
      {
        if ( v24 )
        {
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)v23 = 0LL;
        }
        else
        {
          *(RECT *)v23 = *a2;
        }
      }
      else if ( !v24 )
      {
        if ( a2->left < *(_DWORD *)v23 )
          *(_DWORD *)v23 = a2->left;
        v26 = a2->top;
        if ( v26 < *(_DWORD *)(v23 + 4) )
          *(_DWORD *)(v23 + 4) = v26;
        v27 = a2->right;
        if ( v27 > *(_DWORD *)(v23 + 8) )
          *(_DWORD *)(v23 + 8) = v27;
        v28 = a2->bottom;
        if ( v28 > *(_DWORD *)(v23 + 12) )
          *(_DWORD *)(v23 + 12) = v28;
      }
      if ( v25 == 2 )
      {
        DeleteObject(*(HGDIOBJ *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      goto LABEL_21;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v38 = 1914;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v38 = 1908;
  }
LABEL_62:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v4 = LastError;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, v38);
  return v4;
}
