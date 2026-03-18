/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0056340 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C005C0F4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00EACD4 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0021448 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C002741C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C0027AF4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00299AC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0029AA0 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C0029ACC (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C002A30C (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C002C368 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C002C4C0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C002C614 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00325F8 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C005B7BC (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C0101F9C (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadFonts(
        PUBLIC_PFTOBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *a5,
        size_t a6,
        unsigned int *a7,
        unsigned int a8,
        struct PFF **a9,
        unsigned int a10,
        int a11,
        struct _EUDCLOAD *a12)
{
  struct _EUDCLOAD *v12; // rsi
  __int64 result; // rax
  __int64 v14; // r14
  BOOL v15; // ebx
  PUBLIC_PFTOBJ *v17; // r12
  unsigned int v18; // edi
  unsigned int *v19; // r15
  unsigned int v20; // r8d
  struct PFF *v21; // rax
  struct PFF **v22; // rbx
  char v23; // di
  unsigned int v24; // eax
  struct PFF *v25; // r13
  void **v26; // rbx
  __int64 v27; // r13
  struct _FONTFILEVIEW **v28; // rsi
  const WCHAR *v29; // rcx
  struct _FONTFILEVIEW *v30; // r15
  void **v31; // r12
  void **v32; // rax
  struct _FONTFILEVIEW **v33; // rbx
  signed __int64 v34; // r13
  unsigned int FontFile; // edx
  unsigned int v37; // r9d
  unsigned __int16 *v38; // r8
  struct PFF *v39; // rdx
  struct PFF **v40; // rax
  int v41; // edx
  struct PFT *v42; // rax
  struct PFF **v43; // rdx
  struct PFF **v44; // rdi
  struct PFF *v45; // rcx
  _WORD *v46; // rcx
  struct _FONTFILEVIEW **v47; // rdx
  __int64 v48; // r8
  __int64 v50; // rdi
  __int64 v51; // r12
  ULONG_PTR *v52; // r15
  __int64 *v53; // r15
  __int64 v54; // rcx
  struct _FONTFILEVIEW **v55; // r14
  struct _FONTFILEVIEW *v56; // rcx
  unsigned int v57; // r13d
  struct PFF *v58; // rax
  __int64 v59; // rsi
  int v60; // edx
  struct PFT *v61; // rax
  struct PFF **v62; // rdx
  struct PFF *v63; // rcx
  unsigned int v64; // eax
  char v65; // di
  unsigned int v66; // eax
  bool v67; // zf
  struct tagDESIGNVECTOR *Src; // [rsp+30h] [rbp-C9h]
  size_t Size; // [rsp+38h] [rbp-C1h]
  unsigned __int64 v70; // [rsp+40h] [rbp-B9h]
  HDEV v71; // [rsp+48h] [rbp-B1h]
  struct PFT *v72; // [rsp+58h] [rbp-A1h]
  unsigned int v73; // [rsp+60h] [rbp-99h]
  unsigned int v74; // [rsp+68h] [rbp-91h]
  char v75; // [rsp+88h] [rbp-71h]
  int v76; // [rsp+8Ch] [rbp-6Dh] BYREF
  int v77; // [rsp+90h] [rbp-69h]
  _QWORD v78[2]; // [rsp+98h] [rbp-61h] BYREF
  char v79; // [rsp+A8h] [rbp-51h]
  unsigned int v80[2]; // [rsp+B0h] [rbp-49h]
  struct PFF **v81; // [rsp+B8h] [rbp-41h] BYREF
  struct PDEV *v82; // [rsp+C0h] [rbp-39h] BYREF
  unsigned __int64 v83; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-29h] BYREF
  struct _FONTFILEVIEW *v85; // [rsp+D8h] [rbp-21h] BYREF
  void **v86; // [rsp+E0h] [rbp-19h] BYREF
  HDEV v87[10]; // [rsp+E8h] [rbp-11h] BYREF
  PCWSTR SourceString; // [rsp+150h] [rbp+57h] BYREF
  unsigned int v90; // [rsp+158h] [rbp+5Fh]
  unsigned int v91; // [rsp+160h] [rbp+67h]

  v91 = a4;
  v90 = a3;
  SourceString = a2;
  v12 = a12;
  result = 0LL;
  v14 = a4;
  v76 = 0;
  v15 = a12 != 0LL;
  v75 = 1;
  v77 = v15;
  v17 = this;
  v18 = 0;
  if ( a2 && a4 <= 3 )
  {
    v84 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v19 = a7;
    if ( !a11 )
    {
      v20 = v90;
      *a7 = 0;
      v21 = PUBLIC_PFTOBJ::pPFFGet(v17, a2, v20, v14, a5, a6, &v81, v15);
      v22 = a9;
      *a9 = v21;
      if ( v21 )
      {
        v23 = a10;
        v24 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v21, &v76, a10, v12);
        *v19 = v24;
        if ( v24 )
        {
          if ( (v23 & 0x40) != 0 )
            *v19 = 0;
          v18 = v76;
LABEL_9:
          SEMOBJ::vUnlock((SEMOBJ *)&v84);
          return v18;
        }
        v18 = v76;
      }
      v25 = PUBLIC_PFTOBJ::pPFFGet(v17, a2, v90, v14, a5, a6, &v81, v12 == 0LL);
      if ( v25 && !*((_QWORD *)v25 + 21) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v78, v25, a8, a10, *(struct PFT **)v17);
        v57 = *((_DWORD *)v25 + 36);
        v18 = 0;
        v76 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v84);
        if ( v78[0] )
        {
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v78,
                               (unsigned __int16 *)SourceString,
                               v57,
                               0LL,
                               v12) )
          {
            a12 = (struct _EUDCLOAD *)ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v58 = PUBLIC_PFTOBJ::pPFFGet(v17, (unsigned __int16 *)SourceString, v90, v14, a5, a6, &v81, v77);
            *v22 = v58;
            if ( v58
              && (v64 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v58, &v76, a10, v12), v18 = v76,
                                                                                              (v57 = v64) != 0) )
            {
              *v19 = v64;
            }
            else
            {
              v59 = v78[0];
              v60 = v77;
              *v22 = (struct PFF *)v78[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v78, v60) )
              {
                v61 = *(struct PFT **)v17;
                if ( (*(_DWORD *)(v59 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v61 + 8);
                ++*((_DWORD *)v61 + 7);
                v62 = v81;
                if ( *v81 )
                  *((_QWORD *)*v81 + 2) = *v22;
                v63 = *v22;
                *((_QWORD *)v63 + 1) = *v62;
                *((_QWORD *)v63 + 2) = 0LL;
                *v62 = v63;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v78);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v78);
                *v19 = v57;
                v18 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v78);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&a12);
          }
          else
          {
            *v19 = 0;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
        goto LABEL_9;
      }
    }
    v83 = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v84);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v86, 12 * v14);
    v26 = v86;
    if ( v86
      && (v80[0] = (8 * v14 + 7) & 0xFFFFFFF8,
          v27 = v14,
          (v28 = (struct _FONTFILEVIEW **)PALLOCMEM2(v80[0] + 120 * (_DWORD)v14, 1986422343LL, 1)) != 0LL) )
    {
      v29 = SourceString;
      v85 = (struct _FONTFILEVIEW *)((char *)v28 + v80[0]);
      *(_QWORD *)v80 = SourceString;
      if ( (_DWORD)v14 )
      {
        v30 = v85;
        v31 = &v26[v14];
        v32 = v26;
        v33 = v28;
        v34 = (char *)v32 - (char *)v28;
        do
        {
          *v33 = v30;
          *((_QWORD *)v30 + 10) = v29;
          *((_DWORD *)*v33 + 10) ^= (*((_DWORD *)*v33 + 10) ^ (8 * IsTrustedFontFilePath(v29))) & 8;
          v29 = *(const WCHAR **)v80;
          *(struct _FONTFILEVIEW **)((char *)v33 + v34) = 0LL;
          *(_DWORD *)v31 = 0;
          while ( *v29++ )
            ;
          v30 = (struct _FONTFILEVIEW *)((char *)v30 + 120);
          *(_QWORD *)v80 = v29;
          ++v33;
          v31 = (void **)((char *)v31 + 4);
          --v14;
        }
        while ( v14 );
        LODWORD(v14) = v91;
        v26 = v86;
        v27 = v91;
        v19 = a7;
        v17 = this;
      }
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      vLoadFontFileView(
        (unsigned __int16 *)SourceString,
        v90,
        v28,
        v14,
        v26,
        (unsigned int *)&v26[v27],
        a5,
        a6,
        &v83,
        &v82,
        (struct _FNTCHECKSUM *)&v85);
      v87[0] = (HDEV)v82;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v83 )
        goto LABEL_45;
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v87, v83, 2u, 0, 0LL);
      v80[0] = FontFile;
      if ( FontFile - 1 > 0xFFFFFFFD )
        goto LABEL_45;
      if ( !a12 || *((_QWORD *)a12 + 1) || FontFile <= 2 )
      {
        v37 = v90;
        v38 = (unsigned __int16 *)SourceString;
        v74 = a10;
        v73 = a8;
        v72 = *(struct PFT **)v17;
        v71 = v87[0];
        v70 = v83;
        LODWORD(Size) = a6;
        Src = a5;
        *v19 = FontFile;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v78,
          FontFile,
          v38,
          v37,
          v14,
          Src,
          Size,
          v70,
          v71,
          0LL,
          v72,
          v73,
          v74,
          (struct _FNTCHECKSUM *)&v85,
          v28,
          0LL);
        if ( !v78[0] )
        {
LABEL_44:
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
LABEL_45:
          v51 = 0LL;
          if ( v28 && (_DWORD)v14 )
          {
            v52 = (ULONG_PTR *)v28;
            v51 = v27;
            do
            {
              EngUnmapFontFileFD(*v52++);
              --v51;
            }
            while ( v51 );
          }
          if ( v75 )
          {
            CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&a12, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
            if ( UmfdFileviewLookup && (_DWORD)v14 )
            {
              v53 = (__int64 *)v28;
              v51 = v27;
              do
              {
                v54 = *v53;
                if ( (*(_DWORD *)(*v53 + 40) & 0x20) != 0 )
                {
                  LODWORD(SourceString) = *(_DWORD *)(v54 + 64);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v54, &SourceString);
                }
                ++v53;
                --v51;
              }
              while ( v51 );
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
            if ( (_DWORD)v14 )
            {
              v55 = v28;
              do
              {
                v56 = *v55;
                if ( (*((_DWORD *)*v55 + 10) & 8) == 0 && *((_QWORD *)v56 + 2) == v51 && *((_QWORD *)v56 + 1) == v51 )
                  vUnreferenceFileviewSection(v56);
                ++v55;
                --v27;
              }
              while ( v27 );
            }
            Win32FreePool(v28);
          }
          goto LABEL_47;
        }
        v75 = 0;
        if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                              (PFFMEMOBJ *)v78,
                              (unsigned __int16 *)SourceString,
                              v80[0],
                              0LL,
                              a12) )
        {
          *v19 = 0;
LABEL_43:
          if ( (v79 & 2) == 0 )
          {
            if ( (_DWORD)v14 )
            {
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v28++);
                --v27;
              }
              while ( v27 );
            }
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v78);
            goto LABEL_47;
          }
          goto LABEL_44;
        }
        v82 = (struct PDEV *)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v39 = PUBLIC_PFTOBJ::pPFFGet(v17, (unsigned __int16 *)SourceString, v90, v14, a5, a6, &v81, v77);
        v40 = a9;
        *a9 = v39;
        if ( v39 )
        {
          v65 = a10;
          v66 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v39, &v76, a10, a12);
          if ( v66 )
          {
            v67 = (v65 & 0x40) == 0;
            v18 = v76;
            if ( !v67 )
              v66 = 0;
            *v19 = v66;
            goto LABEL_42;
          }
          v18 = v76;
          v40 = a9;
        }
        v41 = v77;
        *v40 = (struct PFF *)v78[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v78, v41) )
        {
          v42 = *(struct PFT **)v17;
          if ( (*(_DWORD *)(v78[0] + 52LL) & 0x200) == 0 )
            ++*((_DWORD *)v42 + 8);
          ++*((_DWORD *)v42 + 7);
          v43 = v81;
          v44 = a9;
          if ( *v81 )
            *((_QWORD *)*v81 + 2) = *a9;
          v45 = *v44;
          *((_QWORD *)v45 + 1) = *v43;
          *((_QWORD *)v45 + 2) = 0LL;
          *v43 = v45;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v78);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v78);
          v46 = *(_WORD **)(v78[0] + 24LL);
          if ( (_DWORD)v14 )
          {
            v47 = v28;
            v48 = v27;
            do
            {
              *((_QWORD *)*v47 + 10) = v46;
              while ( *v46++ )
                ;
              ++v47;
              --v48;
            }
            while ( v48 );
          }
          if ( (a10 & 0x40) != 0 )
            *((_DWORD *)*v44 + 13) |= 0x80u;
          if ( (_DWORD)v14 )
          {
            v50 = v27;
            do
            {
              EngUnmapFontFileFD((ULONG_PTR)*v28++);
              --v50;
            }
            while ( v50 );
          }
          v28 = 0LL;
          v18 = 1;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v78);
        }
LABEL_42:
        SEMOBJ::vUnlock((SEMOBJ *)&v82);
        goto LABEL_43;
      }
    }
    else
    {
      v18 = 0;
    }
LABEL_47:
    if ( v26 )
      Win32FreePool(v26);
    goto LABEL_9;
  }
  return result;
}
