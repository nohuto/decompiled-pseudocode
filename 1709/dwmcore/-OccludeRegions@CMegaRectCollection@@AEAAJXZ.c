/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800345F0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800302B0 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18003099C (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800C2A28 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800C2AAC (--1_Lockit@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18011BDAC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  unsigned int v1; // esi
  int v3; // r12d
  __int64 v4; // rdx
  __int64 *****v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 ****v8; // rax
  unsigned int v9; // r9d
  __int64 ***v10; // rax
  __int64 *v11; // r13
  __int64 i; // rbp
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 ****v17; // rax
  const struct FastRegion::Internal::CRgnData **v18; // rbx
  __int64 *v19; // r15
  int v20; // eax
  SIZE_T v21; // r8
  FastRegion::Internal::CRgnData *v22; // rcx
  int *v23; // rdi
  int *v24; // r12
  int v25; // ebx
  int v26; // eax
  int v27; // edx
  const struct FastRegion::Internal::CRgnData *v28; // r11
  int v29; // ebx
  __int64 v30; // r9
  _DWORD *v31; // rax
  _DWORD *v32; // r10
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  SIZE_T v38; // r8
  FastRegion::Internal::CRgnData *v39; // rax
  int v40; // ebx
  unsigned int v41; // [rsp+30h] [rbp-178h]
  int v42; // [rsp+34h] [rbp-174h] BYREF
  _BYTE v43[8]; // [rsp+38h] [rbp-170h] BYREF
  __int64 *****v44; // [rsp+40h] [rbp-168h]
  __int64 v45; // [rsp+48h] [rbp-160h]
  LPVOID v46; // [rsp+50h] [rbp-158h]
  int v47; // [rsp+60h] [rbp-148h] BYREF
  void *lpMem; // [rsp+68h] [rbp-140h]
  _BYTE v49[256]; // [rsp+70h] [rbp-138h] BYREF

  v1 = 0;
  v42 = 0;
  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  v5 = *(__int64 ******)this;
  v6 = v4;
  v44 = *(__int64 ******)this;
  while ( 1 )
  {
    v7 = v4 + *((_QWORD *)this + 4);
    v45 = v6;
    if ( v6 == v7 )
      return (unsigned int)v3;
    v8 = v5 ? *v5 : 0LL;
    if ( v8[1][v6 & ((unsigned __int64)v8[2] - 1)][1] )
      break;
LABEL_15:
    ++v6;
  }
  v9 = 0;
  v10 = 0LL;
  v41 = 0;
  if ( !v5 )
    goto LABEL_9;
  if ( *v5 )
  {
    v10 = **v5;
LABEL_9:
    v11 = 0LL;
    if ( v10 )
    {
      if ( *v10 )
      {
        v11 = **v10;
      }
      else
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 3);
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v5 = v44;
        v9 = 0;
      }
    }
    goto LABEL_12;
  }
  std::_Lockit::_Lockit((std::_Lockit *)v43, 3);
  std::_Lockit::~_Lockit((std::_Lockit *)v43);
  v5 = v44;
  v11 = 0LL;
  v9 = 0;
LABEL_12:
  for ( i = v6 + 1; ; ++i )
  {
    v4 = *((_QWORD *)this + 3);
    v13 = v1 | 1;
    if ( i == v4 + *((_QWORD *)this + 4) || v9 >= CCommonRegistryData::m_dwMegaRectSearchCount )
    {
      v1 = v13 & 0xFFFFFFFE;
      goto LABEL_15;
    }
    v1 = v13 & 0xFFFFFFFE;
    if ( v11 )
      v14 = *v11;
    else
      v14 = 0LL;
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (i & (*(_QWORD *)(v14 + 16) - 1LL))) + 8LL) )
      goto LABEL_43;
    if ( v11 )
      v15 = *v11;
    else
      v15 = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * (i & (*(_QWORD *)(v15 + 16) - 1LL)));
    if ( v5 )
      v17 = *v5;
    else
      v17 = 0LL;
    v18 = *(const struct FastRegion::Internal::CRgnData ***)(v16 + 8);
    v19 = v17[1][v6 & ((unsigned __int64)v17[2] - 1)][1];
    if ( !*(_DWORD *)*v18 )
    {
      v3 = 0;
      goto LABEL_43;
    }
    if ( !*(_DWORD *)*v19 )
    {
      v3 = 0;
      goto LABEL_43;
    }
    v20 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(
            (const struct FastRegion::Internal::CRgnData *)*v19,
            *v18);
    v21 = v20;
    v22 = (FastRegion::Internal::CRgnData *)v49;
    lpMem = v49;
    v47 = v20;
    if ( (unsigned __int64)v20 > 0x100 )
      break;
LABEL_27:
    FastRegion::Internal::CRgnData::Subtract(v22, (const struct FastRegion::Internal::CRgnData *)*v19, *v18);
    v23 = (int *)lpMem;
    v3 = 0;
    if ( *(_DWORD *)lpMem )
    {
      if ( v49 == lpMem )
      {
        v24 = (int *)(v19 + 1);
        v25 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
            + 8 * *(_DWORD *)lpMem
            - *((_DWORD *)lpMem + 4)
            + 8 * (*(_DWORD *)lpMem - 1)
            + 12;
        if ( v19 + 1 == (__int64 *)*v19 )
          v26 = 60;
        else
          v26 = *v24;
        if ( v26 >= v25 )
          goto LABEL_32;
        v38 = v25;
        if ( !v25 )
          v38 = 1LL;
        v46 = HeapAlloc(WPF::g_processHeap, 0, v38);
        if ( v46 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
          *v19 = (__int64)v46;
          *v24 = v25;
LABEL_32:
          v27 = *v23;
          v28 = (const struct FastRegion::Internal::CRgnData *)*v19;
          v29 = 0;
          *(_DWORD *)v28 = *v23;
          *((_DWORD *)v28 + 1) = v23[1];
          *((_DWORD *)v28 + 2) = v23[2];
          v30 = (__int64)v23 + v23[4] + 12;
          v31 = (_DWORD *)((char *)v28 + 8 * v27 + 12);
          if ( v27 > 0 )
          {
            v32 = (_DWORD *)((char *)v28 + 12);
            do
            {
              *v32 = *(_DWORD *)((char *)v32 + (char *)v23 - (char *)v28);
              v32 += 2;
              v33 = v29++;
              *((_DWORD *)v28 + 2 * v33 + 4) = (_DWORD)v23
                                             + 8 * v33
                                             + 4 * (((__int64)v31 - v30) >> 2)
                                             + v23[2 * v33 + 4]
                                             - ((_DWORD)v28
                                              + 8 * v33);
            }
            while ( v29 < *(_DWORD *)v28 );
          }
          v34 = (unsigned __int64)(8 * (*v23 - 1) + v23[2 * *v23 + 2] - v23[4]) >> 2;
          v35 = (int)v34;
          if ( (int)v34 > 0 )
          {
            v36 = v30 - (_QWORD)v31;
            do
            {
              *v31 = *(_DWORD *)((char *)v31 + v36);
              ++v31;
              --v35;
            }
            while ( v35 );
          }
          v3 = 0;
          goto LABEL_39;
        }
        v3 = -2147024882;
      }
      else
      {
        v40 = v47;
        lpMem = v49;
        v47 = 0;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v19);
        *v19 = (__int64)v23;
        *((_DWORD *)v19 + 2) = v40;
      }
    }
    else
    {
      *(_DWORD *)*v19 = 0;
    }
LABEL_39:
    if ( v49 != lpMem )
      WPF::ProcessHeapImpl::Free(lpMem);
    if ( v3 < 0 )
      goto LABEL_66;
    v5 = v44;
    v6 = v45;
    v9 = v41;
LABEL_43:
    v41 = ++v9;
  }
  if ( !v20 )
    v21 = 1LL;
  v39 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v21);
  v22 = v39;
  if ( v39 )
  {
    lpMem = v39;
    goto LABEL_27;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v47);
  v3 = -2147024882;
LABEL_66:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x20Du);
  return (unsigned int)v3;
}
