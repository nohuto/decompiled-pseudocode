/*
 * XREFs of ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0256A90
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002BE10 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C012EAEC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C012EB44 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0142F08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0256564 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02565AC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025666C (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02569E8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02573B8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     EngControlSprites @ 0x1C0265420 (EngControlSprites.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0282168 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C0297E04 (-bMakeXlate@EXLATEOBJ@@QEAAHPEAGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 */

__int64 __fastcall iOpenGLExtEscape(struct DCOBJ *a1, int a2, int a3, void *a4, int a5, void *a6)
{
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v11; // r8
  struct SURFACE *v12; // r14
  HDEV DeviceHdev; // r8
  WNDOBJ *v14; // rbx
  ULONG v15; // ecx
  HDC *v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r13d
  WNDOBJ *v20; // rdx
  ULONG v21; // ecx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  _WORD *v25; // rdx
  int Xlate; // eax
  XLATEOBJ *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  struct REGION *v30; // rax
  struct REGION *v31; // rax
  HDEV v33; // [rsp+38h] [rbp-5B0h] BYREF
  _QWORD v34[2]; // [rsp+40h] [rbp-5A8h] BYREF
  struct SURFACE *v35; // [rsp+50h] [rbp-598h]
  void *Src; // [rsp+58h] [rbp-590h]
  void *v37; // [rsp+60h] [rbp-588h]
  struct _RECTL v38; // [rsp+70h] [rbp-578h] BYREF
  HDEV *Parameter; // [rsp+80h] [rbp-568h] BYREF
  char *v40; // [rsp+88h] [rbp-560h]
  int v41; // [rsp+90h] [rbp-558h]
  int v42; // [rsp+94h] [rbp-554h]
  void *v43; // [rsp+98h] [rbp-550h]
  int v44; // [rsp+A0h] [rbp-548h]
  void *v45; // [rsp+A8h] [rbp-540h]
  unsigned int v46; // [rsp+B0h] [rbp-538h]
  _BYTE v47[80]; // [rsp+C0h] [rbp-528h] BYREF
  WNDOBJ *pwo; // [rsp+110h] [rbp-4D8h]
  __int64 v49; // [rsp+120h] [rbp-4C8h] BYREF
  int v50; // [rsp+128h] [rbp-4C0h]
  int v51; // [rsp+12Ch] [rbp-4BCh]
  __int64 *v52[6]; // [rsp+130h] [rbp-4B8h] BYREF
  char v53[4]; // [rsp+160h] [rbp-488h] BYREF
  struct _RECTL v54; // [rsp+164h] [rbp-484h] BYREF
  DC *v55[32]; // [rsp+200h] [rbp-3E8h] BYREF
  char v56; // [rsp+300h] [rbp-2E8h] BYREF
  _BYTE v57[512]; // [rsp+3A0h] [rbp-248h] BYREF

  Src = a4;
  v37 = a6;
  v8 = 0;
  `vector constructor iterator'((char *)v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::DCOBJ);
  v9 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    EngSetLastError(6u);
LABEL_3:
    `vector destructor iterator'((char *)v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
    return 0LL;
  }
  v34[0] = 0LL;
  v33 = *(HDEV *)(v9 + 48);
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47, a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 || (v47[24] & 1) == 0 && !(unsigned int)XDCOBJ::bFullScreen(a1) )
    goto LABEL_5;
  v12 = XDCOBJ::pSurfaceEff(a1);
  v35 = v12;
  if ( ((_DWORD)v33[8] & 0x20000) != 0 )
  {
    v38 = *(struct _RECTL *)(v11 + 1448);
    DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v11 + 48), &v38, (struct EWNDOBJ *)pwo);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v33 + 321) )
      {
        v12 = (struct SURFACE *)*((_QWORD *)DeviceHdev + 321);
        v35 = v12;
      }
      v33 = DeviceHdev;
    }
  }
  if ( !*((_QWORD *)v33 + 362) || ((_DWORD)v33[8] & 0x8000) != 0 )
  {
LABEL_5:
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v34);
    goto LABEL_3;
  }
  *(_QWORD *)&v38.left = ghsemSprite;
  GreAcquireSemaphore(ghsemSprite);
  v14 = 0LL;
  v49 = 0LL;
  v52[4] = 0LL;
  LODWORD(v52[0]) = 0;
  Parameter = &v33;
  if ( v12 )
    v40 = (char *)v12 + 24;
  else
    v40 = 0LL;
  v41 = a2;
  v42 = a3;
  v44 = a5;
  v45 = v37;
  if ( a2 != 4352 )
  {
    v43 = Src;
    if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      v8 = v46;
    goto LABEL_69;
  }
  if ( (unsigned __int64)a3 >= 0x18 )
  {
    if ( (unsigned __int64)a3 > 0x98 )
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
      v16 = (HDC *)&v56;
    }
    memmove(v16, Src, a3);
    if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
    {
      v18 = *((unsigned int *)v16 + 2);
      if ( (unsigned int)v18 > 0x10 )
      {
        v19 = a3;
      }
      else
      {
        v19 = a3;
        if ( (unsigned int)a3 >= (unsigned __int64)(8 * v18 + 24) )
        {
          a3 = LookUpWndobjs(a1, v55, v16 + 3, v18);
          if ( a3 < 0 )
            goto LABEL_65;
          goto LABEL_35;
        }
      }
      v21 = 8;
      goto LABEL_33;
    }
    v19 = a3;
LABEL_35:
    if ( (*((_DWORD *)v16 + 1) & 2) != 0 )
    {
      v22 = *((_DWORD *)v33 + 531);
      if ( (unsigned int)(v22 - 2) > 1 )
        goto LABEL_47;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
      if ( v17 )
      {
        v23 = 16;
        if ( v22 != 2 )
          v23 = 256;
        v24 = 0;
        v25 = v57;
        do
          *v25++ = v24++;
        while ( v24 < v23 );
        Xlate = EXLATEOBJ::bMakeXlate(v34, v57, v17, v35, v23, v23);
        v27 = 0LL;
        if ( Xlate )
          v27 = (XLATEOBJ *)v34[0];
      }
      else
      {
        v27 = 0LL;
      }
      if ( !v27 )
LABEL_47:
        v27 = xloIdent;
    }
    else
    {
      v27 = 0LL;
    }
    v16[2] = (HDC)v27;
    v28 = *((_DWORD *)v16 + 1);
    if ( (v28 & 4) != 0 )
      goto LABEL_58;
    if ( (v28 & 1) == 0 )
    {
      v16[1] = 0LL;
      goto LABEL_58;
    }
    v20 = pwo;
    if ( pwo && (pwo[3].coClient.rclBounds.bottom & 0x8000000) == 0 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)&pwo[3].coClient.iUniq + 32LL);
      if ( v29 != *(_QWORD *)(*(_QWORD *)a1 + 512LL)
        && *(_QWORD *)(*(_QWORD *)(v29 + 48) + 16LL) != *(_QWORD *)(*(_QWORD *)a1 + 48LL) )
      {
LABEL_65:
        if ( v19 > 0x98 )
          Win32FreePool(v16, v20, v17);
        goto LABEL_69;
      }
      v16[1] = (HDC)pwo;
LABEL_58:
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
        v30 = XDCOBJ::prgnEffRao((DC **)a1);
        v49 = *((_QWORD *)v30 + 11);
        v50 = *((_DWORD *)v30 + 24);
        v51 = *((_DWORD *)v30 + 25);
        v31 = XDCOBJ::prgnEffRao((DC **)a1);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v53, v31, (struct ERECTL *)&v49, 0);
        DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v52, a1, &v54);
      }
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 512LL) + 92LL);
      v43 = v16;
      if ( KeExpandKernelStackAndCallout(iOpenGLExtEscapeHelper, &Parameter, 0x11800uLL) >= 0 )
      {
        v8 = v46;
        if ( (*((_DWORD *)v16 + 1) & 4) != 0 )
          v8 = (a3 << 16) | (unsigned __int16)v46;
      }
      goto LABEL_65;
    }
    v21 = 6;
LABEL_33:
    EngSetLastError(v21);
    goto LABEL_65;
  }
  v15 = 87;
LABEL_21:
  EngSetLastError(v15);
LABEL_69:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v52);
  if ( v14 )
    EngControlSprites(v14, 2u);
  SEMOBJ::vUnlock((SEMOBJ *)&v38);
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v47);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v34);
  `vector destructor iterator'((char *)v55, 16LL, 16LL, (void (__fastcall *)(char *))DCOBJ::~DCOBJ);
  return v8;
}
