/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F36A0 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0128CE4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0128D3C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013C0B0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0254A94 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0254ADC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0254B9C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0254F18 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02558C8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0266210 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C029B65C (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, unsigned int a3, void *a4, int a5, void *a6)
{
  unsigned int v8; // r15d
  __int64 v9; // rax
  XLATEOBJ *v11; // r13
  __int64 v12; // r8
  HDEV DeviceHdev; // r8
  WNDOBJ *v14; // rbx
  ULONG v15; // ecx
  HDC *v16; // r14
  __int64 v17; // r9
  ULONG v18; // ecx
  int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // ecx
  _WORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  struct REGION *v26; // rax
  struct REGION *v27; // rax
  HDEV v30; // [rsp+38h] [rbp-5B0h] BYREF
  XLATEOBJ *v31; // [rsp+40h] [rbp-5A8h] BYREF
  int v32; // [rsp+48h] [rbp-5A0h]
  struct SURFACE *v33; // [rsp+50h] [rbp-598h]
  void *Src; // [rsp+58h] [rbp-590h]
  void *v35; // [rsp+60h] [rbp-588h]
  struct _RECTL v36; // [rsp+70h] [rbp-578h] BYREF
  HDEV *Parameter; // [rsp+80h] [rbp-568h] BYREF
  char *v38; // [rsp+88h] [rbp-560h]
  int v39; // [rsp+90h] [rbp-558h]
  unsigned int v40; // [rsp+94h] [rbp-554h]
  void *v41; // [rsp+98h] [rbp-550h]
  int v42; // [rsp+A0h] [rbp-548h]
  void *v43; // [rsp+A8h] [rbp-540h]
  unsigned int v44; // [rsp+B0h] [rbp-538h]
  _BYTE v45[80]; // [rsp+C0h] [rbp-528h] BYREF
  WNDOBJ *pwo; // [rsp+110h] [rbp-4D8h]
  __int64 v47; // [rsp+120h] [rbp-4C8h] BYREF
  int v48; // [rsp+128h] [rbp-4C0h]
  int v49; // [rsp+12Ch] [rbp-4BCh]
  __int64 *v50[6]; // [rsp+130h] [rbp-4B8h] BYREF
  char v51[4]; // [rsp+160h] [rbp-488h] BYREF
  struct _RECTL v52; // [rsp+164h] [rbp-484h] BYREF
  DC *v53[32]; // [rsp+200h] [rbp-3E8h] BYREF
  char v54; // [rsp+300h] [rbp-2E8h] BYREF
  _BYTE v55[512]; // [rsp+3A0h] [rbp-248h] BYREF

  Src = a4;
  v35 = a6;
  v8 = 0;
  v32 = 0;
  `vector constructor iterator'((char *)v53, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'((char *)v53, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v31 = 0LL;
  v11 = 0LL;
  v30 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v45[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v33 = XDCOBJ::pSurfaceEff(a1);
  if ( ((_DWORD)v30[8] & 0x20000) != 0 )
  {
    v36 = *(struct _RECTL *)(v12 + 1448);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v12 + 48), &v36, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v30 + 321) )
        v33 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 321);
      v30 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v30 + 362) || ((_DWORD)v30[8] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
    goto LABEL_3;
  }
  *(_QWORD *)&v36.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v47 = 0LL;
  v50[4] = 0LL;
  LODWORD(v50[0]) = 0;
  Parameter = &v30;
  if ( v33 )
    v38 = (char *)v33 + 24;
  else
    v38 = 0LL;
  v39 = a2;
  v40 = a3;
  v42 = a5;
  v43 = v35;
  if ( a2 != 4352 )
  {
    v41 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v44;
    goto LABEL_65;
  }
  if ( a3 >= 0x18 )
  {
    if ( a3 > 0x98 )
    {
      v16 = (HDC *)PALLOCMEM2(a3, 1818718023LL, 0);
      if ( !v16 )
      {
        v15 = 8;
        goto LABEL_21;
      }
    }
    else
    {
      v16 = (HDC *)&v54;
    }
    memmove(v16, Src, (int)a3);
    if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
    {
      v17 = *((unsigned int *)v16 + 2);
      if ( (unsigned int)v17 > 0x10 || a3 < (unsigned __int64)(8 * v17 + 24) )
      {
        v18 = 8;
        goto LABEL_32;
      }
      a2 = LookUpWndobjs(a1, v53, v16 + 3, v17);
      if ( a2 < 0 )
        goto LABEL_61;
    }
    if ( (*((_DWORD *)v16 + 1) & 2) != 0 )
    {
      v19 = *((_DWORD *)v30 + 531);
      if ( (unsigned int)(v19 - 2) > 1 )
        goto LABEL_44;
      v20 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v20 )
      {
        v21 = 16;
        if ( v19 != 2 )
          v21 = 256;
        v22 = 0;
        v23 = v55;
        do
          *v23++ = v22++;
        while ( v22 < v21 );
        if ( (unsigned int)EXLATEOBJ::bMakeXlate(&v31, v55, v20, v33, v21, v21) )
          v11 = v31;
      }
      if ( !v11 )
LABEL_44:
        v11 = xloIdent;
    }
    v16[2] = (HDC)v11;
    v24 = *((_DWORD *)v16 + 1);
    if ( (v24 & 4) != 0 )
      goto LABEL_54;
    if ( (v24 & 1) == 0 )
    {
      v16[1] = 0LL;
      goto LABEL_54;
    }
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v25 != *(_QWORD *)(*(_QWORD *)a1 + 512LL)
        && *(_QWORD *)(*(_QWORD *)(v25 + 48) + 16LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
LABEL_61:
        if ( a3 > 0x98 )
          Win32FreePool(v16);
        goto LABEL_65;
      }
      v16[1] = (HDC)pwo;
LABEL_54:
      if ( pwo )
      {
        if ( (pwo[3].coClient.rclBounds.bottom & 0x80u) == 0 )
        {
          v14 = pwo;
          EngControlSprites(pwo, 1u);
        }
      }
      else
      {
        v26 = XDCOBJ::prgnEffRao((DC **)a1);
        v47 = *((_QWORD *)v26 + 11);
        v48 = *((_DWORD *)v26 + 24);
        v49 = *((_DWORD *)v26 + 25);
        v27 = XDCOBJ::prgnEffRao((DC **)a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v51, v27, (struct ERECTL *)&v47, 0);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v50, a1, &v52);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 92LL);
      v41 = v16;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v8 = v44;
        if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
          v8 = (a2 << 16) | (unsigned __int16)v44;
      }
      goto LABEL_61;
    }
    v18 = 6;
LABEL_32:
    EngSetLastError(v18);
    goto LABEL_61;
  }
  v15 = 87;
LABEL_21:
  EngSetLastError(v15);
LABEL_65:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v50);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v36);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v45);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v31);
  `vector destructor iterator'((char *)v53, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
