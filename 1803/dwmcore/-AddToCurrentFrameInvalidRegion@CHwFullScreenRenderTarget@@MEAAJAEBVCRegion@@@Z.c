/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180046B40 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1801F31D0 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180078E78 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007EF50 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007FB30 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800804F4 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  FastRegion::CRegion *v3; // rsi
  const struct FastRegion::Internal::CRgnData *v6; // rbx
  int v7; // eax
  SIZE_T v8; // r8
  FastRegion::Internal::CRgnData *v9; // rcx
  void *v10; // r15
  int v11; // edi
  const struct FastRegion::Internal::CRgnData **v12; // rbx
  const struct FastRegion::Internal::CRgnData *v13; // rbx
  const struct FastRegion::Internal::CRgnData **v14; // rsi
  int v15; // r9d
  const struct FastRegion::Internal::CRgnData *v16; // r8
  int *v17; // r14
  int v18; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // esi
  _DWORD *v22; // r9
  __int64 v23; // r10
  _DWORD *v24; // rdi
  __int64 v25; // rax
  char *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r10
  int v31; // eax
  int v32; // eax
  FastRegion::Internal::CRgnData *v33; // rax
  int v34; // ebx
  SIZE_T v35; // r8
  const struct FastRegion::Internal::CRgnData *v36; // r15
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+38h] [rbp-C8h]
  _BYTE v39[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a2;
  v3 = (CHwFullScreenRenderTarget *)((char *)this + 424);
  if ( !*(_DWORD *)*a2 )
    goto LABEL_9;
  v6 = *(const struct FastRegion::Internal::CRgnData **)v3;
  if ( !**(_DWORD **)v3 )
    goto LABEL_9;
  v7 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*(const struct FastRegion::Internal::CRgnData **)v3, v2);
  v8 = v7;
  v9 = (FastRegion::Internal::CRgnData *)v39;
  lpMem = v39;
  v37 = v7;
  if ( (unsigned __int64)v7 > 0x100 )
  {
    if ( !v7 )
      v8 = 1LL;
    v33 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v8);
    v9 = v33;
    if ( !v33 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v37);
      v11 = -2147024882;
LABEL_44:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2A6u);
      return (unsigned int)v11;
    }
    v2 = *a2;
    v6 = *(const struct FastRegion::Internal::CRgnData **)v3;
    lpMem = v33;
  }
  FastRegion::Internal::CRgnData::Subtract(v9, v6, v2);
  v10 = lpMem;
  v11 = 0;
  if ( *(_DWORD *)lpMem )
  {
    if ( v39 == lpMem )
    {
      v11 = FastRegion::CRegion::CopyData(v3, (const struct FastRegion::Internal::CRgnData *)lpMem);
    }
    else
    {
      v34 = v37;
      v37 = 0;
      lpMem = v39;
      FastRegion::CRegion::FreeMemory(v3);
      *(_QWORD *)v3 = v10;
      *((_DWORD *)v3 + 2) = v34;
    }
  }
  else
  {
    **(_DWORD **)v3 = 0;
  }
  if ( v39 != lpMem )
    operator delete(lpMem);
  if ( v11 < 0 )
    goto LABEL_44;
LABEL_9:
  if ( *((_DWORD *)this + 74) == 3 )
  {
    v12 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 496);
    if ( *(_DWORD *)*a2 )
    {
      if ( *(_DWORD *)*v12 )
      {
        v31 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*v12, *a2);
        v37 = 0;
        lpMem = v39;
        v11 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v37, v31);
        if ( v11 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v37);
        }
        else
        {
          FastRegion::Internal::CRgnData::Subtract((FastRegion::Internal::CRgnData *)lpMem, *v12, *a2);
          v11 = FastRegion::CRegion::SaveResult(
                  (CHwFullScreenRenderTarget *)((char *)this + 496),
                  (struct FastRegion::Internal::CWorkBuffer *)&v37);
          if ( v39 != lpMem )
            operator delete(lpMem);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2ABu);
          return (unsigned int)v11;
        }
      }
    }
  }
  v13 = *a2;
  v14 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 344);
  v15 = *(_DWORD *)*a2;
  if ( !v15 )
    return 0;
  v16 = *v14;
  if ( *(_DWORD *)*v14 )
  {
    v32 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v14, *a2);
    v37 = 0;
    lpMem = v39;
    v11 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v37, v32);
    if ( v11 < 0 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v37);
    }
    else
    {
      FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *v14, *a2);
      v11 = FastRegion::CRegion::SaveResult(
              (CHwFullScreenRenderTarget *)((char *)this + 344),
              (struct FastRegion::Internal::CWorkBuffer *)&v37);
      if ( v39 != lpMem )
        operator delete(lpMem);
    }
    goto LABEL_25;
  }
  if ( v14 == a2 )
    goto LABEL_24;
  v17 = (int *)((char *)this + 352);
  v18 = 60;
  v19 = *((_DWORD *)v13 + 2 * v15 + 2) + 8 * v15 - *((_DWORD *)v13 + 4) + 8 * (v15 - 1) + 12;
  if ( (CHwFullScreenRenderTarget *)((char *)this + 352) != v16 )
    v18 = *v17;
  if ( v18 >= v19 )
  {
LABEL_18:
    v20 = *(_DWORD *)v13;
    v21 = 0;
    *(_DWORD *)v16 = *(_DWORD *)v13;
    *((_DWORD *)v16 + 1) = *((_DWORD *)v13 + 1);
    *((_DWORD *)v16 + 2) = *((_DWORD *)v13 + 2);
    v22 = (_DWORD *)((char *)v16 + 8 * v20 + 12);
    v23 = (__int64)v13 + *((int *)v13 + 4) + 12;
    if ( v20 > 0 )
    {
      v24 = (_DWORD *)((char *)v16 + 12);
      do
      {
        *v24 = *(_DWORD *)((char *)v24 + v13 - v16);
        v24 += 2;
        v25 = v21++;
        *((_DWORD *)v16 + 2 * v25 + 4) = 4 * (((__int64)v22 - v23) >> 2)
                                       + (_DWORD)v13
                                       + 8 * v25
                                       + *((_DWORD *)v13 + 2 * v25 + 4)
                                       - ((_DWORD)v16
                                        + 8 * v25);
      }
      while ( v21 < *(_DWORD *)v16 );
    }
    v26 = (char *)v13 + 8 * *(_DWORD *)v13 - 8;
    v27 = (unsigned __int64)((int)v26 + *((_DWORD *)v26 + 4) - (int)v13 - *((_DWORD *)v13 + 4)) >> 2;
    v28 = (int)v27;
    if ( (int)v27 > 0 )
    {
      v29 = v23 - (_QWORD)v22;
      do
      {
        *v22 = *(_DWORD *)((char *)v22 + v29);
        ++v22;
        --v28;
      }
      while ( v28 );
    }
LABEL_24:
    v11 = 0;
    goto LABEL_25;
  }
  v35 = v19;
  if ( !v19 )
    v35 = 1LL;
  v36 = (const struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v35);
  if ( v36 )
  {
    FastRegion::CRegion::FreeMemory((CHwFullScreenRenderTarget *)((char *)this + 344));
    *v14 = v36;
    *v17 = v19;
    v16 = *v14;
    goto LABEL_18;
  }
  v11 = -2147024882;
LABEL_25:
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x358u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2B0u);
  }
  return (unsigned int)v11;
}
