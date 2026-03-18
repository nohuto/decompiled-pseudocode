/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180073E60
 * Callers:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180073B6C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800746C8 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180074A10 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075210 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007599C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180132A50 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AppendRects<tagRECT>(FastRegion::CRegion *this, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  FastRegion::CRegion *v4; // r12
  unsigned int v5; // r13d
  unsigned int v6; // esi
  int *v7; // rcx
  int v8; // r9d
  __int64 v9; // kr00_8
  __int64 v10; // rax
  _DWORD *v11; // rbx
  int *v12; // r14
  const struct FastRegion::Internal::CRgnData *v13; // rbx
  int v14; // r8d
  int v15; // r9d
  int v16; // r10d
  unsigned int v17; // eax
  FastRegion::Internal::CRgnData *v18; // rcx
  char *v19; // rsi
  int v20; // edi
  _DWORD *v21; // rbx
  char *v22; // rdi
  int v23; // r15d
  int v24; // eax
  int v25; // r12d
  int v26; // ecx
  __int64 v27; // r9
  _DWORD *v28; // rax
  _DWORD *v29; // r11
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r9
  const struct FastRegion::Internal::CRgnData *v35; // rbx
  SIZE_T v36; // rcx
  FastRegion::Internal::CRgnData *v37; // rax
  int *v38; // rsi
  char *v39; // rdi
  int *v40; // r14
  int v41; // ebx
  int v42; // eax
  int v43; // ecx
  int v44; // r11d
  FastRegion::Internal::CRgnData *v45; // rbx
  __int64 v46; // r9
  _DWORD *v47; // r8
  _DWORD *v48; // r10
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  int *v55; // rsi
  int v56; // edi
  int v57; // eax
  SIZE_T v58; // r8
  SIZE_T v59; // r8
  LPVOID v60; // r14
  SIZE_T v61; // r8
  LPVOID v62; // r15
  int v63; // ebx
  FastRegion::Internal::CRgnData *v64; // rax
  int v65; // ebx
  unsigned int v66; // [rsp+2Ch] [rbp-DCh]
  __int64 v69; // [rsp+40h] [rbp-C8h]
  int v70; // [rsp+64h] [rbp-A4h]
  int v71; // [rsp+6Ch] [rbp-9Ch]
  void *lpMem; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v73[18]; // [rsp+80h] [rbp-88h] BYREF
  void *v74; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v75[3]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v76[2]; // [rsp+DCh] [rbp-2Ch] BYREF
  _DWORD v77[9]; // [rsp+E4h] [rbp-24h] BYREF
  _BYTE v78[16]; // [rsp+108h] [rbp+0h] BYREF
  int v79; // [rsp+118h] [rbp+10h] BYREF
  void *v80; // [rsp+120h] [rbp+18h]
  _BYTE v81[256]; // [rsp+128h] [rbp+20h] BYREF

  v3 = a3;
  v4 = this;
  v5 = 0;
  v69 = a2;
  lpMem = v73;
  v73[0] = 0;
  if ( !a3 )
  {
LABEL_55:
    v20 = 0;
    goto LABEL_56;
  }
  while ( 1 )
  {
    v6 = v5 + 5;
    if ( v3 < v5 + 5 )
      v6 = v3;
    v7 = (int *)(a2 + 16LL * v5);
    v66 = v6;
    v8 = *v7;
    v9 = *((_QWORD *)v7 + 1);
    v10 = HIDWORD(*(_QWORD *)v7);
    if ( *v7 >= (int)v9 || (int)v10 >= SHIDWORD(v9) )
    {
      *(_DWORD *)lpMem = 0;
    }
    else
    {
      v11 = lpMem;
      *(_DWORD *)lpMem = 2;
      v11[1] = v8;
      v11[2] = v9;
      v11[3] = v10;
      v11[4] = 16;
      v11[7] = v8;
      v11[8] = v9;
      v11[5] = HIDWORD(v9);
      v11[6] = 16;
      a2 = v69;
    }
    if ( ++v5 < v6 )
    {
      v12 = (int *)(16LL * v5 + a2 + 8);
      while ( 1 )
      {
        v13 = (const struct FastRegion::Internal::CRgnData *)v75;
        v14 = *(v12 - 2);
        v15 = *v12;
        v70 = *(v12 - 1);
        v71 = v12[1];
        v74 = v75;
        if ( v14 >= v15 || v70 >= v71 )
        {
          v16 = 0;
        }
        else
        {
          v76[0] = v70;
          v75[1] = v14;
          v75[2] = v15;
          v77[2] = v14;
          v76[1] = (unsigned int)v78 - 28 - (unsigned int)v76;
          v16 = 2;
          v77[3] = v15;
          v77[0] = v71;
          v77[1] = (unsigned int)v78 - 28 - (unsigned int)v77 + 8;
        }
        v75[0] = v16;
        if ( v16 )
          break;
LABEL_33:
        ++v5;
        v12 += 4;
        if ( v5 >= v6 )
        {
          v4 = this;
          goto LABEL_35;
        }
      }
      if ( !*(_DWORD *)lpMem )
      {
        v20 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&lpMem, (const struct CRegion *)&v74);
        goto LABEL_30;
      }
      v17 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
              (const struct FastRegion::Internal::CRgnData *)lpMem,
              (const struct FastRegion::Internal::CRgnData *)v75);
      v79 = v17;
      v18 = (FastRegion::Internal::CRgnData *)v81;
      v80 = v81;
      if ( v17 > 0x100 )
      {
        v64 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, (int)v17);
        v18 = v64;
        if ( !v64 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v79);
          v20 = -2147024882;
          goto LABEL_30;
        }
        v13 = (const struct FastRegion::Internal::CRgnData *)v74;
        v80 = v64;
      }
      FastRegion::Internal::CRgnData::Union(v18, (const struct FastRegion::Internal::CRgnData *)lpMem, v13);
      v19 = (char *)v80;
      v20 = 0;
      if ( *(_DWORD *)v80 )
      {
        if ( v81 == v80 )
        {
          v21 = lpMem;
          v22 = (char *)v80 + 12;
          v23 = *((_DWORD *)v80 + 2 * *(_DWORD *)v80 + 2)
              + 8 * *(_DWORD *)v80
              - *((_DWORD *)v80 + 4)
              - 12
              + 8 * (*(_DWORD *)v80 - 1)
              + 24;
          v24 = v73[0];
          if ( v73 == lpMem )
            v24 = 60;
          if ( v24 >= v23 )
            goto LABEL_20;
          v58 = v23;
          if ( !v23 )
            v58 = 1LL;
          v21 = HeapAlloc(WPF::g_processHeap, 0, v58);
          if ( v21 )
          {
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
            lpMem = v21;
            v73[0] = v23;
LABEL_20:
            v25 = 0;
            *v21 = *(_DWORD *)v19;
            v26 = *v21;
            v21[1] = *((_DWORD *)v19 + 1);
            v21[2] = *((_DWORD *)v19 + 2);
            v27 = (__int64)&v19[*((int *)v19 + 4) + 12];
            v28 = &v21[2 * v26 + 3];
            if ( v26 > 0 )
            {
              v29 = v21 + 3;
              do
              {
                *v29 = *(_DWORD *)((char *)v29 + v19 - (char *)v21);
                v29 += 2;
                v30 = v25++;
                v21[2 * v30 + 4] = (_DWORD)v22
                                 + 8 * v30
                                 + 4 * (((__int64)v28 - v27) >> 2)
                                 + *(_DWORD *)&v22[8 * v30 + 4]
                                 - ((_DWORD)v21
                                  + 12
                                  + 8 * v30);
              }
              while ( v25 < *v21 );
            }
            v31 = (__int64)&v19[8 * *(_DWORD *)v19 + 4];
            v32 = (unsigned __int64)((int)v31 + *(_DWORD *)(v31 + 4) - *((_DWORD *)v19 + 4) - ((int)v19 + 12)) >> 2;
            v33 = (int)v32;
            if ( (int)v32 > 0 )
            {
              v34 = v27 - (_QWORD)v28;
              do
              {
                *v28 = *(_DWORD *)((char *)v28 + v34);
                ++v28;
                --v33;
              }
              while ( v33 );
            }
            v20 = 0;
            goto LABEL_27;
          }
          v20 = -2147024882;
        }
        else
        {
          v65 = v79;
          v80 = v81;
          v79 = 0;
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&lpMem);
          lpMem = v19;
          v73[0] = v65;
        }
      }
      else
      {
        *(_DWORD *)lpMem = 0;
      }
LABEL_27:
      if ( v81 != v80 )
        WPF::ProcessHeapImpl::Free(v80);
      v6 = v66;
LABEL_30:
      if ( v75 != v74 )
        WPF::ProcessHeapImpl::Free(v74);
      if ( v20 < 0 )
        goto LABEL_56;
      goto LABEL_33;
    }
LABEL_35:
    v35 = (const struct FastRegion::Internal::CRgnData *)lpMem;
    if ( *(_DWORD *)lpMem )
      break;
LABEL_54:
    v3 = a3;
    if ( v5 >= a3 )
      goto LABEL_55;
    a2 = v69;
  }
  if ( !**(_DWORD **)v4 )
  {
    if ( v4 != (FastRegion::CRegion *)&lpMem )
    {
      v55 = (int *)((char *)v4 + 8);
      v56 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
          + 8 * *(_DWORD *)lpMem
          - *((_DWORD *)lpMem + 4)
          - 12
          + 8 * (*(_DWORD *)lpMem - 1)
          + 24;
      if ( (FastRegion::CRegion *)((char *)v4 + 8) == *(FastRegion::CRegion **)v4 )
        v57 = 60;
      else
        v57 = *v55;
      if ( v57 < v56 )
      {
        v59 = v56;
        if ( !v56 )
          v59 = 1LL;
        v60 = HeapAlloc(WPF::g_processHeap, 0, v59);
        if ( v60 )
        {
          FastRegion::CRegion::FreeMemory(v4);
          *(_QWORD *)v4 = v60;
          *v55 = v56;
          FastRegion::Internal::CRgnData::Copy(*(FastRegion::Internal::CRgnData **)v4, v35);
          v20 = 0;
        }
        else
        {
          v20 = -2147024882;
        }
LABEL_53:
        if ( v20 < 0 )
          goto LABEL_56;
        goto LABEL_54;
      }
      FastRegion::Internal::CRgnData::Copy(
        *(FastRegion::Internal::CRgnData **)v4,
        (const struct FastRegion::Internal::CRgnData *)lpMem);
    }
    v20 = 0;
    goto LABEL_53;
  }
  v36 = (int)FastRegion::Internal::CRgnData::EstimateSizeUnion(
               *(const struct FastRegion::Internal::CRgnData **)v4,
               (const struct FastRegion::Internal::CRgnData *)lpMem);
  v37 = (FastRegion::Internal::CRgnData *)v81;
  v80 = v81;
  v79 = v36;
  if ( (unsigned int)v36 <= 0x100 )
  {
LABEL_38:
    FastRegion::Internal::CRgnData::Union(
      v37,
      *(const struct FastRegion::Internal::CRgnData **)v4,
      (const struct FastRegion::Internal::CRgnData *)lpMem);
    v38 = (int *)v80;
    v20 = 0;
    if ( *(_DWORD *)v80 )
    {
      if ( v81 == v80 )
      {
        v39 = (char *)v80 + 12;
        v40 = (int *)((char *)v4 + 8);
        v41 = *((_DWORD *)v80 + 2 * *(_DWORD *)v80 + 2)
            + 8 * *(_DWORD *)v80
            - *((_DWORD *)v80 + 4)
            - 12
            + 8 * (*(_DWORD *)v80 - 1)
            + 24;
        if ( (FastRegion::CRegion *)((char *)v4 + 8) == *(FastRegion::CRegion **)v4 )
          v42 = 60;
        else
          v42 = *v40;
        if ( v42 >= v41 )
          goto LABEL_43;
        v61 = v41;
        if ( !v41 )
          v61 = 1LL;
        v62 = HeapAlloc(WPF::g_processHeap, 0, v61);
        if ( v62 )
        {
          FastRegion::CRegion::FreeMemory(v4);
          *(_QWORD *)v4 = v62;
          *v40 = v41;
LABEL_43:
          v43 = *v38;
          v44 = 0;
          v45 = *(FastRegion::Internal::CRgnData **)v4;
          *(_DWORD *)v45 = *v38;
          *((_DWORD *)v45 + 1) = v38[1];
          *((_DWORD *)v45 + 2) = v38[2];
          v46 = (__int64)v38 + v38[4] + 12;
          v47 = (_DWORD *)((char *)v45 + 8 * v43 + 12);
          if ( v43 > 0 )
          {
            v48 = (_DWORD *)((char *)v45 + 12);
            do
            {
              *v48 = *(_DWORD *)((char *)v48 + (char *)v38 - (char *)v45);
              v48 += 2;
              v49 = v44++;
              *((_DWORD *)v45 + 2 * v49 + 4) = (_DWORD)v39
                                             + 8 * v49
                                             + 4 * (((__int64)v47 - v46) >> 2)
                                             + *(_DWORD *)&v39[8 * v49 + 4]
                                             - ((_DWORD)v45
                                              + 12
                                              + 8 * v49);
            }
            while ( v44 < *(_DWORD *)v45 );
            v4 = this;
          }
          v50 = (__int64)&v38[2 * *v38 + 1];
          v51 = (unsigned __int64)((int)v50 + *(_DWORD *)(v50 + 4) - v38[4] - ((int)v38 + 12)) >> 2;
          v52 = (int)v51;
          if ( (int)v51 > 0 )
          {
            v53 = v46 - (_QWORD)v47;
            do
            {
              *v47 = *(_DWORD *)((char *)v47 + v53);
              ++v47;
              --v52;
            }
            while ( v52 );
          }
          v20 = 0;
          goto LABEL_51;
        }
        v20 = -2147024882;
      }
      else
      {
        v63 = v79;
        v80 = v81;
        v79 = 0;
        FastRegion::CRegion::FreeMemory(v4);
        *(_QWORD *)v4 = v38;
        *((_DWORD *)v4 + 2) = v63;
      }
    }
    else
    {
      **(_DWORD **)v4 = 0;
    }
LABEL_51:
    if ( v81 != v80 )
      WPF::ProcessHeapImpl::Free(v80);
    goto LABEL_53;
  }
  v37 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v36);
  if ( v37 )
  {
    v80 = v37;
    goto LABEL_38;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v79);
  v20 = -2147024882;
LABEL_56:
  if ( v73 != lpMem )
    WPF::ProcessHeapImpl::Free(lpMem);
  return (unsigned int)v20;
}
