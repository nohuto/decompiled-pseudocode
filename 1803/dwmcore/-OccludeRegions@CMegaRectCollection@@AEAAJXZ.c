/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800138B0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007EF50 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007FB30 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  __int64 *****v3; // r8
  int v4; // r15d
  __int64 v5; // r9
  __int64 ****v7; // rax
  unsigned int v8; // r10d
  __int64 ***v9; // rax
  __int64 *v10; // r13
  __int64 v11; // rbp
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 ****v16; // rax
  const struct FastRegion::Internal::CRgnData **v17; // r15
  const struct FastRegion::Internal::CRgnData *v18; // rsi
  __int64 *v19; // r12
  const struct FastRegion::Internal::CRgnData *v20; // rbx
  int v21; // eax
  SIZE_T v22; // r8
  FastRegion::Internal::CRgnData *v23; // rcx
  int *v24; // rsi
  const struct FastRegion::Internal::CRgnData *v25; // r11
  int *v26; // r15
  int v27; // ebx
  int v28; // eax
  int v29; // edx
  int v30; // ebx
  __int64 v31; // r9
  _DWORD *v32; // rax
  _DWORD *v33; // r10
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r9
  SIZE_T v39; // r8
  FastRegion::Internal::CRgnData *v40; // rax
  int v41; // ebx
  unsigned int v42; // [rsp+30h] [rbp-168h]
  __int64 v43; // [rsp+38h] [rbp-160h]
  LPVOID v44; // [rsp+40h] [rbp-158h]
  __int64 *****v45; // [rsp+48h] [rbp-150h]
  int v46; // [rsp+50h] [rbp-148h] BYREF
  void *lpMem; // [rsp+58h] [rbp-140h]
  _BYTE v48[256]; // [rsp+60h] [rbp-138h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(__int64 ******)this;
  v4 = 0;
  v5 = v1;
  v43 = v1;
  v45 = *(__int64 ******)this;
  while ( 1 )
  {
    if ( v5 == v1 + *((_QWORD *)this + 4) )
      return (unsigned int)v4;
    v7 = v3 ? *v3 : 0LL;
    if ( v7[1][v5 & ((unsigned __int64)v7[2] - 1)][1] )
      break;
LABEL_14:
    v43 = ++v5;
  }
  v8 = 0;
  v9 = 0LL;
  v42 = 0;
  if ( v3 && *v3 )
    v9 = **v3;
  v10 = 0LL;
  v11 = v5 + 1;
  if ( v9 && *v9 )
    v10 = **v9;
  while ( 1 )
  {
    v1 = *((_QWORD *)this + 3);
    v12 = v2 | 1;
    if ( v11 == v1 + *((_QWORD *)this + 4) || v8 >= CCommonRegistryData::m_dwMegaRectSearchCount )
    {
      v2 = v12 & 0xFFFFFFFE;
      goto LABEL_14;
    }
    v2 = v12 & 0xFFFFFFFE;
    if ( v10 )
      v13 = *v10;
    else
      v13 = 0LL;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * (v11 & (*(_QWORD *)(v13 + 16) - 1LL))) + 8LL) )
      goto LABEL_42;
    if ( v10 )
      v14 = *v10;
    else
      v14 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (v11 & (*(_QWORD *)(v14 + 16) - 1LL)));
    if ( v3 )
      v16 = *v3;
    else
      v16 = 0LL;
    v17 = *(const struct FastRegion::Internal::CRgnData ***)(v15 + 8);
    v18 = *v17;
    v19 = v16[1][v5 & ((unsigned __int64)v16[2] - 1)][1];
    if ( !*(_DWORD *)*v17 )
    {
      v4 = 0;
      goto LABEL_42;
    }
    v20 = (const struct FastRegion::Internal::CRgnData *)*v19;
    if ( !*(_DWORD *)*v19 )
    {
      v4 = 0;
      goto LABEL_42;
    }
    v21 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(
            (const struct FastRegion::Internal::CRgnData *)*v19,
            *v17);
    v22 = v21;
    v23 = (FastRegion::Internal::CRgnData *)v48;
    lpMem = v48;
    v46 = v21;
    if ( (unsigned __int64)v21 > 0x100 )
      break;
LABEL_26:
    FastRegion::Internal::CRgnData::Subtract(v23, v20, v18);
    v24 = (int *)lpMem;
    v4 = 0;
    if ( *(_DWORD *)lpMem )
    {
      if ( v48 == lpMem )
      {
        v25 = (const struct FastRegion::Internal::CRgnData *)*v19;
        v26 = (int *)(v19 + 1);
        v27 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            + 8 * (*(_DWORD *)lpMem - 1)
            + 12;
        if ( v19 + 1 == (__int64 *)*v19 )
          v28 = 60;
        else
          v28 = *v26;
        if ( v28 >= v27 )
          goto LABEL_31;
        v39 = v27;
        if ( !v27 )
          v39 = 1LL;
        v44 = HeapAlloc(WPF::g_processHeap, 0, v39);
        if ( v44 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
          *v19 = (__int64)v44;
          *v26 = v27;
          v25 = (const struct FastRegion::Internal::CRgnData *)*v19;
LABEL_31:
          v29 = *v24;
          *(_DWORD *)v25 = *v24;
          v30 = 0;
          *((_DWORD *)v25 + 1) = v24[1];
          *((_DWORD *)v25 + 2) = v24[2];
          v31 = (__int64)v24 + v24[4] + 12;
          v32 = (_DWORD *)((char *)v25 + 8 * v29 + 12);
          if ( v29 > 0 )
          {
            v33 = (_DWORD *)((char *)v25 + 12);
            do
            {
              *v33 = *(_DWORD *)((char *)v33 + (char *)v24 - (char *)v25);
              v33 += 2;
              v34 = v30++;
              *((_DWORD *)v25 + 2 * v34 + 4) = 4 * (((__int64)v32 - v31) >> 2)
                                             + (_DWORD)v24
                                             + 8 * v34
                                             + v24[2 * v34 + 4]
                                             - ((_DWORD)v25
                                              + 8 * v34);
            }
            while ( v30 < *(_DWORD *)v25 );
          }
          v35 = (unsigned __int64)(8 * (*v24 - 1) + v24[2 * *v24 + 2] - v24[4]) >> 2;
          v36 = (int)v35;
          if ( (int)v35 > 0 )
          {
            v37 = v31 - (_QWORD)v32;
            do
            {
              *v32 = *(_DWORD *)((char *)v32 + v37);
              ++v32;
              --v36;
            }
            while ( v36 );
          }
          v4 = 0;
          goto LABEL_38;
        }
        v4 = -2147024882;
      }
      else
      {
        v41 = v46;
        lpMem = v48;
        v46 = 0;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
        *v19 = (__int64)v24;
        *((_DWORD *)v19 + 2) = v41;
      }
    }
    else
    {
      *(_DWORD *)*v19 = 0;
    }
LABEL_38:
    if ( v48 != lpMem )
      operator delete(lpMem);
    if ( v4 < 0 )
      goto LABEL_63;
    v3 = v45;
    v5 = v43;
    v8 = v42;
LABEL_42:
    ++v11;
    v42 = ++v8;
  }
  if ( !v21 )
    v22 = 1LL;
  v40 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v22);
  v23 = v40;
  if ( v40 )
  {
    v18 = *v17;
    v20 = (const struct FastRegion::Internal::CRgnData *)*v19;
    lpMem = v40;
    goto LABEL_26;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v46);
  v4 = -2147024882;
LABEL_63:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x20Du);
  return (unsigned int)v4;
}
