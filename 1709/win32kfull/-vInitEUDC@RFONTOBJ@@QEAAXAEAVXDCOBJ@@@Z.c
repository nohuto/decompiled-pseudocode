/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0034CC8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0007B50 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0008138 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C000832C (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0034B38 (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C003BF88 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  _BYTE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r12
  unsigned int v19; // ecx
  struct PFE * near *v20; // r15
  BOOL v21; // r15d
  unsigned int v22; // ecx
  struct _LIST_ENTRY *LinkedFontList; // rax
  __int64 v24; // rbx
  struct _LIST_ENTRY *i; // r15
  int Blink; // ecx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  struct PFE *v35; // rax
  __int64 v36; // r15
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 *v41; // rbx
  __int64 v42; // rdi
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v44; // [rsp+38h] [rbp-C8h]
  _BYTE *v45; // [rsp+40h] [rbp-C0h] BYREF
  struct PFE *v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v50[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  struct LFONT *v52; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v53[2]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v54[2]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v55[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v56[80]; // [rsp+100h] [rbp+0h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 320) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 112);
  v51 = v6;
  v49 = v6;
  if ( !*(_QWORD *)(v5 + 736) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 744)
    || (v7 = *(_QWORD *)(v6 + 128)) != 0
    && (!*(_QWORD *)(v5 + 752) || *(_DWORD *)(v5 + 840) != 1 || *(_DWORD *)(v5 + 844) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_BYTE **)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 2176);
    v45 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v52, v9, (struct PDEVOBJ *)&v45);
    v10 = *(HDC **)a2;
    v45 = *(_BYTE **)this;
    DCOBJ::DCOBJ((DCOBJ *)v53, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v55,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v45,
      (struct DCOBJ *)v53);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v54, a2);
    v13 = *(_QWORD *)this;
    v14 = v56;
    v15 = *(_QWORD *)(v6 + 128);
    v16 = 0LL;
    v44 = 0;
    v45 = v56;
    v17 = *(_QWORD *)(v13 + 736);
    v18 = *(_QWORD *)(v13 + 744);
    v47 = v17;
    v48 = v18;
    if ( v15 )
    {
      v11 = *(_DWORD *)(v13 + 840) == 0;
      v44 = *(_DWORD *)(v13 + 840) == 0;
      if ( *(_QWORD *)(v13 + 752) && *(_DWORD *)(v13 + 844) != *(_DWORD *)(v15 + 104) )
      {
        v31 = 0LL;
        if ( *(_DWORD *)(v13 + 848) )
        {
          do
          {
            v32 = *(_QWORD *)(*(_QWORD *)this + 752LL);
            if ( *(_QWORD *)(v32 + 8 * v31) )
            {
              v46 = *(struct PFE **)(v32 + 8 * v31);
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v46, 0LL);
              v33 = *(_QWORD *)this;
              v46 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v33 + 752) + 8 * v31) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v46);
            }
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
        }
        v34 = *(_QWORD *)(*(_QWORD *)this + 752LL);
        if ( v34 != *(_QWORD *)this + 760LL )
          Win32FreePool(v34, v11, v12);
        v17 = v47;
        v11 = v44;
        *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      }
      if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
        v11 = 1LL;
      v44 = v11;
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 32LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
    }
    v19 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
    LODWORD(v46) = v19;
    if ( !v17 )
    {
      v20 = (&gappfeSysEUDC)[v19];
      if ( v20 )
      {
        v35 = v20[4];
        v43 = 0LL;
        v50[0] = v35;
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v50) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v43, a2, (struct PFE *)v20, (struct _EUDCLOGFONT *)v54);
          v36 = v47;
          if ( v43 )
            v36 = v43;
          v47 = v36;
        }
        else
        {
          v47 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        v19 = (unsigned int)v46;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v18 )
      {
LABEL_21:
        v21 = v44;
        if ( v44 )
        {
          v22 = *(_DWORD *)(*(_QWORD *)(v6 + 128) + 100LL);
          v14 = v22 > 0xA ? (_BYTE *)PALLOCMEM2(8 * v22) : v56;
          v45 = v14;
          if ( v14 )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v49);
            v24 = (unsigned int)v46;
            for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v49); i = i->Flink )
            {
              Blink = (int)i[1].Blink;
              v55[0] = v54[0];
              v55[1] = v54[1];
              if ( Blink )
                HIDWORD(v55[0]) = Blink * HIDWORD(v54[0]) / SHIDWORD(i[1].Blink);
              v46 = (struct PFE *)*((_QWORD *)&i[2].Flink + (*((_QWORD *)&i[2].Flink + v24) != 0LL ? v24 : 0));
              v50[0] = *((_QWORD *)v46 + 4);
              if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v50) )
              {
                v43 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v43, a2, v46, (struct _EUDCLOGFONT *)v55);
                if ( v43 )
                {
                  *(_QWORD *)&v14[8 * v16] = v43;
                  v16 = (unsigned int)(v16 + 1);
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
              }
            }
            v6 = v51;
            v18 = v48;
            v21 = v44;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 32LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
        }
        if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v47;
          *(_QWORD *)(*(_QWORD *)this + 744LL) = v18;
          if ( v21 )
          {
            if ( (_DWORD)v16 )
            {
              if ( (unsigned int)v16 > 0xA )
                *(_QWORD *)(*(_QWORD *)this + 752LL) = v14;
              else
                *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
              v27 = 0LL;
              v28 = (unsigned int)v16;
              do
              {
                *(_QWORD *)(v27 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v14[v27];
                v27 += 8LL;
                --v28;
              }
              while ( v28 );
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
            }
            *(_DWORD *)(*(_QWORD *)this + 848LL) = v16;
            v29 = *(_QWORD *)(v6 + 128);
            if ( v29 )
              v30 = *(_DWORD *)(v29 + 104);
            else
              v30 = 0;
            *(_DWORD *)(*(_QWORD *)this + 844LL) = v30;
            *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
            RFONTOBJ::UpdateFontLinksLockOrder(this);
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v14 && v14 && v14 != v56 )
            Win32FreePool(v14, v11, v12);
          *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x200u;
        }
        else
        {
          v43 = v47;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v43);
          v43 = v18;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v43);
          if ( (_DWORD)v16 )
          {
            v41 = (__int64 *)v14;
            v42 = (unsigned int)v16;
            do
            {
              v43 = *v41;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v43);
              v43 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
              ++v41;
              --v42;
            }
            while ( v42 );
            v14 = v45;
          }
          if ( v14 != v56 )
            Win32FreePool(v14, v39, v40);
          v43 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
          v43 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        }
        if ( v53[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v53);
        v45 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        if ( v52 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v52);
        return;
      }
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v19);
      v38 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v43 = 0LL;
        v50[0] = *((_QWORD *)EUDCDefaultFontPFE + 4);
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v50) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v43, a2, v38, (struct _EUDCLOGFONT *)v54);
          if ( v43 )
            v18 = v43;
        }
        v48 = v18;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        goto LABEL_21;
      }
    }
    v18 = 0LL;
    v48 = 0LL;
    goto LABEL_21;
  }
}
