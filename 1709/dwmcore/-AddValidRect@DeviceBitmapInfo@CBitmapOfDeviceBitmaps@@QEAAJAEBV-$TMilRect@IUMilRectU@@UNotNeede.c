/*
 * XREFs of ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180086B78
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEC4 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(
        __int64 a1,
        const RECT *a2,
        HRGN *a3,
        _BYTE *a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // edx
  __int32 v10; // r8d
  __int32 v11; // r10d
  __int32 v12; // r9d
  bool v13; // cf
  __int64 v14; // rcx
  unsigned __int32 v16; // edx
  __m128i *v17; // rcx
  unsigned __int32 v18; // r8d
  unsigned __int32 v19; // r9d
  unsigned __int32 v20; // r10d
  HRGN RectRgnIndirect; // rax
  int LastError; // eax
  HRGN v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // r9d
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int bottom; // eax
  unsigned int v31; // [rsp+20h] [rbp-38h]
  __m128i v32; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a1 + 4) == DisplayId::None )
  {
    v32 = *(__m128i *)a2;
    v9 = _mm_cvtsi128_si32(v32);
    if ( *(_DWORD *)(a1 + 56) > v9 )
      v9 = *(_DWORD *)(a1 + 56);
    v32.m128i_i32[0] = v9;
    v10 = v32.m128i_i32[1];
    v11 = v32.m128i_i32[2];
    if ( *(_DWORD *)(a1 + 60) > v32.m128i_i32[1] )
      v10 = *(_DWORD *)(a1 + 60);
    v12 = v32.m128i_i32[3];
    if ( *(_DWORD *)(a1 + 64) < v32.m128i_i32[2] )
      v11 = *(_DWORD *)(a1 + 64);
    v13 = *(_DWORD *)(a1 + 68) < v32.m128i_i32[3];
    v32.m128i_i32[1] = v10;
    if ( v13 )
      v12 = *(_DWORD *)(a1 + 68);
    v32.m128i_i64[1] = __PAIR64__(v12, v11);
    if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v32) )
    {
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a1 + 72) )
      {
        *v17 = v32;
      }
      else
      {
        if ( v16 < v17->m128i_i32[0] )
          v17->m128i_i32[0] = v16;
        if ( v18 < v17->m128i_i32[1] )
          v17->m128i_i32[1] = v18;
        if ( v20 > v17->m128i_i32[2] )
          v17->m128i_i32[2] = v20;
        if ( v19 > v17->m128i_i32[3] )
          v17->m128i_i32[3] = v19;
      }
    }
    *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !*(_QWORD *)(a1 + 40) )
  {
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 24) )
    {
      *a4 = 1;
    }
    else if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(a2) )
    {
      *(RECT *)(a1 + 24) = *a2;
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
        v31 = 1819;
        goto LABEL_36;
      }
    }
    if ( !*(_QWORD *)(a1 + 40) )
    {
LABEL_17:
      if ( !*a4 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 88) = 1;
        *(_OWORD *)(v14 + 180) = *(_OWORD *)(a1 + 24);
        *(_OWORD *)(v14 + 196) = *(_OWORD *)(a1 + 24);
      }
      return v4;
    }
  }
  WPF::ProcessHeapImpl::Free(*(void **)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( *a3 || (SetLastError(0), v23 = CreateRectRgnIndirect(a2), (*a3 = v23) != 0LL) )
  {
    SetLastError(0);
    if ( CombineRgn(*(HRGN *)(a1 + 40), *(HRGN *)(a1 + 40), *a3, 2) )
    {
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v24) )
      {
        if ( v26 )
        {
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)v25 = 0LL;
        }
        else
        {
          *(RECT *)v25 = *a2;
        }
      }
      else if ( !v26 )
      {
        if ( a2->left < *(_DWORD *)v25 )
          *(_DWORD *)v25 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v25 + 4) )
          *(_DWORD *)(v25 + 4) = top;
        right = a2->right;
        if ( right > *(_DWORD *)(v25 + 8) )
          *(_DWORD *)(v25 + 8) = right;
        bottom = a2->bottom;
        if ( bottom > *(_DWORD *)(v25 + 12) )
          *(_DWORD *)(v25 + 12) = bottom;
      }
      if ( v27 == 2 )
      {
        DeleteObject(*(HGDIOBJ *)(a1 + 40));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      goto LABEL_17;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v31 = 1847;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v31 = 1841;
  }
LABEL_36:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v4 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastError, v31);
  return v4;
}
