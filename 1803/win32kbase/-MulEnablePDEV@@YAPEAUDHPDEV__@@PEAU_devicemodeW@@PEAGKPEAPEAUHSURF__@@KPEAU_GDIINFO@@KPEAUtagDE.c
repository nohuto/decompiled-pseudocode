/*
 * XREFs of ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00C7670
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031BBC (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0031D90 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F93C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     EngAllocMem @ 0x1C005AC20 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C7F78 (-pRenderAdapter@PDEVOBJ@@QEAAPEAXXZ.c)
 *     bIntersect @ 0x1C00C8020 (bIntersect.c)
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
  struct OBJECT *v9; // rdi
  unsigned int v10; // esi
  int v11; // ebx
  struct _GDIINFO *v12; // r15
  char *v14; // r14
  char *v15; // r12
  unsigned int v16; // r9d
  _QWORD *v17; // rdx
  int v18; // edi
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
  int v36; // eax
  int v37; // ecx
  int v38; // r9d
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  struct _GDIINFO *v42; // rcx
  unsigned int v43; // ebx
  struct tagDEVINFO *v44; // rdx
  int v45; // eax
  struct OBJECT *v46; // r12
  __int64 v47; // rbx
  bool v48; // zf
  signed __int32 v49; // ett
  __int64 v50; // rax
  signed __int32 v51; // ett
  int v52; // ecx
  struct OBJECT *v53; // rbx
  struct OBJECT *v54; // rcx
  int v55; // r8d
  int v56; // edx
  _DWORD *v57; // rdx
  _DWORD *v58; // r8
  int v59; // eax
  signed __int32 v60; // ett
  __int64 v61; // rdx
  unsigned int v62; // ebx
  _QWORD *v63; // r12
  unsigned int v64; // r15d
  void *v65; // r14
  signed __int32 v66; // ett
  __int64 v67; // rdx
  int v68; // eax
  signed __int32 v69; // ett
  signed __int32 v70; // ett
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rdx
  signed __int32 v74; // ett
  int v75; // eax
  signed __int32 v76; // ett
  int v78; // r8d
  signed __int32 v79; // ett
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // [rsp+28h] [rbp-A9h] BYREF
  int v83; // [rsp+30h] [rbp-A1h]
  int v84; // [rsp+34h] [rbp-9Dh]
  struct OBJECT *v85; // [rsp+38h] [rbp-99h] BYREF
  struct tagDEVINFO *v86; // [rsp+40h] [rbp-91h]
  PVOID pv; // [rsp+48h] [rbp-89h]
  struct OBJECT *v88; // [rsp+50h] [rbp-81h] BYREF
  char *v89; // [rsp+58h] [rbp-79h]
  struct _GDIINFO *v90; // [rsp+60h] [rbp-71h]
  char *v91; // [rsp+68h] [rbp-69h]
  _QWORD v92[10]; // [rsp+78h] [rbp-59h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = -1;
  v12 = a6;
  v88 = a9;
  v86 = a8;
  v90 = a6;
  v84 = -1;
  v85 = 0LL;
  LODWORD(v82) = 0;
  if ( !a9 )
    return 0LL;
  v89 = (char *)v92;
  v91 = (char *)EngAllocMem(1u, 80 * *(_DWORD *)&a1->dmDeviceName[10] + 112, 0x76645647u);
  v14 = v91;
  if ( !v91 )
    return 0LL;
  pv = EngAllocMem(1u, 8 * *(_DWORD *)&a1->dmDeviceName[10], 0x73647647u);
  if ( !pv )
  {
LABEL_87:
    EngFreeMem(v14);
    return 0LL;
  }
  v15 = v91 + 112;
  *((_DWORD *)v91 + 4) = *(_DWORD *)&a1->dmDeviceName[10];
  v16 = 0;
  *((_QWORD *)v14 + 4) = a9;
  *((_DWORD *)v14 + 18) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 19) = 0x7FFFFFFF;
  *((_DWORD *)v14 + 20) = 0x80000000;
  *((_DWORD *)v14 + 21) = 0x80000000;
  v83 = 0;
  if ( *(_DWORD *)&a1->dmDeviceName[10] )
  {
    v17 = v92;
    v18 = -1;
    while ( 1 )
    {
      v19 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      if ( (*(_DWORD *)(*(_QWORD *)(v19 + 2568) + 160LL) & 4) != 0 )
      {
        v20 = (_OWORD *)(v19 + 2128);
        v21 = *(_DWORD *)(v19 + 2164) & 0x100;
        v85 = *(struct OBJECT **)&a1->dmDeviceName[20 * v16 + 16];
        LODWORD(v82) = v21;
        v22 = 2LL;
        v23 = v12;
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
        v27 = v86;
        *(_OWORD *)&v23->flTextCaps = v26;
        v28 = (_OWORD *)(v19 + 1816);
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
        v17 = v89;
        *(_OWORD *)v27 = *v28;
        *((_OWORD *)v27 + 1) = v28[1];
        *((_OWORD *)v27 + 2) = v28[2];
        *((_QWORD *)v27 + 6) = *((_QWORD *)v28 + 6);
      }
      v18 &= *(_DWORD *)(v19 + 1816);
      v30 = *(_DWORD *)(v19 + 2120) & v84;
      *v17 = v15;
      v17[1] = v15;
      *((_DWORD *)v15 + 4) = v16;
      v31 = *(_OWORD *)&a1->dmDeviceName[20 * v16 + 24];
      v84 = v30;
      *(_OWORD *)(v15 + 28) = v31;
      v32 = *(_QWORD *)&a1->dmDeviceName[20 * v16 + 16];
      *((_QWORD *)v15 + 6) = v32;
      *((_QWORD *)v15 + 7) = v32;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)(v15 + 56), (__int64)v17, 5 * v16);
      v33 = (char *)v92[0];
      *((_DWORD *)v15 + 18) = -*(_DWORD *)(v19 + 2576);
      *((_DWORD *)v15 + 19) = -*(_DWORD *)(v19 + 2580);
      v34 = *(_QWORD *)(v19 + 2544);
      v35 = v33;
      *((_DWORD *)v15 + 5) = 1;
      *((_QWORD *)v15 + 8) = (v34 + 24) & -(__int64)(v34 != 0);
      if ( v33 != v15 )
      {
        do
        {
          if ( (unsigned int)bIntersect((char *)v35 + 28, v15 + 28) )
          {
            *(_DWORD *)(*((_QWORD *)v15 + 7) + 1816LL) |= 0x8000000u;
            *((_DWORD *)v15 + 5) = 0;
          }
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != (_QWORD *)v15 );
        v14 = v91;
      }
      v36 = *((_DWORD *)v15 + 7);
      v17 = v15;
      v37 = *((_DWORD *)v14 + 18);
      v38 = v83;
      v89 = v15;
      if ( v37 >= v36 )
        v37 = v36;
      *((_DWORD *)v14 + 18) = v37;
      v39 = *((_DWORD *)v14 + 19);
      if ( v39 >= *((_DWORD *)v15 + 8) )
        v39 = *((_DWORD *)v15 + 8);
      *((_DWORD *)v14 + 19) = v39;
      v40 = *((_DWORD *)v14 + 20);
      if ( v40 <= *((_DWORD *)v15 + 9) )
        v40 = *((_DWORD *)v15 + 9);
      *((_DWORD *)v14 + 20) = v40;
      v41 = *((_DWORD *)v14 + 21);
      if ( v41 <= *((_DWORD *)v15 + 10) )
        v41 = *((_DWORD *)v15 + 10);
      v16 = v38 + 1;
      v15 += 80;
      *((_DWORD *)v14 + 21) = v41;
      v83 = v16;
      if ( v16 >= *(_DWORD *)&a1->dmDeviceName[10] )
        break;
      v12 = v90;
    }
    v83 = v18;
    v11 = v18;
    v9 = v88;
  }
  else
  {
    v33 = (char *)v92[0];
  }
  v42 = v90;
  v43 = v11 & 0xFFFEE7FF;
  v44 = v86;
  v90->ulHorzSize = -v90->ulHorzSize;
  v42->ulVertSize = -v42->ulVertSize;
  v45 = v43 | 0x80020;
  if ( !(_DWORD)v82 )
    v45 = v43;
  *(_DWORD *)v44 = v45;
  v46 = v85;
  *((_DWORD *)v44 + 76) = v84;
  *((_DWORD *)v14 + 16) = *((_DWORD *)v44 + 71);
  *(_QWORD *)v14 = v33;
  *((_QWORD *)v14 + 1) = v33;
  *((_QWORD *)v14 + 5) = v46;
  while ( v33 )
  {
    v47 = *((_QWORD *)v33 + 6);
    v48 = v33 == *(char **)v14;
    _m_prefetchw((const void *)(v47 + 40));
    if ( v48 )
    {
      do
        v49 = *(_DWORD *)(v47 + 40);
      while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 40), v49 | 0x10000000, v49) );
      v50 = 0LL;
    }
    else
    {
      do
        v51 = *(_DWORD *)(v47 + 40);
      while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)(v47 + 40), v51 & 0xEFFFFFFF, v51) );
      v50 = *(_QWORD *)(*(_QWORD *)v14 + 48LL);
    }
    *(_QWORD *)(v47 + 32) = v50;
    if ( (struct OBJECT *)v47 == v46 )
    {
      *((_DWORD *)v33 + 6) = 0;
    }
    else
    {
      v52 = *(_DWORD *)(v47 + 2100) - *((_DWORD *)v14 + 16);
      *((_DWORD *)v33 + 6) = v52;
      if ( !v52 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v88, *((HPALETTE *)v44 + 37));
        EPALOBJ::EPALOBJ((EPALOBJ *)&v85, *(HPALETTE *)(v47 + 2112));
        v53 = v88;
        v54 = v85;
        if ( !v88 )
        {
          if ( v85 )
          {
            HmgDecrementShareReferenceCountEx(v85, 0LL);
LABEL_84:
            if ( v53 )
              HmgDecrementShareReferenceCountEx(v53, 0LL);
          }
          EngFreeMem(pv);
          goto LABEL_87;
        }
        if ( !v85 )
          goto LABEL_84;
        v55 = *((_DWORD *)v85 + 6) & 0x1F;
        v56 = *((_DWORD *)v88 + 6) & 0x1F;
        *((_DWORD *)v33 + 6) = v56 != v55;
        if ( v56 == v55 && (*((_DWORD *)v53 + 6) & 0x1F) == 2 )
        {
          v57 = (_DWORD *)*((_QWORD *)v54 + 14);
          v58 = (_DWORD *)*((_QWORD *)v53 + 14);
          if ( *v58 != *v57 || v58[1] != v57[1] || (v59 = 0, v58[2] != v57[2]) )
            v59 = 1;
          *((_DWORD *)v33 + 6) = v59;
        }
        HmgDecrementShareReferenceCountEx(v54, 0LL);
        HmgDecrementShareReferenceCountEx(v53, 0LL);
        v52 = *((_DWORD *)v33 + 6);
        v44 = v86;
      }
      if ( v52 )
      {
        *(_DWORD *)&a1->dmDeviceName[8] |= 1u;
        gbMultiMonMismatchColor = 1;
      }
    }
    v33 = *(char **)v33;
  }
  *((_DWORD *)v9 + 644) = *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 645) = *((_DWORD *)v14 + 19);
  *((_DWORD *)v9 + 428) = *((_DWORD *)v14 + 20) - *((_DWORD *)v14 + 18);
  *((_DWORD *)v9 + 429) = *((_DWORD *)v14 + 21) - *((_DWORD *)v14 + 19);
  _m_prefetchw((char *)v9 + 40);
  do
    v60 = *((_DWORD *)v9 + 10);
  while ( v60 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v60 | 0x20000, v60) );
  v61 = *(unsigned int *)&a1->dmDeviceName[10];
  v62 = 0;
  v63 = pv;
  v64 = 0;
  if ( (_DWORD)v61 )
  {
    v65 = 0LL;
    do
    {
      v82 = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      if ( (*(_DWORD *)(v82 + 1816) & 0x8000000) != 0 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v66 = *((_DWORD *)v9 + 10);
        while ( v66 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v66 | 0x1000000, v66) );
        v67 = v82;
        v68 = *(_DWORD *)(v82 + 2120);
        if ( (v68 & 0x1000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v69 = *((_DWORD *)v9 + 10);
          while ( v69 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v69 | 0x2000000, v69) );
          *((_DWORD *)v9 + 530) |= 0x1000u;
          v68 = *(_DWORD *)(v67 + 2120);
        }
        if ( (v68 & 0x8000) != 0 )
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v70 = *((_DWORD *)v9 + 10);
          while ( v70 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v70 | 0x20000000, v70) );
        }
        v71 = v62++;
        v63[v71] = *(_QWORD *)&a1->dmDeviceName[20 * v64 + 16];
      }
      LOBYTE(v72) = PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v82);
      if ( !v72 && *(_DWORD *)(v73 + 2604) != 5 )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v74 = *((_DWORD *)v9 + 10);
        while ( v74 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v74 | 0x8000000, v74) );
        v73 = v82;
      }
      v75 = *((_DWORD *)v9 + 10);
      if ( (v75 & 0x4000000) == 0 && ((*(_DWORD *)(v73 + 2120) & 0x8000) == 0 || !*(_QWORD *)(v73 + 2760)) )
      {
        if ( !v65 || PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v82) == v65 )
        {
          v65 = PDEVOBJ::pRenderAdapter((PDEVOBJ *)&v82);
          v75 = v78;
        }
        else
        {
          _m_prefetchw((char *)v9 + 40);
          do
            v76 = *((_DWORD *)v9 + 10);
          while ( v76 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v76 | 0x4000000, v76) );
          v75 = *((_DWORD *)v9 + 10);
        }
      }
      if ( (v75 & 0x40000000) == 0 && !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v82) )
      {
        _m_prefetchw((char *)v9 + 40);
        do
          v79 = *((_DWORD *)v9 + 10);
        while ( v79 != _InterlockedCompareExchange((volatile signed __int32 *)v9 + 10, v79 | 0x40000000, v79) );
      }
      v61 = *(unsigned int *)&a1->dmDeviceName[10];
      ++v64;
    }
    while ( v64 < (unsigned int)v61 );
    v14 = v91;
    if ( (_DWORD)v61 )
    {
      do
      {
        v80 = *(_QWORD *)&a1->dmDeviceName[20 * v10 + 16];
        if ( (*(_DWORD *)(v80 + 1816) & 0x8000000) == 0 )
        {
          v81 = v62++;
          v63[v81] = v80;
        }
        v61 = *(unsigned int *)&a1->dmDeviceName[10];
        ++v10;
      }
      while ( v10 < (unsigned int)v61 );
    }
  }
  vSpEnableMultiMon(v9, v61, v63);
  return (struct DHPDEV__ *)v14;
}
