/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70
 * Callers:
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x18000B8A8 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180094C3C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18018F7B8 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x18007EE78 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AppendRects<tagRECT>(FastRegion::CRegion *this, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // r13d
  FastRegion::CRegion *v6; // r15
  unsigned int v7; // r12d
  int *v8; // rcx
  int v9; // r8d
  __int64 v10; // kr00_8
  __int64 v11; // rax
  _DWORD *v12; // rbx
  int *v13; // r14
  const struct FastRegion::Internal::CRgnData *v14; // rbx
  int v15; // r8d
  int v16; // r9d
  int v17; // r10d
  int v18; // eax
  SIZE_T v19; // r8
  FastRegion::Internal::CRgnData *v20; // rcx
  struct FastRegion::Internal::CRgnData *v21; // rdi
  int v22; // esi
  int *v23; // rbx
  int v24; // eax
  int v25; // esi
  int v26; // ecx
  int v27; // esi
  __int64 v28; // r9
  int *v29; // rax
  _DWORD *v30; // r11
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r9
  int *v35; // rbx
  const struct FastRegion::Internal::CRgnData *v36; // rdi
  int *v37; // r14
  int v38; // esi
  int v39; // eax
  int v40; // ecx
  int v41; // r11d
  __int64 v42; // r9
  _DWORD *v43; // r8
  _DWORD *v44; // r10
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  int v50; // eax
  SIZE_T v51; // r8
  FastRegion::Internal::CRgnData *v52; // rcx
  struct FastRegion::Internal::CRgnData *v53; // rdi
  int v54; // r8d
  __int64 v55; // rcx
  int *v56; // rsi
  int v57; // edx
  int v58; // eax
  FastRegion::Internal::CRgnData *v59; // rcx
  int v60; // ebx
  int v61; // eax
  SIZE_T v62; // r8
  SIZE_T v63; // r8
  LPVOID v64; // rdi
  SIZE_T v65; // r8
  LPVOID v66; // r14
  struct FastRegion::Internal::CRgnData *v67; // rax
  int v68; // ebx
  struct FastRegion::Internal::CRgnData *v69; // rax
  int v70; // ebx
  int v72; // [rsp+44h] [rbp-C4h]
  int v73; // [rsp+4Ch] [rbp-BCh]
  void *lpMem; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v77[18]; // [rsp+70h] [rbp-98h] BYREF
  void *v78; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v79[3]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v80[2]; // [rsp+CCh] [rbp-3Ch] BYREF
  _DWORD v81[13]; // [rsp+D4h] [rbp-34h] BYREF
  int v82; // [rsp+108h] [rbp+0h] BYREF
  struct FastRegion::Internal::CRgnData *v83; // [rsp+110h] [rbp+8h]
  _BYTE v84[256]; // [rsp+118h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = this;
  lpMem = v77;
  v77[0] = 0;
  if ( !a3 )
  {
LABEL_49:
    v22 = 0;
    goto LABEL_50;
  }
  while ( 1 )
  {
    v7 = v5 + 5;
    if ( v3 < v5 + 5 )
      v7 = v3;
    v8 = (int *)(v4 + 16LL * v5);
    v9 = *v8;
    v10 = *((_QWORD *)v8 + 1);
    v11 = HIDWORD(*(_QWORD *)v8);
    if ( *v8 >= (int)v10 || (int)v11 >= SHIDWORD(v10) )
    {
      *(_DWORD *)lpMem = 0;
    }
    else
    {
      v12 = lpMem;
      *(_DWORD *)lpMem = 2;
      v12[1] = v9;
      v12[2] = v10;
      v12[3] = v11;
      v12[4] = 16;
      v12[7] = v9;
      v12[8] = v10;
      v12[5] = HIDWORD(v10);
      v12[6] = 16;
    }
    if ( ++v5 < v7 )
    {
      v13 = (int *)(16LL * v5 + v4 + 8);
      while ( 1 )
      {
        v14 = (const struct FastRegion::Internal::CRgnData *)v79;
        v15 = *(v13 - 2);
        v16 = *v13;
        v72 = *(v13 - 1);
        v73 = v13[1];
        v78 = v79;
        if ( v15 >= v16 || v72 >= v73 )
        {
          v17 = 0;
        }
        else
        {
          v80[0] = v72;
          v79[1] = v15;
          v79[2] = v16;
          v81[2] = v15;
          v80[1] = (unsigned int)&v82 - 44 - (unsigned int)v80;
          v17 = 2;
          v81[3] = v16;
          v81[0] = v73;
          v81[1] = (unsigned int)&v82 - 44 - (unsigned int)v81 + 8;
        }
        v79[0] = v17;
        if ( v17 )
          break;
        v22 = 0;
LABEL_31:
        if ( v22 < 0 )
          goto LABEL_50;
        ++v5;
        v13 += 4;
        if ( v5 >= v7 )
        {
          v6 = this;
          goto LABEL_34;
        }
      }
      if ( *(_DWORD *)lpMem )
      {
        v18 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                (const struct FastRegion::Internal::CRgnData *)lpMem,
                (const struct FastRegion::Internal::CRgnData *)v79);
        v19 = v18;
        v20 = (FastRegion::Internal::CRgnData *)v84;
        v83 = (struct FastRegion::Internal::CRgnData *)v84;
        v82 = v18;
        if ( (unsigned __int64)v18 <= 0x100 )
          goto LABEL_15;
        if ( !v18 )
          v19 = 1LL;
        v69 = (struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v19);
        v20 = v69;
        if ( v69 )
        {
          v14 = (const struct FastRegion::Internal::CRgnData *)v78;
          v83 = v69;
LABEL_15:
          FastRegion::Internal::CRgnData::Union(v20, (const struct FastRegion::Internal::CRgnData *)lpMem, v14);
          v21 = v83;
          v22 = 0;
          if ( *(_DWORD *)v83 )
          {
            if ( v84 == (_BYTE *)v83 )
            {
              v23 = (int *)lpMem;
              v24 = v77[0];
              v25 = *((_DWORD *)v83 + 2 * *(_DWORD *)v83 + 2)
                  + 8 * *(_DWORD *)v83
                  - *((_DWORD *)v83 + 4)
                  + 8 * (*(_DWORD *)v83 - 1)
                  + 12;
              if ( v77 == lpMem )
                v24 = 60;
              if ( v24 >= v25 )
                goto LABEL_20;
              v62 = v25;
              if ( !v25 )
                v62 = 1LL;
              v23 = (int *)HeapAlloc(WPF::g_processHeap, 0, v62);
              if ( v23 )
              {
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
                lpMem = v23;
                v77[0] = v25;
LABEL_20:
                v26 = *(_DWORD *)v21;
                v27 = 0;
                *v23 = *(_DWORD *)v21;
                v23[1] = *((_DWORD *)v21 + 1);
                v23[2] = *((_DWORD *)v21 + 2);
                v28 = (__int64)v21 + *((int *)v21 + 4) + 12;
                v29 = &v23[2 * v26 + 3];
                if ( *v23 > 0 )
                {
                  v30 = v23 + 3;
                  do
                  {
                    *v30 = *(_DWORD *)((char *)v30 + v21 - (struct FastRegion::Internal::CRgnData *)v23);
                    v30 += 2;
                    v31 = v27++;
                    v23[2 * v31 + 4] = (_DWORD)v21
                                     + 8 * v31
                                     + 4 * (((__int64)v29 - v28) >> 2)
                                     + *((_DWORD *)v21 + 2 * v31 + 4)
                                     - ((_DWORD)v23
                                      + 8 * v31);
                  }
                  while ( v27 < *v23 );
                }
                v32 = (unsigned __int64)(8 * (*(_DWORD *)v21 - 1)
                                       + *((_DWORD *)v21 + 2 * *(_DWORD *)v21 + 2)
                                       - *((_DWORD *)v21 + 4)) >> 2;
                v33 = (int)v32;
                if ( (int)v32 > 0 )
                {
                  v34 = v28 - (_QWORD)v29;
                  do
                  {
                    *v29 = *(int *)((char *)v29 + v34);
                    ++v29;
                    --v33;
                  }
                  while ( v33 );
                }
                v22 = 0;
                goto LABEL_27;
              }
              v22 = -2147024882;
            }
            else
            {
              v70 = v82;
              v83 = (struct FastRegion::Internal::CRgnData *)v84;
              v82 = 0;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
              lpMem = v21;
              v77[0] = v70;
            }
          }
          else
          {
            *(_DWORD *)lpMem = 0;
          }
LABEL_27:
          if ( v84 != (_BYTE *)v83 )
            operator delete(v83);
          goto LABEL_29;
        }
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v82);
        v22 = -2147024882;
      }
      else
      {
        v22 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&lpMem, (const struct CRegion *)&v78);
      }
LABEL_29:
      if ( v79 != v78 )
        operator delete(v78);
      goto LABEL_31;
    }
LABEL_34:
    v35 = (int *)lpMem;
    if ( *(_DWORD *)lpMem )
      break;
LABEL_48:
    v3 = a3;
    if ( v5 >= a3 )
      goto LABEL_49;
    v4 = a2;
  }
  v36 = *(const struct FastRegion::Internal::CRgnData **)v6;
  if ( !**(_DWORD **)v6 )
  {
    if ( v6 == (FastRegion::CRegion *)&lpMem )
    {
LABEL_46:
      v22 = 0;
      goto LABEL_47;
    }
    v37 = (int *)((char *)v6 + 8);
    v38 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
        + 8 * *(_DWORD *)lpMem
        - *((_DWORD *)lpMem + 4)
        + 8 * (*(_DWORD *)lpMem - 1)
        + 12;
    if ( (FastRegion::CRegion *)((char *)v6 + 8) == v36 )
      v39 = 60;
    else
      v39 = *v37;
    if ( v39 >= v38 )
    {
LABEL_40:
      v40 = *v35;
      v41 = 0;
      *(_DWORD *)v36 = *v35;
      *((_DWORD *)v36 + 1) = v35[1];
      *((_DWORD *)v36 + 2) = v35[2];
      v42 = (__int64)v35 + v35[4] + 12;
      v43 = (_DWORD *)((char *)v36 + 8 * v40 + 12);
      if ( v40 > 0 )
      {
        v44 = (_DWORD *)((char *)v36 + 12);
        do
        {
          *v44 = *(_DWORD *)((char *)v44 + (char *)v35 - (char *)v36);
          v44 += 2;
          v45 = v41++;
          *((_DWORD *)v36 + 2 * v45 + 4) = (_DWORD)v35
                                         + 8 * v45
                                         + 4 * (((__int64)v43 - v42) >> 2)
                                         + v35[2 * v45 + 4]
                                         - ((_DWORD)v36
                                          + 8 * v45);
        }
        while ( v41 < *(_DWORD *)v36 );
      }
      v46 = (unsigned __int64)(8 * (*v35 - 1) + v35[2 * *v35 + 2] - v35[4]) >> 2;
      v47 = (int)v46;
      if ( (int)v46 > 0 )
      {
        v48 = v42 - (_QWORD)v43;
        do
        {
          *v43 = *(_DWORD *)((char *)v43 + v48);
          ++v43;
          --v47;
        }
        while ( v47 );
      }
      goto LABEL_46;
    }
    v63 = v38;
    if ( !v38 )
      v63 = 1LL;
    v64 = HeapAlloc(WPF::g_processHeap, 0, v63);
    if ( v64 )
    {
      FastRegion::CRegion::FreeMemory(v6);
      *(_QWORD *)v6 = v64;
      *v37 = v38;
      v36 = *(const struct FastRegion::Internal::CRgnData **)v6;
      goto LABEL_40;
    }
    v22 = -2147024882;
LABEL_47:
    if ( v22 < 0 )
      goto LABEL_50;
    goto LABEL_48;
  }
  v50 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
          *(const struct FastRegion::Internal::CRgnData **)v6,
          (const struct FastRegion::Internal::CRgnData *)lpMem);
  v51 = v50;
  v52 = (FastRegion::Internal::CRgnData *)v84;
  v83 = (struct FastRegion::Internal::CRgnData *)v84;
  v82 = v50;
  if ( (unsigned __int64)v50 <= 0x100 )
  {
LABEL_54:
    FastRegion::Internal::CRgnData::Union(v52, v36, (const struct FastRegion::Internal::CRgnData *)lpMem);
    v53 = v83;
    v22 = 0;
    v54 = *(_DWORD *)v83;
    if ( *(_DWORD *)v83 )
    {
      if ( v84 == (_BYTE *)v83 )
      {
        v55 = v54 - 1;
        v56 = (int *)((char *)v6 + 8);
        v57 = (_DWORD)v83 + 8 * v55;
        v58 = *((_DWORD *)v83 + 2 * v55 + 4) + 8 * v54 - *((_DWORD *)v83 + 4) - (_DWORD)v83;
        v59 = *(FastRegion::Internal::CRgnData **)v6;
        v60 = v58 + v57 + 12;
        if ( (FastRegion::CRegion *)((char *)v6 + 8) == *(FastRegion::CRegion **)v6 )
          v61 = 60;
        else
          v61 = *v56;
        if ( v61 >= v60 )
          goto LABEL_59;
        v65 = v60;
        if ( !v60 )
          v65 = 1LL;
        v66 = HeapAlloc(WPF::g_processHeap, 0, v65);
        if ( v66 )
        {
          FastRegion::CRegion::FreeMemory(v6);
          *(_QWORD *)v6 = v66;
          *v56 = v60;
          v59 = *(FastRegion::Internal::CRgnData **)v6;
LABEL_59:
          FastRegion::Internal::CRgnData::Copy(v59, v53);
          v22 = 0;
          goto LABEL_60;
        }
        v22 = -2147024882;
      }
      else
      {
        v68 = v82;
        v83 = (struct FastRegion::Internal::CRgnData *)v84;
        v82 = 0;
        FastRegion::CRegion::FreeMemory(v6);
        *(_QWORD *)v6 = v53;
        *((_DWORD *)v6 + 2) = v68;
      }
    }
    else
    {
      **(_DWORD **)v6 = 0;
    }
LABEL_60:
    if ( v84 != (_BYTE *)v83 )
      operator delete(v83);
    goto LABEL_47;
  }
  if ( !v50 )
    v51 = 1LL;
  v67 = (struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v51);
  v52 = v67;
  if ( v67 )
  {
    v36 = *(const struct FastRegion::Internal::CRgnData **)v6;
    v83 = v67;
    goto LABEL_54;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v82);
  v22 = -2147024882;
LABEL_50:
  if ( v77 != lpMem )
    operator delete(lpMem);
  return (unsigned int)v22;
}
