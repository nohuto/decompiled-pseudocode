/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800258E0
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800BEDBC (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180025D44 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180026074 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800D2D60 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800D2DE4 (--1_Lockit@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180132A50 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  _QWORD ****v3; // r9
  CMegaRectCollection *v4; // r15
  int v5; // r12d
  __int64 v6; // rbp
  _QWORD ***v7; // rax
  unsigned int v8; // r13d
  _QWORD **v9; // rax
  _QWORD *v10; // r8
  __int64 j; // rsi
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD ***v16; // rax
  const struct FastRegion::Internal::CRgnData **v17; // rbx
  __int64 v18; // rbp
  SIZE_T v19; // rcx
  _BYTE *v20; // rax
  int *v21; // r14
  char *v22; // r12
  int *v23; // r13
  int v24; // ebx
  int v25; // eax
  int v26; // ecx
  int v27; // r11d
  const struct FastRegion::Internal::CRgnData *v28; // rbx
  __int64 v29; // r9
  _DWORD *v30; // rax
  _DWORD *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  int v37; // r9d
  SIZE_T v39; // r8
  int v40; // ebx
  unsigned int v41; // [rsp+30h] [rbp-188h]
  LPVOID v42; // [rsp+38h] [rbp-180h]
  _QWORD *v43; // [rsp+40h] [rbp-178h]
  __int64 i; // [rsp+48h] [rbp-170h]
  _BYTE v45[4]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v46[4]; // [rsp+54h] [rbp-164h] BYREF
  _QWORD ****v47; // [rsp+58h] [rbp-160h]
  CMegaRectCollection *v48; // [rsp+60h] [rbp-158h]
  int v49; // [rsp+70h] [rbp-148h] BYREF
  void *lpMem; // [rsp+78h] [rbp-140h]
  _BYTE v51[256]; // [rsp+80h] [rbp-138h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(_QWORD *****)this;
  v4 = this;
  v48 = this;
  v5 = 0;
  v6 = v1;
  v47 = v3;
  for ( i = v1; ; i = v6 )
  {
    if ( v6 == v1 + *((_QWORD *)v4 + 4) )
      return (unsigned int)v5;
    v7 = v3 ? *v3 : 0LL;
    if ( v7[1][v6 & ((unsigned __int64)v7[2] - 1)][1] )
      break;
LABEL_16:
    ++v6;
  }
  v8 = 0;
  v9 = 0LL;
  v41 = 0;
  if ( v3 )
  {
    if ( !*v3 )
    {
      std::_Lockit::_Lockit((std::_Lockit *)v45, 3);
      std::_Lockit::~_Lockit((std::_Lockit *)v45);
      v3 = v47;
      v10 = 0LL;
LABEL_12:
      v43 = v10;
      goto LABEL_13;
    }
    v9 = **v3;
  }
  v10 = 0LL;
  v43 = 0LL;
  if ( v9 )
  {
    if ( !*v9 )
    {
      std::_Lockit::_Lockit((std::_Lockit *)v46, 3);
      std::_Lockit::~_Lockit((std::_Lockit *)v46);
      v3 = v47;
      v10 = 0LL;
      goto LABEL_13;
    }
    v10 = (_QWORD *)**v9;
    goto LABEL_12;
  }
LABEL_13:
  for ( j = v6 + 1; ; ++j )
  {
    while ( 1 )
    {
      v1 = *((_QWORD *)v4 + 3);
      v12 = v2 | 1;
      if ( j == v1 + *((_QWORD *)v4 + 4) || v8 >= CCommonRegistryData::m_dwMegaRectSearchCount )
      {
        v2 = v12 & 0xFFFFFFFE;
        goto LABEL_16;
      }
      v2 = v12 & 0xFFFFFFFE;
      v13 = v10 ? *v10 : 0LL;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * (j & (*(_QWORD *)(v13 + 16) - 1LL))) + 8LL) )
        break;
LABEL_46:
      ++j;
      v41 = ++v8;
    }
    if ( v10 )
      v14 = *v10;
    else
      v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (j & (*(_QWORD *)(v14 + 16) - 1LL)));
    if ( v3 )
      v16 = *v3;
    else
      v16 = 0LL;
    v17 = *(const struct FastRegion::Internal::CRgnData ***)(v15 + 8);
    v18 = v16[1][v6 & ((unsigned __int64)v16[2] - 1)][1];
    if ( !*(_DWORD *)*v17 )
    {
      v5 = 0;
      goto LABEL_45;
    }
    if ( **(_DWORD **)v18 )
      break;
    v6 = i;
    v5 = 0;
    v41 = ++v8;
  }
  v19 = (int)FastRegion::Internal::CRgnData::EstimateSizeSubtract(
               *(const struct FastRegion::Internal::CRgnData **)v18,
               *v17);
  v20 = v51;
  lpMem = v51;
  v49 = v19;
  if ( (unsigned int)v19 <= 0x100 )
    goto LABEL_28;
  v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
  if ( v20 )
  {
    lpMem = v20;
LABEL_28:
    FastRegion::Internal::CRgnData::Subtract(
      (FastRegion::Internal::CRgnData *)v20,
      *(const struct FastRegion::Internal::CRgnData **)v18,
      *v17);
    v21 = (int *)lpMem;
    v5 = 0;
    if ( *(_DWORD *)lpMem )
    {
      if ( v51 == lpMem )
      {
        v22 = (char *)lpMem + 12;
        v23 = (int *)(v18 + 8);
        v24 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            - *((_DWORD *)lpMem + 4)
            + 8 * *(_DWORD *)lpMem
            - 12
            + 8 * (*(_DWORD *)lpMem - 1)
            + 24;
        if ( v18 + 8 == *(_QWORD *)v18 )
          v25 = 60;
        else
          v25 = *v23;
        if ( v25 < v24 )
        {
          v39 = v24;
          if ( !v24 )
            v39 = 1LL;
          v42 = HeapAlloc(WPF::g_processHeap, 0, v39);
          if ( v42 )
          {
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v18);
            *(_QWORD *)v18 = v42;
            *v23 = v24;
            goto LABEL_33;
          }
          v8 = v41;
          v5 = -2147024882;
        }
        else
        {
LABEL_33:
          v26 = *v21;
          v27 = 0;
          v28 = *(const struct FastRegion::Internal::CRgnData **)v18;
          *(_DWORD *)v28 = *v21;
          *((_DWORD *)v28 + 1) = v21[1];
          *((_DWORD *)v28 + 2) = v21[2];
          v29 = (__int64)v21 + v21[4] + 12;
          v30 = (_DWORD *)((char *)v28 + 8 * v26 + 12);
          if ( v26 > 0 )
          {
            v31 = (_DWORD *)((char *)v28 + 12);
            do
            {
              *v31 = *(_DWORD *)((char *)v31 + (char *)v21 - (char *)v28);
              v31 += 2;
              v32 = v27++;
              *((_DWORD *)v28 + 2 * v32 + 4) = 4 * (((__int64)v30 - v29) >> 2)
                                             + (_DWORD)v22
                                             + 8 * v32
                                             + *(_DWORD *)&v22[8 * v32 + 4]
                                             - ((_DWORD)v28
                                              + 12
                                              + 8 * v32);
            }
            while ( v27 < *(_DWORD *)v28 );
            v4 = v48;
          }
          v33 = (__int64)&v21[2 * *v21 + 1];
          v34 = (unsigned __int64)((int)v33 + *(_DWORD *)(v33 + 4) - v21[4] - ((int)v21 + 12)) >> 2;
          v35 = (int)v34;
          if ( (int)v34 > 0 )
          {
            v36 = v29 - (_QWORD)v30;
            do
            {
              *v30 = *(_DWORD *)((char *)v30 + v36);
              ++v30;
              --v35;
            }
            while ( v35 );
          }
          v8 = v41;
          v5 = 0;
        }
      }
      else
      {
        v40 = v49;
        lpMem = v51;
        v49 = 0;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v18);
        *(_QWORD *)v18 = v21;
        *(_DWORD *)(v18 + 8) = v40;
      }
    }
    else
    {
      **(_DWORD **)v18 = 0;
    }
    if ( v51 != lpMem )
      WPF::ProcessHeapImpl::Free(lpMem);
    v37 = v5;
    if ( v5 < 0 )
      goto LABEL_67;
    v10 = v43;
    v3 = v47;
LABEL_45:
    v6 = i;
    goto LABEL_46;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v49);
  v37 = -2147024882;
  v5 = -2147024882;
LABEL_67:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x20Du);
  return (unsigned int)v5;
}
