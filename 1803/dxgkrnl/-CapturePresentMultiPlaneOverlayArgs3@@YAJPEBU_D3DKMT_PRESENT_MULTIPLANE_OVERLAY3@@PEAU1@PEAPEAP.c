/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0097ED0
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     _CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO @ 0x1C0097E44 (_CapturePresentMultiPlaneOverlayArgs3_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs3(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 ***a3,
        struct _D3DKMT_MULTIPLANE_OVERLAY3 **a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **a5,
        struct tagRECT ***a6,
        unsigned int **a7,
        unsigned int **a8,
        unsigned __int8 **a9,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **a10)
{
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  unsigned int v12; // r13d
  SIZE_T v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // edi
  SIZE_T v19; // rax
  SIZE_T v20; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v21; // r12
  SIZE_T v22; // rax
  struct tagRECT **v23; // rax
  size_t v24; // r14
  __int64 v25; // r15
  SIZE_T v26; // rax
  SIZE_T v27; // rax
  void *v28; // rsi
  unsigned int v29; // edi
  char *v30; // rbx
  const void *v31; // rdx
  _QWORD *v32; // r14
  const void *v33; // rdx
  char *v34; // rcx
  ULONG64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v38; // rsi
  unsigned int v39; // edi
  unsigned __int64 v40; // rdx
  __int64 v41; // r15
  unsigned __int64 pPlaneAttributes; // rdx
  __int64 v43; // rsi
  ULONG64 v44; // rcx
  __int64 v45; // r14
  _QWORD *v46; // rax
  SIZE_T v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  struct tagRECT *v52; // r9
  struct tagRECT **v53; // r14
  __int64 v54; // rbx
  size_t DirtyRectCount; // r8
  RECT *pDirtyRects; // rdx
  __int64 v57; // rcx
  __int64 AllocationCount; // rax
  __int64 v59; // rbx
  D3DKMT_HANDLE *pAllocationList; // rdx
  char *v61; // rcx
  unsigned int *v62; // r11
  unsigned int v63; // r8d
  struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v64; // r9
  _QWORD *v65; // r10
  D3DKMT_HANDLE **p_pAllocationList; // rdx
  _QWORD *v67; // rbx
  unsigned int v68; // [rsp+20h] [rbp-138h]
  __int128 v69; // [rsp+30h] [rbp-128h] BYREF
  __int128 v70; // [rsp+40h] [rbp-118h]
  void *v71[2]; // [rsp+50h] [rbp-108h]
  __int128 v72; // [rsp+60h] [rbp-F8h]
  unsigned int v73; // [rsp+70h] [rbp-E8h]
  int v74; // [rsp+80h] [rbp-D8h]
  char *v75; // [rsp+88h] [rbp-D0h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 *v76; // [rsp+90h] [rbp-C8h]
  void *v77; // [rsp+98h] [rbp-C0h]
  void *v78; // [rsp+A0h] [rbp-B8h]
  struct tagRECT **v79; // [rsp+A8h] [rbp-B0h]
  void *v80[2]; // [rsp+B0h] [rbp-A8h]
  __m128i v81; // [rsp+C0h] [rbp-98h]
  void *Src[2]; // [rsp+D0h] [rbp-88h]
  __m128i v83; // [rsp+E0h] [rbp-78h]
  void *pHDRMetaData; // [rsp+F0h] [rbp-68h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)MmUserProbeAddress;
  *(_OWORD *)v80 = *(_OWORD *)&a1->hAdapter;
  v81 = *(__m128i *)&a1->VidPnSourceId;
  v10 = v81;
  *(_OWORD *)Src = *(_OWORD *)&a1->ppPresentPlanes;
  v11 = *(__m128i *)&a1->Duration;
  v83 = v11;
  pHDRMetaData = (void *)a1->pHDRMetaData;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v81, 12));
  if ( v12 - 1 > 9 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v67[3] = v12;
    v18 = -1073741811;
    v67[4] = -1073741811LL;
    v67[5] = PsGetCurrentProcess();
    goto LABEL_79;
  }
  v68 = HIDWORD(v80[0]);
  if ( (unsigned int)(HIDWORD(v80[0]) - 1) > 0x3F )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v18 = -1073741811;
    v67[3] = -1073741811LL;
    v67[4] = PsGetCurrentProcess();
LABEL_79:
    WdLogEvent5_WdError(v67);
    return v18;
  }
  *((_QWORD *)&v69 + 1) = 0LL;
  v70 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v72 = 0LL;
  v73 = v12;
  v13 = 8LL * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v13 = -1LL;
  v77 = operator new[](v13, 0x4B677844u, PagedPool);
  *(_QWORD *)&v69 = v77;
  if ( !v77 )
    goto LABEL_8;
  v19 = 56LL * v12;
  if ( !is_mul_ok(v12, 0x38uLL) )
    v19 = -1LL;
  v76 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 *)operator new[](v19, 0x4B677844u, PagedPool);
  *((_QWORD *)&v69 + 1) = v76;
  if ( !v76 )
    goto LABEL_8;
  v20 = 88LL * v12;
  if ( !is_mul_ok(v12, 0x58uLL) )
    v20 = -1LL;
  v21 = (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)operator new[](v20, 0x4B677844u, PagedPool);
  *(_QWORD *)&v70 = v21;
  if ( !v21 )
    goto LABEL_8;
  v22 = 8LL * v12;
  if ( !is_mul_ok(v12, 8uLL) )
    v22 = -1LL;
  v23 = (struct tagRECT **)operator new[](v22, 0x4B677844u, PagedPool);
  v79 = v23;
  *(_QWORD *)&v72 = v23;
  if ( !v23 )
    goto LABEL_8;
  v24 = 8LL * v12;
  memset(v23, 0, v24);
  v25 = HIDWORD(v80[0]);
  v26 = 4LL * HIDWORD(v80[0]);
  if ( !is_mul_ok(HIDWORD(v80[0]), 4uLL) )
    v26 = -1LL;
  v78 = operator new[](v26, 0x4B677844u, PagedPool);
  *((_QWORD *)&v70 + 1) = v78;
  if ( !v78 )
    goto LABEL_8;
  v27 = 4LL * v12 * HIDWORD(v80[0]);
  if ( !is_mul_ok(v12 * HIDWORD(v80[0]), 4uLL) )
    v27 = -1LL;
  v75 = (char *)operator new[](v27, 0x4B677844u, PagedPool);
  v71[0] = v75;
  if ( !v75 )
    goto LABEL_8;
  v28 = pHDRMetaData;
  if ( pHDRMetaData )
  {
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
    if ( v29 )
    {
      v71[1] = operator new[](v29, 0x4B677844u, PagedPool);
      if ( !v71[1] )
        goto LABEL_8;
    }
  }
  else
  {
    v29 = v83.m128i_u32[2];
  }
  v30 = (char *)Src[1];
  if ( Src[1] )
  {
    *((_QWORD *)&v72 + 1) = operator new[](0x28uLL, 0x4B677844u, PagedPool);
    if ( !*((_QWORD *)&v72 + 1) )
    {
LABEL_8:
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      v18 = -1073741801;
      *(_QWORD *)(v17 + 24) = -1073741801LL;
      *(_QWORD *)(v17 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v17);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v69);
      return v18;
    }
  }
  v31 = Src[0];
  if ( (char *)Src[0] + v24 < Src[0] || (char *)Src[0] + v24 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  v32 = v77;
  memmove(v77, v31, 8LL * v12);
  v33 = v80[1];
  v34 = (char *)v80[1] + 4 * v25;
  if ( v34 < v80[1] || (unsigned __int64)v34 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v78, v33, 4 * v25);
  if ( v28 && v29 )
  {
    v35 = (ULONG64)v28 + v29;
    if ( v35 < (unsigned __int64)v28 || v35 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v71[1], v28, v29);
  }
  if ( v30 )
  {
    if ( v30 + 40 < v30 || (unsigned __int64)(v30 + 40) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v36 = *((_QWORD *)&v72 + 1);
    **((_OWORD **)&v72 + 1) = *(_OWORD *)v30;
    *(_OWORD *)(v36 + 16) = *((_OWORD *)v30 + 1);
    *(_QWORD *)(v36 + 32) = *((_QWORD *)v30 + 4);
  }
  v37 = 0LL;
  v38 = v76;
  v39 = v68;
  while ( 1 )
  {
    v74 = v37;
    if ( (unsigned int)v37 >= v12 )
      break;
    v40 = v32[v37];
    v41 = (unsigned int)v37;
    if ( v40 + 56 < v40 || v40 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&v38[v41].LayerIndex = *(_OWORD *)v40;
    *(_OWORD *)&v38[v41].AllocationCount = *(_OWORD *)(v40 + 16);
    *(_OWORD *)&v38[v41].DriverPrivateDataSize = *(_OWORD *)(v40 + 32);
    v38[v41].pPlaneAttributes = *(const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)(v40 + 48);
    pPlaneAttributes = (unsigned __int64)v38[v41].pPlaneAttributes;
    v43 = (unsigned int)v37;
    v44 = pPlaneAttributes + 88;
    if ( pPlaneAttributes + 88 < pPlaneAttributes || v44 > MmUserProbeAddress )
    {
      v44 = MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    *(_OWORD *)&v21[v43].Flags = *(_OWORD *)pPlaneAttributes;
    *(_OWORD *)&v21[v43].SrcRect.bottom = *(_OWORD *)(pPlaneAttributes + 16);
    *(_OWORD *)&v21[v43].DstRect.bottom = *(_OWORD *)(pPlaneAttributes + 32);
    *(_OWORD *)&v21[v43].ClipRect.bottom = *(_OWORD *)(pPlaneAttributes + 48);
    *(_OWORD *)&v21[v43].pDirtyRects = *(_OWORD *)(pPlaneAttributes + 64);
    *(_QWORD *)&v21[v43].SDRWhiteLevel = *(_QWORD *)(pPlaneAttributes + 80);
    v45 = (unsigned int)v37;
    if ( v21[v43].DirtyRectCount > 0xFFF )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v46[3] = v21[v45].DirtyRectCount;
      v46[4] = (unsigned int)v37;
      v46[5] = -1073741811LL;
      WdLogEvent5_WdError(v46);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v69);
      return 3221225485LL;
    }
    v48 = 16LL * v21[v45].DirtyRectCount;
    if ( !is_mul_ok(v21[v45].DirtyRectCount, 0x10uLL) )
      v48 = -1LL;
    v52 = (struct tagRECT *)operator new[](v48, 0x4B677844u, PagedPool);
    v53 = v79;
    v79[v37] = v52;
    if ( !v52 )
    {
      v54 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      *(_QWORD *)(v54 + 24) = -1073741801LL;
      *(_QWORD *)(v54 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v54);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v69);
      return 3221225495LL;
    }
    DirtyRectCount = v21[v43].DirtyRectCount;
    pDirtyRects = v21[v43].pDirtyRects;
    if ( &pDirtyRects[DirtyRectCount] < pDirtyRects
      || (unsigned __int64)&pDirtyRects[DirtyRectCount] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v52, pDirtyRects, DirtyRectCount * 16);
    v21[v43].pDirtyRects = v53[v37];
    v38 = v76;
    AllocationCount = v76[v41].AllocationCount;
    v39 = v68;
    if ( (unsigned int)AllocationCount > v68 )
    {
      v59 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v59 + 24) = -1073741811LL;
      *(_QWORD *)(v59 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdError(v59);
      CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v69);
      return 3221225485LL;
    }
    if ( (_DWORD)AllocationCount )
    {
      pAllocationList = v76[v41].pAllocationList;
      v61 = &v75[4 * v68 * (unsigned int)v37];
      if ( &pAllocationList[AllocationCount] < pAllocationList
        || (unsigned __int64)&pAllocationList[AllocationCount] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v61, pAllocationList, 4 * AllocationCount);
    }
    v37 = (unsigned int)(v37 + 1);
    v32 = v77;
  }
  Src[0] = v32;
  v62 = (unsigned int *)v78;
  v80[1] = v78;
  pHDRMetaData = v71[1];
  Src[1] = *((void **)&v72 + 1);
  v63 = 0;
  if ( v12 )
  {
    v64 = v21;
    v65 = v32;
    p_pAllocationList = &v38->pAllocationList;
    do
    {
      *v65 = p_pAllocationList - 3;
      p_pAllocationList[3] = &v64->Flags;
      *p_pAllocationList = (D3DKMT_HANDLE *)&v75[4 * v39 * v63++];
      ++v65;
      ++v64;
      p_pAllocationList += 7;
    }
    while ( v63 < v12 );
  }
  *(_OWORD *)&a2->hAdapter = *(_OWORD *)v80;
  *(__m128i *)&a2->VidPnSourceId = v10;
  *(_OWORD *)&a2->ppPresentPlanes = *(_OWORD *)Src;
  *(__m128i *)&a2->Duration = v11;
  a2->pHDRMetaData = pHDRMetaData;
  *a3 = (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)v32;
  *a4 = v38;
  *a5 = v21;
  *a6 = v79;
  *a7 = v62;
  *a8 = (unsigned int *)v75;
  *a9 = (unsigned __int8 *)v71[1];
  *a10 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)*((_QWORD *)&v72 + 1);
  v69 = 0LL;
  v70 = 0uLL;
  v72 = 0uLL;
  *(_OWORD *)v71 = 0LL;
  CapturePresentMultiPlaneOverlayArgs3_::_2_::_AUTO::__AUTO((__int64)&v69);
  return 0LL;
}
