/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C140 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800302B0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18003099C (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180089974 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089AD4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089B2C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18011BDAC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  FastRegion::CRegion *v3; // rsi
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  int v6; // eax
  SIZE_T v7; // r8
  FastRegion::Internal::CRgnData *v8; // rcx
  void *v9; // r15
  int v10; // edi
  const struct FastRegion::Internal::CRgnData **v11; // rbx
  const struct FastRegion::Internal::CRgnData *v12; // rbx
  const struct FastRegion::Internal::CRgnData **v13; // rsi
  int *v14; // r14
  int v15; // eax
  int v16; // edi
  const struct FastRegion::Internal::CRgnData *v17; // r10
  int v18; // esi
  int v19; // ecx
  _DWORD *v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rdi
  __int64 v23; // rax
  char *v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  int v29; // eax
  int v30; // eax
  FastRegion::Internal::CRgnData *v31; // rax
  int v32; // ebx
  SIZE_T v33; // r8
  const struct FastRegion::Internal::CRgnData *v34; // r15
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+38h] [rbp-C8h]
  _BYTE v37[256]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (CHwFullScreenRenderTarget *)((char *)this + 400);
  v4 = *a2;
  if ( !*(_DWORD *)v4 || !**(_DWORD **)v3 )
    goto LABEL_9;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*(const struct FastRegion::Internal::CRgnData **)v3, v4);
  v7 = v6;
  v8 = (FastRegion::Internal::CRgnData *)v37;
  lpMem = v37;
  v35 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    if ( !v6 )
      v7 = 1LL;
    v31 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v7);
    v8 = v31;
    if ( !v31 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
      v10 = -2147024882;
LABEL_43:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x253u);
      return (unsigned int)v10;
    }
    lpMem = v31;
  }
  FastRegion::Internal::CRgnData::Subtract(v8, *(const struct FastRegion::Internal::CRgnData **)v3, *a2);
  v9 = lpMem;
  v10 = 0;
  if ( *(_DWORD *)lpMem )
  {
    if ( v37 == lpMem )
    {
      v10 = FastRegion::CRegion::CopyData(v3, (const struct FastRegion::Internal::CRgnData *)lpMem);
    }
    else
    {
      v32 = v35;
      v35 = 0;
      lpMem = v37;
      FastRegion::CRegion::FreeMemory(v3);
      *(_QWORD *)v3 = v9;
      *((_DWORD *)v3 + 2) = v32;
    }
  }
  else
  {
    **(_DWORD **)v3 = 0;
  }
  if ( v37 != lpMem )
    WPF::ProcessHeapImpl::Free(lpMem);
  if ( v10 < 0 )
    goto LABEL_43;
LABEL_9:
  if ( *((_DWORD *)this + 70) == 3 )
  {
    v11 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 472);
    if ( *(_DWORD *)*a2 )
    {
      if ( *(_DWORD *)*v11 )
      {
        v29 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*v11, *a2);
        v35 = 0;
        lpMem = v37;
        v10 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v35, v29);
        if ( v10 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
        }
        else
        {
          FastRegion::Internal::CRgnData::Subtract((FastRegion::Internal::CRgnData *)lpMem, *v11, *a2);
          v10 = FastRegion::CRegion::SaveResult(
                  (CHwFullScreenRenderTarget *)((char *)this + 472),
                  (struct FastRegion::Internal::CWorkBuffer *)&v35);
          if ( v37 != lpMem )
            WPF::ProcessHeapImpl::Free(lpMem);
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x258u);
          return (unsigned int)v10;
        }
      }
    }
  }
  v12 = *a2;
  v13 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 328);
  if ( !*(_DWORD *)*a2 )
    return 0;
  if ( *(_DWORD *)*v13 )
  {
    v30 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v13, *a2);
    v35 = 0;
    lpMem = v37;
    v10 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v35, v30);
    if ( v10 < 0 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
    }
    else
    {
      FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *v13, *a2);
      v10 = FastRegion::CRegion::SaveResult(
              (CHwFullScreenRenderTarget *)((char *)this + 328),
              (struct FastRegion::Internal::CWorkBuffer *)&v35);
      if ( v37 != lpMem )
        WPF::ProcessHeapImpl::Free(lpMem);
    }
    goto LABEL_25;
  }
  if ( v13 == a2 )
    goto LABEL_24;
  v14 = (int *)((char *)this + 336);
  v15 = 60;
  v16 = *((_DWORD *)v12 + 2 * *(_DWORD *)v12 + 2)
      + 8 * *(_DWORD *)v12
      - *((_DWORD *)v12 + 4)
      + 8 * (*(_DWORD *)v12 - 1)
      + 12;
  if ( (CHwFullScreenRenderTarget *)((char *)this + 336) != *v13 )
    v15 = *v14;
  if ( v15 >= v16 )
  {
LABEL_18:
    v17 = *v13;
    v18 = 0;
    v19 = *(_DWORD *)v12;
    *(_DWORD *)v17 = *(_DWORD *)v12;
    *((_DWORD *)v17 + 1) = *((_DWORD *)v12 + 1);
    *((_DWORD *)v17 + 2) = *((_DWORD *)v12 + 2);
    v20 = (_DWORD *)((char *)v17 + 8 * v19 + 12);
    v21 = (__int64)v12 + *((int *)v12 + 4) + 12;
    if ( v19 > 0 )
    {
      v22 = (_DWORD *)((char *)v17 + 12);
      do
      {
        *v22 = *(_DWORD *)((char *)v22 + v12 - v17);
        v22 += 2;
        v23 = v18++;
        *((_DWORD *)v17 + 2 * v23 + 4) = 4 * (((__int64)v20 - v21) >> 2)
                                       + (_DWORD)v12
                                       + 8 * v23
                                       + *((_DWORD *)v12 + 2 * v23 + 4)
                                       - ((_DWORD)v17
                                        + 8 * v23);
      }
      while ( v18 < *(_DWORD *)v17 );
    }
    v24 = (char *)v12 + 8 * *(_DWORD *)v12 - 8;
    v25 = (unsigned __int64)((int)v24 + *((_DWORD *)v24 + 4) - (int)v12 - *((_DWORD *)v12 + 4)) >> 2;
    v26 = (int)v25;
    if ( (int)v25 > 0 )
    {
      v27 = v21 - (_QWORD)v20;
      do
      {
        *v20 = *(_DWORD *)((char *)v20 + v27);
        ++v20;
        --v26;
      }
      while ( v26 );
    }
LABEL_24:
    v10 = 0;
    goto LABEL_25;
  }
  v33 = v16;
  if ( !v16 )
    v33 = 1LL;
  v34 = (const struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v33);
  if ( v34 )
  {
    FastRegion::CRegion::FreeMemory((CHwFullScreenRenderTarget *)((char *)this + 328));
    *v13 = v34;
    *v14 = v16;
    goto LABEL_18;
  }
  v10 = -2147024882;
LABEL_25:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x362u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x25Du);
  }
  return (unsigned int)v10;
}
