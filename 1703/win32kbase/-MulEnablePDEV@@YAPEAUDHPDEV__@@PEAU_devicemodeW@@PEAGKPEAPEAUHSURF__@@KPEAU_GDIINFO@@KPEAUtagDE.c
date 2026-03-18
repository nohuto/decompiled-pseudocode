/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00EF130
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C00387B0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0038F1C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00425A4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngFreeMem @ 0x1C0058530 (EngFreeMem.c)
 *     EngAllocMem @ 0x1C0076E30 (EngAllocMem.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00EF9F8 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C00EFAA0 (bIntersect.c)
 */

struct HDEV__ *__fastcall MulEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        __int64 a3,
        HSURF *a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9)
{
  HDEV v9; // rsi
  unsigned int v10; // edi
  struct _GDIINFO *v11; // rbx
  int v12; // r12d
  struct tagDEVINFO *v13; // r15
  struct HDEV__ *v15; // r14
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
  unsigned int v37; // r9d
  int v38; // ecx
  bool v39; // cc
  int v40; // ecx
  int v41; // ecx
  unsigned int v42; // r12d
  struct tagDEVINFO *v43; // rdx
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // rbx
  bool v47; // zf
  signed __int32 v48; // ett
  signed __int32 v49; // ett
  int v50; // ecx
  __int64 v51; // rbx
  __int64 v52; // rcx
  BOOL v53; // eax
  _DWORD *v54; // rdx
  _DWORD *v55; // r8
  int v56; // eax
  signed __int32 v57; // ett
  unsigned int v58; // ebx
  _QWORD *v59; // r12
  unsigned int v60; // r15d
  void *v61; // r14
  signed __int32 v62; // ett
  _DWORD *v63; // r8
  signed __int32 v64; // ett
  signed __int32 v65; // ett
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rdx
  signed __int32 v69; // ett
  signed __int32 v70; // ett
  signed __int32 v72; // ett
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // [rsp+28h] [rbp-A9h] BYREF
  int v76; // [rsp+30h] [rbp-A1h]
  unsigned int v77; // [rsp+34h] [rbp-9Dh]
  __int64 v78; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v79; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  HDEV v81; // [rsp+50h] [rbp-81h] BYREF
  char *v82; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v83; // [rsp+60h] [rbp-71h]
  struct HDEV__ *v84; // [rsp+68h] [rbp-69h]
  _QWORD v85[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = a6;
  v12 = -1;
  v13 = a8;
  v81 = a9;
  v83 = a6;
  v79 = a8;
  v76 = -1;
  v78 = 0LL;
  LODWORD(v75) = 0;
  if ( !a9 )
    return 0LL;
  v82 = (char *)v85;
  v84 = (struct HDEV__ *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v15 = v84;
  if ( !v84 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_87:
    EngFreeMem(v15);
    return 0LL;
  }
  v16 = 0;
  *(_DWORD *)(v84 + 4) = *(_DWORD *)(struct HDEV__ *)&a1->dmDeviceName[10];
  *((_DWORD *)v15 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v15 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v15 + 20) = 0x80000000;
  *((_DWORD *)v15 + 21) = 0x80000000;
  *((_QWORD *)v15 + 4) = a9;
  v77 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = (char *)(v15 + 28);
    v18 = v85;
    while ( 1 )
    {
      v19 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 2592) + 160LL) & 4) != 0 )
      {
        v20 = (_OWORD *)(v19 + 2152);
        v21 = *(_DWORD *)(v19 + 2188) & 0x100;
        v78 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
        LODWORD(v75) = v21;
        v22 = 2LL;
        v23 = v83;
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
        v18 = v82;
        *(_OWORD *)v27 = *v28;
        *((_OWORD *)v27 + 1) = v28[1];
        *((_OWORD *)v27 + 2) = v28[2];
        *((_QWORD *)v27 + 6) = *((_QWORD *)v28 + 6);
      }
      v12 &= *(_DWORD *)(v19 + 1840);
      v30 = *(_DWORD *)(v19 + 2144) & v76;
      *v18 = v17;
      v18[1] = v17;
      *((_DWORD *)v17 + 4) = v16;
      v31 = *(_OWORD *)&a1->dmDeviceName[20 * v16 + 24];
      v76 = v30;
      *(_OWORD *)(v17 + 28) = v31;
      v32 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      *((_QWORD *)v17 + 6) = v32;
      *((_QWORD *)v17 + 7) = v32;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v17 + 56));
      v33 = (char *)v85[0];
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
        v15 = v84;
      }
      v36 = *((_DWORD *)v17 + 7);
      v18 = v17;
      v37 = v77;
      if ( *((_DWORD *)v15 + 18) < v36 )
        v36 = *((_DWORD *)v15 + 18);
      *((_DWORD *)v15 + 18) = v36;
      v38 = *((_DWORD *)v17 + 8);
      v39 = *((_DWORD *)v15 + 19) < v38;
      v82 = v17;
      if ( v39 )
        v38 = *((_DWORD *)v15 + 19);
      *((_DWORD *)v15 + 19) = v38;
      v40 = *((_DWORD *)v17 + 9);
      if ( *((_DWORD *)v15 + 20) > v40 )
        v40 = *((_DWORD *)v15 + 20);
      *((_DWORD *)v15 + 20) = v40;
      v41 = *((_DWORD *)v17 + 10);
      if ( *((_DWORD *)v15 + 21) > v41 )
        v41 = *((_DWORD *)v15 + 21);
      v16 = v37 + 1;
      v17 += 80;
      *((_DWORD *)v15 + 21) = v41;
      v77 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v13 = v79;
    }
    v9 = v81;
    v11 = v83;
  }
  else
  {
    v33 = (char *)v85[0];
  }
  v42 = v12 & 0xFFFEE7FF;
  v43 = v79;
  v11->ulHorzSize = -v11->ulHorzSize;
  v11->ulVertSize = -v11->ulVertSize;
  if ( (_DWORD)v75 )
    v42 |= 0x80020u;
  v44 = v76;
  *(_DWORD *)v43 = v42;
  v45 = v78;
  *((_DWORD *)v43 + 76) = v44;
  v15[16] = *(_DWORD *)(struct HDEV__ *)((int)v43 + 284);
  *(_QWORD *)v15 = v33;
  *((_QWORD *)v15 + 1) = v33;
  *((_QWORD *)v15 + 5) = v45;
  while ( v33 )
  {
    v46 = *((_QWORD *)v33 + 6);
    v47 = v33 == *(char **)v15;
    _m_prefetchw((const void *)(v46 + 32));
    if ( v47 )
    {
      do
        v48 = *(_DWORD *)(v46 + 32);
      while ( v48 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 32), v48 | 0x10000000, v48) );
      *(_QWORD *)(v46 + 24) = 0LL;
    }
    else
    {
      do
        v49 = *(_DWORD *)(v46 + 32);
      while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 32), v49 & 0xEFFFFFFF, v49) );
      *(_QWORD *)(v46 + 24) = *(_QWORD *)(*(_QWORD *)v15 + 48LL);
    }
    if ( v46 == v45 )
    {
      *((_DWORD *)v33 + 6) = 0;
    }
    else
    {
      v50 = *(_DWORD *)(v46 + 2124) - *((_DWORD *)v15 + 16);
      *((_DWORD *)v33 + 6) = v50;
      if ( !v50 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v81, *((HPALETTE *)v43 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v78, *(HPALETTE *)(v46 + 2136));
        v51 = (__int64)v81;
        v52 = v78;
        if ( !v81 )
        {
          if ( v78 )
          {
            HmgDecrementShareReferenceCount(v78);
LABEL_84:
            if ( v51 )
              HmgDecrementShareReferenceCount(v51);
          }
          EngFreeMem(pv);
          goto LABEL_87;
        }
        if ( !v78 )
          goto LABEL_84;
        v53 = ((*((_BYTE *)v81 + 24) ^ *(_BYTE *)(v78 + 24)) & 0x1F) != 0;
        *((_DWORD *)v33 + 6) = v53;
        if ( !v53 && (*(_BYTE *)(v51 + 24) & 0x1F) == 2 )
        {
          v54 = *(_DWORD **)(v52 + 120);
          v55 = *(_DWORD **)(v51 + 120);
          if ( *v55 != *v54 || v55[1] != v54[1] || (v56 = 0, v55[2] != v54[2]) )
            v56 = 1;
          *((_DWORD *)v33 + 6) = v56;
        }
        HmgDecrementShareReferenceCount(v52);
        HmgDecrementShareReferenceCount(v51);
        v43 = v79;
      }
      if ( *((_DWORD *)v33 + 6) )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v33 = *(char **)v33;
  }
  v9[650] = v15[18];
  v9[651] = v15[19];
  *((_DWORD *)v9 + 434) = *((_DWORD *)v15 + 20) - *((_DWORD *)v15 + 18);
  *((_DWORD *)v9 + 435) = *((_DWORD *)v15 + 21) - *((_DWORD *)v15 + 19);
  _m_prefetchw(v9 + 8);
  do
    v57 = *((_DWORD *)v9 + 8);
  while ( v57 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v57 | 0x20000, v57) );
  v58 = 0;
  v59 = pv;
  v60 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v61 = 0LL;
    do
    {
      v75 = *(_QWORD *)&a1->dmDeviceName[20 * v60 + 16];
      if ( (*(_DWORD *)(v75 + 1840) & 0x8000000) != 0 )
      {
        _m_prefetchw(v9 + 8);
        do
          v62 = *((_DWORD *)v9 + 8);
        while ( v62 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v62 | 0x1000000, v62) );
        v63 = (_DWORD *)(v75 + 2144);
        if ( (*(_DWORD *)(v75 + 2144) & 0x1000) != 0 )
        {
          _m_prefetchw(v9 + 8);
          do
            v64 = *((_DWORD *)v9 + 8);
          while ( v64 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v64 | 0x2000000, v64) );
          *((_DWORD *)v9 + 536) |= 0x1000u;
        }
        if ( (*v63 & 0x8000) != 0 )
        {
          _m_prefetchw(v9 + 8);
          do
            v65 = *((_DWORD *)v9 + 8);
          while ( v65 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v65 | 0x20000000, v65) );
        }
        v66 = v58++;
        v59[v66] = *(_QWORD *)&a1->dmDeviceName[20 * v60 + 16];
      }
      LOBYTE(v67) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v75);
      if ( !v67 && *(_DWORD *)(v68 + 2628) != 5 )
      {
        _m_prefetchw(v9 + 8);
        do
          v69 = *((_DWORD *)v9 + 8);
        while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v69 | 0x8000000, v69) );
        v68 = v75;
      }
      if ( ((_DWORD)v9[8] & 0x4000000) == 0 && ((*(_DWORD *)(v68 + 2144) & 0x8000) == 0 || !*(_QWORD *)(v68 + 2784)) )
      {
        if ( !v61 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v75) == v61 )
        {
          v61 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v75);
        }
        else
        {
          _m_prefetchw(v9 + 8);
          do
            v70 = *((_DWORD *)v9 + 8);
          while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v70 | 0x4000000, v70) );
        }
      }
      if ( ((_DWORD)v9[8] & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v75) )
      {
        _m_prefetchw(v9 + 8);
        do
          v72 = *((_DWORD *)v9 + 8);
        while ( v72 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 8, v72 | 0x40000000, v72) );
      }
      ++v60;
    }
    while ( v60 < *(_DWORD *)&a1->dmDeviceName[10] );
    v15 = v84;
    if ( *(_DWORD *)&a1->dmDeviceName[10] )
    {
      do
      {
        v73 = *(_QWORD *)&a1->dmDeviceName[20 * v10 + 16];
        if ( (*(_DWORD *)(v73 + 1840) & 0x8000000) == 0 )
        {
          v74 = v58++;
          v59[v74] = v73;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)&a1->dmDeviceName[10] );
    }
  }
  vSpEnableMultiMon(v9, *(unsigned int *)&a1->dmDeviceName[10], v59);
  return v15;
}
