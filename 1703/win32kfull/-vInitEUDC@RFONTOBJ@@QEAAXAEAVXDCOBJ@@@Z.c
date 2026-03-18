/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C008C5D4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C008EDA0 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0002E80 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C0003650 (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00301CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  struct XDCOBJ *v2; // r14
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rsi
  __int64 v13; // r9
  unsigned int v14; // r15d
  __int64 v15; // r13
  __int64 v16; // rax
  BOOL v17; // r12d
  int v18; // r8d
  BOOL v19; // r12d
  struct PFE * near *v20; // r14
  unsigned int v21; // r14d
  BOOL v22; // r12d
  __int64 v23; // rax
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct XDCOBJ *v25; // rbx
  unsigned int v26; // r9d
  struct _LIST_ENTRY *i; // r12
  int Blink; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // ecx
  unsigned int v34; // r14d
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r14
  char v39; // cl
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 *v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v46; // [rsp+38h] [rbp-C8h]
  _BYTE *v47; // [rsp+40h] [rbp-C0h] BYREF
  struct PFE *v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  struct XDCOBJ *v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h]
  struct LFONT *v55; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v56[16]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v57[2]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v58[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v59[80]; // [rsp+100h] [rbp+0h] BYREF

  v2 = a2;
  v51 = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 320) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 112);
  v54 = v6;
  v52 = v6;
  if ( !*(_QWORD *)(v5 + 736) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 744)
    || (v7 = *(_QWORD *)(v6 + 128)) != 0
    && (!*(_QWORD *)(v5 + 752) || *(_DWORD *)(v5 + 840) != 1 || *(_DWORD *)(v5 + 844) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_BYTE **)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 2176);
    v47 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v55, v9, (struct PDEVOBJ *)&v47);
    v10 = *(HDC **)v2;
    v47 = *(_BYTE **)this;
    DCOBJ::DCOBJ((DCOBJ *)v56, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v58,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v47,
      (struct DCOBJ *)v56);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v57, v2);
    v11 = *(_QWORD *)this;
    v12 = v59;
    v13 = 0LL;
    v47 = v59;
    v14 = 0;
    v46 = 0;
    v15 = *(_QWORD *)(v11 + 744);
    v50 = *(_QWORD *)(v11 + 736);
    v16 = *(_QWORD *)(v6 + 128);
    v49 = v15;
    if ( v16 )
    {
      v17 = *(_DWORD *)(v11 + 840) == 0;
      v46 = v17;
      if ( *(_QWORD *)(v11 + 752) && *(_DWORD *)(v11 + 844) != *(_DWORD *)(v16 + 104) )
      {
        v34 = 0;
        if ( *(_DWORD *)(v11 + 848) )
        {
          do
          {
            v35 = *(_QWORD *)(*(_QWORD *)this + 752LL);
            if ( *(_QWORD *)(v35 + 8LL * v34) )
            {
              v48 = *(struct PFE **)(v35 + 8LL * v34);
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v48, 0LL);
              v36 = *(_QWORD *)(*(_QWORD *)this + 752LL);
              v48 = 0LL;
              *(_QWORD *)(v36 + 8LL * v34) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
              v13 = 0LL;
            }
            ++v34;
          }
          while ( v34 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
          v17 = v46;
        }
        v37 = *(_QWORD *)(*(_QWORD *)this + 752LL);
        if ( v37 != *(_QWORD *)this + 760LL )
        {
          Win32FreePool(v37);
          v13 = 0LL;
        }
        v2 = v51;
        *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      }
      if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
        v17 = 1;
      v46 = v17;
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 32LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
      v13 = 0LL;
    }
    LODWORD(v48) = *(_DWORD *)(*(_QWORD *)this + 852LL);
    v18 = (int)v48;
    v19 = (_DWORD)v48 != 0;
    if ( !v50 )
    {
      v20 = (&gappfeSysEUDC)[(_DWORD)v48 != 0];
      if ( v20 )
      {
        v53[0] = v20[4];
        v45 = 0LL;
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v45, v51, (struct PFE *)v20, (struct _EUDCLOGFONT *)v57);
          v38 = v50;
          if ( v45 )
            v38 = v45;
          v50 = v38;
        }
        else
        {
          v50 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        v18 = (int)v48;
        v13 = 0LL;
      }
    }
    v21 = v19;
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v15 )
      {
LABEL_22:
        v22 = v46;
        if ( v46 )
        {
          v23 = *(_QWORD *)(v6 + 128);
          if ( *(_DWORD *)(v23 + 100) > 0xAu )
          {
            v12 = PALLOCMEM2((unsigned int)(8 * *(_DWORD *)(v23 + 100)), 1718382187LL, 1);
            v13 = 0LL;
          }
          else
          {
            v12 = v59;
          }
          v47 = v12;
          if ( v12 )
          {
            LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v52);
            v25 = v51;
            v14 = v26;
            for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v52); i = i->Flink )
            {
              Blink = (int)i[1].Blink;
              v58[0] = v57[0];
              v58[1] = v57[1];
              if ( Blink )
                HIDWORD(v58[0]) = Blink * HIDWORD(v57[0]) / SHIDWORD(i[1].Blink);
              v48 = (struct PFE *)*((_QWORD *)&i[2].Flink + (*((_QWORD *)&i[2].Flink + v21) != 0LL ? v21 : 0));
              v53[0] = *((_QWORD *)v48 + 4);
              if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
              {
                v45 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v45, v25, v48, (struct _EUDCLOGFONT *)v58);
                if ( v45 )
                {
                  v29 = v14++;
                  *(_QWORD *)&v12[8 * v29] = v45;
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              }
            }
            v6 = v54;
            v15 = v49;
            v22 = v46;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 48LL) + 32LL) & 0x8000) != 0 )
        {
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
          GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
          v13 = 0LL;
        }
        if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 736LL) = v50;
          *(_QWORD *)(*(_QWORD *)this + 744LL) = v15;
          if ( v22 )
          {
            if ( v14 )
            {
              if ( v14 > 0xA )
                *(_QWORD *)(*(_QWORD *)this + 752LL) = v12;
              else
                *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
              v30 = v13;
              v31 = v14;
              do
              {
                *(_QWORD *)(v30 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v12[v30];
                v30 += 8LL;
                --v31;
              }
              while ( v31 );
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)this + 752LL) = v13;
            }
            *(_DWORD *)(*(_QWORD *)this + 848LL) = v14;
            v32 = *(_QWORD *)(v6 + 128);
            if ( v32 )
              v33 = *(_DWORD *)(v32 + 104);
            else
              v33 = v13;
            *(_DWORD *)(*(_QWORD *)this + 844LL) = v33;
            *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
            RFONTOBJ::UpdateFontLinksLockOrder(this);
          }
          if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v12 && v12 && v12 != v59 )
            Win32FreePool(v12);
          *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x200u;
        }
        else
        {
          v45 = v50;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          v45 = v15;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
          if ( v14 )
          {
            v43 = (__int64 *)v12;
            v44 = v14;
            do
            {
              v45 = *v43;
              RFONTOBJ::vMakeInactive((RFONTOBJ *)&v45);
              v45 = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
              ++v43;
              --v44;
            }
            while ( v44 );
            v12 = v47;
          }
          if ( v12 != v59 )
            Win32FreePool(v12);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
          v45 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        }
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v56);
        v47 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        if ( v55 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v55);
        return;
      }
      v39 = *(_BYTE *)(*(_QWORD *)&v58[0] + 44LL);
      v40 = *(unsigned __int8 *)(*(_QWORD *)&v58[0] + 45LL) >> 4;
      if ( (!v39 || v39 == 2 || v39 == -1)
        && ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v39 + 2) & 0xF) != 0 )
      {
        if ( v40 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v40) )
          v40 = 6;
        if ( v18 )
        {
          v41 = 83LL * v40;
          if ( !*(_QWORD *)((char *)&unk_1C0327800 + v41 * 8) )
          {
            if ( qword_1C03277F8[v41] )
              v21 = 0;
          }
        }
        v45 = 0LL;
        v42 = qword_1C03277F8[83 * v40 + v21];
        if ( v42 )
        {
          v53[0] = *(_QWORD *)(v42 + 32);
          if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v53) )
          {
            RFONTOBJ::vInit((RFONTOBJ *)&v45, v51, (struct PFE *)v42, (struct _EUDCLOGFONT *)v57);
            v15 = v49;
            if ( v45 )
              v15 = v45;
            v49 = v15;
          }
          else
          {
            v15 = 0LL;
            v49 = 0LL;
          }
        }
        else
        {
          v15 = v49;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
        v13 = 0LL;
        goto LABEL_22;
      }
    }
    v49 = 0LL;
    v15 = 0LL;
    goto LABEL_22;
  }
}
