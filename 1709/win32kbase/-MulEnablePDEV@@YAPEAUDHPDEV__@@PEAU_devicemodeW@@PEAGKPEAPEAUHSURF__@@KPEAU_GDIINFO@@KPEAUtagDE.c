/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C003CE20 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003E02C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     EngFreeMem @ 0x1C006DC60 (EngFreeMem.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C006EEF8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAllocMem @ 0x1C00704A0 (EngAllocMem.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00F26B8 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C00F2760 (bIntersect.c)
 */

struct DHPDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        struct OBJECT *a9)
{
  struct OBJECT *v9; // rsi
  unsigned int v10; // edi
  struct _GDIINFO *v11; // rbx
  int v12; // r12d
  struct tagDEVINFO *v13; // r15
  char *v15; // r14
  unsigned int v16; // r9d
  char *v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rbx
  _OWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  struct _GDIINFO *v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rdx
  __int128 v26; // xmm1
  struct tagDEVINFO *v27; // rcx
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  int v30; // eax
  __int128 v31; // xmm0
  __int64 v32; // rax
  char *v33; // r15
  __int64 v34; // rax
  _QWORD *v35; // rbx
  int v36; // ecx
  int v37; // eax
  unsigned int v38; // r9d
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  unsigned int v45; // r12d
  struct tagDEVINFO *v46; // rdx
  int v47; // eax
  struct OBJECT *v48; // r12
  __int64 v49; // rbx
  bool v50; // zf
  signed __int32 v51; // ett
  signed __int32 v52; // ett
  int v53; // ecx
  struct OBJECT *v54; // rbx
  struct OBJECT *v55; // rcx
  int v56; // r8d
  int v57; // edx
  _DWORD *v58; // rdx
  _DWORD *v59; // r8
  int v60; // eax
  signed __int32 v61; // ett
  unsigned int v62; // ebx
  _QWORD *v63; // r12
  unsigned int v64; // r15d
  void *v65; // r14
  signed __int32 v66; // ett
  _DWORD *v67; // r8
  signed __int32 v68; // ett
  signed __int32 v69; // ett
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rdx
  signed __int32 v73; // ett
  signed __int32 v74; // ett
  signed __int32 v76; // ett
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // [rsp+28h] [rbp-A9h] BYREF
  int v80; // [rsp+30h] [rbp-A1h]
  unsigned int v81; // [rsp+34h] [rbp-9Dh]
  struct OBJECT *v82; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v83; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  struct OBJECT *v85; // [rsp+50h] [rbp-81h] BYREF
  char *v86; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v87; // [rsp+60h] [rbp-71h]
  char *v88; // [rsp+68h] [rbp-69h]
  _QWORD v89[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = a6;
  v12 = -1;
  v13 = a8;
  v85 = a9;
  v87 = a6;
  v83 = a8;
  v80 = -1;
  v82 = 0LL;
  LODWORD(v79) = 0;
  if ( !a9 )
    return 0LL;
  v86 = (char *)v89;
  v88 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v15 = v88;
  if ( !v88 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_87:
    EngFreeMem(v15);
    return 0LL;
  }
  v16 = 0;
  *((_DWORD *)v88 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  *((_DWORD *)v15 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v15 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v15 + 20) = 0x80000000;
  *((_DWORD *)v15 + 21) = 0x80000000;
  *((_QWORD *)v15 + 4) = a9;
  v81 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = v15 + 112;
    v18 = v89;
    while ( 1 )
    {
      v19 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 2592) + 160LL) & 4) != 0 )
      {
        v20 = (_OWORD *)(v19 + 2152);
        v21 = *(_DWORD *)(v19 + 2188) & 0x100;
        v82 = *(struct OBJECT **)&a1->dmDeviceName[20 * v16 + 16];
        LODWORD(v79) = v21;
        v22 = 2LL;
        v23 = v87;
        do
        {
          *(_OWORD *)&v23->ulVersion = *v20;
          *(_OWORD *)&v23->ulHorzRes = v20[1];
          *(_OWORD *)&v23->ulNumColors = v20[2];
          *(_OWORD *)&v23->flTextCaps = v20[3];
          *(_OWORD *)&v23->ulAspectX = v20[4];
          *(_OWORD *)&v23->yStyleStep = v20[5];
          *(_OWORD *)&v23->szlPhysSize.cx = v20[6];
          v23 = (struct _GDIINFO *)((char *)v23 + 128);
          v24 = v20[7];
          v20 += 8;
          *(_OWORD *)&v23[-1].flShadeBlend = v24;
          --v22;
        }
        while ( v22 );
        v25 = 2LL;
        *(_OWORD *)&v23->ulVersion = *v20;
        *(_OWORD *)&v23->ulHorzRes = v20[1];
        *(_OWORD *)&v23->ulNumColors = v20[2];
        v26 = v20[3];
        v27 = v13;
        *(_OWORD *)&v23->flTextCaps = v26;
        v28 = (_OWORD *)(v19 + 1840);
        do
        {
          *(_OWORD *)v27 = *v28;
          *((_OWORD *)v27 + 1) = v28[1];
          *((_OWORD *)v27 + 2) = v28[2];
          *((_OWORD *)v27 + 3) = v28[3];
          *((_OWORD *)v27 + 4) = v28[4];
          *((_OWORD *)v27 + 5) = v28[5];
          *((_OWORD *)v27 + 6) = v28[6];
          v27 = (struct tagDEVINFO *)((char *)v27 + 128);
          v29 = v28[7];
          v28 += 8;
          *((_OWORD *)v27 - 1) = v29;
          --v25;
        }
        while ( v25 );
        v18 = v86;
        *(_OWORD *)v27 = *v28;
        *((_OWORD *)v27 + 1) = v28[1];
        *((_OWORD *)v27 + 2) = v28[2];
        *((_QWORD *)v27 + 6) = *((_QWORD *)v28 + 6);
      }
      v12 &= *(_DWORD *)(v19 + 1840);
      v30 = *(_DWORD *)(v19 + 2144) & v80;
      *v18 = v17;
      v18[1] = v17;
      *((_DWORD *)v17 + 4) = v16;
      v31 = *(_OWORD *)&a1->dmDeviceName[20 * v16 + 24];
      v80 = v30;
      *(_OWORD *)(v17 + 28) = v31;
      v32 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      *((_QWORD *)v17 + 6) = v32;
      *((_QWORD *)v17 + 7) = v32;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v17 + 56));
      v33 = (char *)v89[0];
      *((_DWORD *)v17 + 18) = -*(_DWORD *)(v19 + 2600);
      *((_DWORD *)v17 + 19) = -*(_DWORD *)(v19 + 2604);
      v34 = *(_QWORD *)(v19 + 2568);
      v35 = v33;
      *((_DWORD *)v17 + 5) = 1;
      *((_QWORD *)v17 + 8) = (v34 + 24) & -(__int64)(v34 != 0);
      if ( v33 != v17 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v35 + 28, v17 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v17 + 7) + 1840LL) |= 0x8000000u;
            *((_DWORD *)v17 + 5) = 0;
          }
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != (_QWORD *)v17 );
        v15 = v88;
      }
      v36 = *((_DWORD *)v17 + 7);
      v18 = v17;
      v37 = *((_DWORD *)v15 + 18);
      v38 = v81;
      v86 = v17;
      if ( v37 < v36 )
        v36 = v37;
      v39 = *((_DWORD *)v15 + 19);
      *((_DWORD *)v15 + 18) = v36;
      v40 = *((_DWORD *)v17 + 8);
      if ( v39 < v40 )
        v40 = v39;
      v41 = *((_DWORD *)v15 + 20);
      *((_DWORD *)v15 + 19) = v40;
      v42 = *((_DWORD *)v17 + 9);
      if ( v41 > v42 )
        v42 = v41;
      v43 = *((_DWORD *)v15 + 21);
      *((_DWORD *)v15 + 20) = v42;
      v44 = *((_DWORD *)v17 + 10);
      if ( v43 > v44 )
        v44 = v43;
      v16 = v38 + 1;
      v17 += 80;
      *((_DWORD *)v15 + 21) = v44;
      v81 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v13 = v83;
    }
    v9 = v85;
    v11 = v87;
  }
  else
  {
    v33 = (char *)v89[0];
  }
  v45 = v12 & 0xFFFEE7FF;
  v46 = v83;
  v11->ulHorzSize = -v11->ulHorzSize;
  v11->ulVertSize = -v11->ulVertSize;
  if ( (_DWORD)v79 )
    v45 |= 0x80020u;
  v47 = v80;
  *(_DWORD *)v46 = v45;
  v48 = v82;
  *((_DWORD *)v46 + 76) = v47;
  *((_DWORD *)v15 + 16) = *((_DWORD *)v46 + 71);
  *(_QWORD *)v15 = v33;
  *((_QWORD *)v15 + 1) = v33;
  *((_QWORD *)v15 + 5) = v48;
  while ( v33 )
  {
    v49 = *((_QWORD *)v33 + 6);
    v50 = v33 == *(char **)v15;
    _m_prefetchw((const void *)(v49 + 32));
    if ( v50 )
    {
      do
        v51 = *(_DWORD *)(v49 + 32);
      while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 32), v51 | 0x10000000, v51) );
      *(_QWORD *)(v49 + 24) = 0LL;
    }
    else
    {
      do
        v52 = *(_DWORD *)(v49 + 32);
      while ( v52 != _InterlockedCompareExchange((volatile signed __int32 *)(v49 + 32), v52 & 0xEFFFFFFF, v52) );
      *(_QWORD *)(v49 + 24) = *(_QWORD *)(*(_QWORD *)v15 + 48LL);
    }
    if ( (struct OBJECT *)v49 == v48 )
    {
      *((_DWORD *)v33 + 6) = 0;
    }
    else
    {
      v53 = *(_DWORD *)(v49 + 2124) - *((_DWORD *)v15 + 16);
      *((_DWORD *)v33 + 6) = v53;
      if ( !v53 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v85, *((struct HOBJ__ **)v46 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v82, *(struct HOBJ__ **)(v49 + 2136));
        v54 = v85;
        v55 = v82;
        if ( !v85 )
        {
          if ( v82 )
          {
            HmgDecrementShareReferenceCountEx(v82, 0LL);
LABEL_84:
            if ( v54 )
              HmgDecrementShareReferenceCountEx(v54, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_87;
        }
        if ( !v82 )
          goto LABEL_84;
        v56 = *((_DWORD *)v82 + 6) & 0x1F;
        v57 = *((_DWORD *)v85 + 6) & 0x1F;
        *((_DWORD *)v33 + 6) = v57 != v56;
        if ( v57 == v56 && (*((_DWORD *)v54 + 6) & 0x1F) == 2 )
        {
          v58 = (_DWORD *)*((_QWORD *)v55 + 15);
          v59 = (_DWORD *)*((_QWORD *)v54 + 15);
          if ( *v59 != *v58 || v59[1] != v58[1] || (v60 = 0, v59[2] != v58[2]) )
            v60 = 1;
          *((_DWORD *)v33 + 6) = v60;
        }
        HmgDecrementShareReferenceCountEx(v55, 0LL);
        HmgDecrementShareReferenceCountEx(v54, 0LL);
        v46 = v83;
      }
      if ( *((_DWORD *)v33 + 6) )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v33 = *(char **)v33;
  }
  *((_DWORD *)v9 + 650) = *((_DWORD *)v15 + 18);
  *((_DWORD *)v9 + 651) = *((_DWORD *)v15 + 19);
  *((_DWORD *)v9 + 434) = *((_DWORD *)v15 + 20) - *((_DWORD *)v15 + 18);
  *((_DWORD *)v9 + 435) = *((_DWORD *)v15 + 21) - *((_DWORD *)v15 + 19);
  _m_prefetchw((char *)v9 + 32);
  do
    v61 = *((_DWORD *)v9 + 8);
  while ( v61 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v61 | 0x20000, v61) );
  v62 = 0;
  v63 = pv;
  v64 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v65 = 0LL;
    do
    {
      v79 = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      if ( (*(_DWORD *)(v79 + 1840) & 0x8000000) != 0 )
      {
        _m_prefetchw((char *)v9 + 32);
        do
          v66 = *((_DWORD *)v9 + 8);
        while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v66 | 0x1000000, v66) );
        v67 = (_DWORD *)(v79 + 2144);
        if ( (*(_DWORD *)(v79 + 2144) & 0x1000) != 0 )
        {
          _m_prefetchw((char *)v9 + 32);
          do
            v68 = *((_DWORD *)v9 + 8);
          while ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v68 | 0x2000000, v68) );
          *((_DWORD *)v9 + 536) |= 0x1000u;
        }
        if ( (*v67 & 0x8000) != 0 )
        {
          _m_prefetchw((char *)v9 + 32);
          do
            v69 = *((_DWORD *)v9 + 8);
          while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v69 | 0x20000000, v69) );
        }
        v70 = v62++;
        v63[v70] = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      }
      LOBYTE(v71) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v79);
      if ( !v71 && *(_DWORD *)(v72 + 2628) != 5 )
      {
        _m_prefetchw((char *)v9 + 32);
        do
          v73 = *((_DWORD *)v9 + 8);
        while ( v73 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v73 | 0x8000000, v73) );
        v72 = v79;
      }
      if ( (*((_DWORD *)v9 + 8) & 0x4000000) == 0
        && ((*(_DWORD *)(v72 + 2144) & 0x8000) == 0 || !*(_QWORD *)(v72 + 2784)) )
      {
        if ( !v65 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v79) == v65 )
        {
          v65 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v79);
        }
        else
        {
          _m_prefetchw((char *)v9 + 32);
          do
            v74 = *((_DWORD *)v9 + 8);
          while ( v74 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v74 | 0x4000000, v74) );
        }
      }
      if ( (*((_DWORD *)v9 + 8) & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v79) )
      {
        _m_prefetchw((char *)v9 + 32);
        do
          v76 = *((_DWORD *)v9 + 8);
        while ( v76 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v76 | 0x40000000, v76) );
      }
      ++v64;
    }
    while ( v64 < *(_DWORD *)&a1->dmDeviceName[10] );
    v15 = v88;
    if ( *(_DWORD *)&a1->dmDeviceName[10] )
    {
      do
      {
        v77 = *(_QWORD *)&a1->dmDeviceName[20 * v10 + 16];
        if ( (*(_DWORD *)(v77 + 1840) & 0x8000000) == 0 )
        {
          v78 = v62++;
          v63[v78] = v77;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)&a1->dmDeviceName[10] );
    }
  }
  vSpEnableMultiMon(v9, *(unsigned int *)&a1->dmDeviceName[10], v63);
  return (struct DHPDEV__ *)v15;
}
