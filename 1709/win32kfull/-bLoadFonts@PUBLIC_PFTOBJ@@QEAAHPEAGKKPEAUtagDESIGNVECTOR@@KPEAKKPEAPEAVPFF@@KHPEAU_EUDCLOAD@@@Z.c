/*
 * XREFs of ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00AC790 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00B0248 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     GreAddFontResourceWInternal @ 0x1C00FB564 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00389E0 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0038CF4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C00404D0 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00B42B0 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00B459C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B45BC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C00B46B4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00B46E0 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00B4B9C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00B5208 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C010DD4C (-IsTrustedFontFilePath@@YA_NPEBG@Z.c)
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
  struct _EUDCLOAD *v12; // r12
  __int64 result; // rax
  __int64 v14; // r14
  BOOL v15; // esi
  PUBLIC_PFTOBJ *v17; // r13
  unsigned int v18; // edi
  unsigned int *v19; // r15
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  struct PFF *v22; // rax
  struct PFF **v23; // rsi
  char v24; // di
  unsigned int v25; // eax
  struct PFF *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  void **v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rax
  struct _FONTFILEVIEW **v32; // rsi
  unsigned __int16 *v33; // rax
  const WCHAR *v34; // rcx
  __int64 v35; // r15
  void **v36; // r13
  void **v37; // rax
  struct _FONTFILEVIEW **v38; // rbx
  signed __int64 v39; // r12
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned __int16 *v43; // r8
  struct PFF *v44; // rdx
  struct PFF **v45; // rax
  int v46; // edx
  struct PFT *v47; // rcx
  struct PFF **v48; // rdx
  struct PFF **v49; // rdi
  struct PFF *v50; // rcx
  _WORD *v51; // rcx
  struct _FONTFILEVIEW **v52; // rdx
  __int64 v53; // r8
  __int64 v55; // rdi
  __int64 v56; // r13
  ULONG_PTR *v57; // r15
  struct _FONTFILEVIEW **v58; // r15
  struct _FONTFILEVIEW *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  struct _FONTFILEVIEW **v62; // r14
  struct _FONTFILEVIEW *v63; // rcx
  unsigned int v64; // ebx
  struct PFF *v65; // rax
  __int64 v66; // r14
  int v67; // edx
  struct PFT *v68; // rcx
  struct PFF **v69; // rdx
  struct PFF *v70; // rcx
  unsigned int v71; // eax
  char v72; // di
  unsigned int v73; // eax
  bool v74; // zf
  struct tagDESIGNVECTOR *Src; // [rsp+30h] [rbp-B9h]
  size_t Size; // [rsp+38h] [rbp-B1h]
  unsigned __int64 v77; // [rsp+40h] [rbp-A9h]
  HDEV v78; // [rsp+48h] [rbp-A1h]
  struct PFT *v79; // [rsp+58h] [rbp-91h]
  unsigned int v80; // [rsp+60h] [rbp-89h]
  unsigned int v81; // [rsp+68h] [rbp-81h]
  char v82; // [rsp+88h] [rbp-61h]
  int v83; // [rsp+8Ch] [rbp-5Dh] BYREF
  int v84; // [rsp+90h] [rbp-59h]
  _QWORD v85[2]; // [rsp+98h] [rbp-51h] BYREF
  char v86; // [rsp+A8h] [rbp-41h]
  struct PFF **v87; // [rsp+B0h] [rbp-39h] BYREF
  HDEV v88; // [rsp+B8h] [rbp-31h] BYREF
  struct PDEV *v89; // [rsp+C0h] [rbp-29h] BYREF
  unsigned int v90[2]; // [rsp+C8h] [rbp-21h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-19h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-11h] BYREF
  _QWORD v93[9]; // [rsp+E0h] [rbp-9h] BYREF
  PCWSTR SourceString; // [rsp+140h] [rbp+57h] BYREF
  unsigned int v96; // [rsp+148h] [rbp+5Fh]
  unsigned int v97; // [rsp+150h] [rbp+67h]

  v97 = a4;
  v96 = a3;
  SourceString = a2;
  v12 = a12;
  result = 0LL;
  v14 = a4;
  v83 = 0;
  v15 = a12 != 0LL;
  v82 = 1;
  v84 = v15;
  v17 = this;
  v18 = 0;
  if ( a2 && a4 <= 3 )
  {
    v92 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v19 = a7;
    if ( !a11 )
    {
      v20 = a6;
      v21 = v96;
      *a7 = 0;
      v22 = PUBLIC_PFTOBJ::pPFFGet(v17, a2, v21, v14, a5, v20, &v87, v15);
      v23 = a9;
      *a9 = v22;
      if ( v22 )
      {
        v24 = a10;
        v25 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v22, &v83, a10, v12);
        *v19 = v25;
        if ( v25 )
        {
          if ( (v24 & 0x40) != 0 )
            *v19 = 0;
          v18 = v83;
LABEL_9:
          SEMOBJ::vUnlock((SEMOBJ *)&v92);
          return v18;
        }
        v18 = v83;
      }
      v26 = PUBLIC_PFTOBJ::pPFFGet(v17, a2, v96, v14, a5, a6, &v87, v12 == 0LL);
      if ( v26 && !*((_QWORD *)v26 + 21) )
      {
        PFFMEMOBJ::PFFMEMOBJ((PFFMEMOBJ *)v85, v26, a8, a10, *(struct PFT **)v17);
        v64 = *((_DWORD *)v26 + 36);
        v18 = 0;
        v83 = 0;
        SEMOBJ::vUnlock((SEMOBJ *)&v92);
        if ( v85[0] )
        {
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                               (PFFMEMOBJ *)v85,
                               (unsigned __int16 *)SourceString,
                               v64,
                               0LL,
                               v12) )
          {
            a12 = (struct _EUDCLOAD *)ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v65 = PUBLIC_PFTOBJ::pPFFGet(v17, (unsigned __int16 *)SourceString, v96, v14, a5, a6, &v87, v84);
            *v23 = v65;
            if ( v65
              && (v71 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v65, &v83, a10, v12), v18 = v83,
                                                                                              (v64 = v71) != 0) )
            {
              *v19 = v71;
            }
            else
            {
              v66 = v85[0];
              v67 = v84;
              *v23 = (struct PFF *)v85[0];
              if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v67) )
              {
                v68 = *(struct PFT **)v17;
                if ( (*(_DWORD *)(v66 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v68 + 8);
                ++*((_DWORD *)v68 + 7);
                v69 = v87;
                if ( *v87 )
                  *((_QWORD *)*v87 + 2) = *v23;
                v70 = *v23;
                *((_QWORD *)v70 + 1) = *v69;
                *((_QWORD *)v70 + 2) = 0LL;
                *v69 = v70;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
                *v19 = v64;
                v18 = 1;
              }
              else
              {
                *v19 = 0;
                PFFOBJ::vRemoveHash((PFFOBJ *)v85);
              }
            }
            SEMOBJ::vUnlock((SEMOBJ *)&a12);
          }
          else
          {
            *v19 = 0;
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
        goto LABEL_9;
      }
    }
    v91 = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v92);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v88, 12 * v14);
    v29 = (void **)v88;
    if ( v88
      && (v30 = v14, v31 = PALLOCMEM2((unsigned int)((_DWORD)v14 << 7)), (v32 = (struct _FONTFILEVIEW **)v31) != 0LL) )
    {
      v93[0] = v31 + (unsigned int)(8 * v14);
      v33 = (unsigned __int16 *)SourceString;
      *(_QWORD *)v90 = SourceString;
      v34 = SourceString;
      if ( (_DWORD)v14 )
      {
        v35 = v93[0];
        v36 = &v29[v14];
        v37 = v29;
        v38 = v32;
        v39 = (char *)v37 - (char *)v32;
        do
        {
          *v38 = (struct _FONTFILEVIEW *)v35;
          *(_QWORD *)(v35 + 80) = v34;
          *((_DWORD *)*v38 + 10) = *((_DWORD *)*v38 + 10) & 0xFFFFFFF7 | (8 * IsTrustedFontFilePath(v34));
          v34 = *(const WCHAR **)v90;
          *(struct _FONTFILEVIEW **)((char *)v38 + v39) = 0LL;
          *(_DWORD *)v36 = 0;
          while ( *v34++ )
            ;
          v35 += 120LL;
          *(_QWORD *)v90 = v34;
          ++v38;
          v36 = (void **)((char *)v36 + 4);
          --v14;
        }
        while ( v14 );
        LODWORD(v14) = v97;
        v29 = (void **)v88;
        v30 = v97;
        v19 = a7;
        v17 = this;
        v33 = (unsigned __int16 *)SourceString;
      }
      vLoadFontFileView(
        v33,
        v96,
        v32,
        v14,
        v29,
        (unsigned int *)&v29[v30],
        a5,
        a6,
        &v91,
        (struct PDEV **)&v88,
        (struct _FNTCHECKSUM *)v93);
      v89 = (struct PDEV *)v88;
      if ( !v91 )
        goto LABEL_45;
      v41 = PDEVOBJ::QueryFontFile(&v89, v91, 2LL, 0LL, 0LL);
      v27 = v41;
      v90[0] = v41;
      if ( v41 - 1 > 0xFFFFFFFD )
        goto LABEL_45;
      if ( !a12 || *((_QWORD *)a12 + 1) || v41 <= 2 )
      {
        v42 = v96;
        v43 = (unsigned __int16 *)SourceString;
        v81 = a10;
        v80 = a8;
        v79 = *(struct PFT **)v17;
        v78 = v88;
        v77 = v91;
        LODWORD(Size) = a6;
        Src = a5;
        *v19 = v41;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v85,
          v41,
          v43,
          v42,
          v14,
          Src,
          Size,
          v77,
          v78,
          0LL,
          v79,
          v80,
          v81,
          (struct _FNTCHECKSUM *)v93,
          v32,
          0LL);
        if ( !v85[0] )
        {
LABEL_44:
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
LABEL_45:
          v56 = 0LL;
          if ( v32 && (_DWORD)v14 )
          {
            v57 = (ULONG_PTR *)v32;
            v56 = v30;
            do
            {
              EngUnmapFontFileFD(*v57++);
              --v56;
            }
            while ( v56 );
          }
          if ( v82 )
          {
            CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&a12, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
            if ( UmfdFileviewLookup && (_DWORD)v14 )
            {
              v58 = v32;
              v56 = v30;
              do
              {
                v59 = *v58;
                if ( (*((_DWORD *)*v58 + 10) & 0x20) != 0 )
                {
                  LODWORD(SourceString) = *((_DWORD *)v59 + 16);
                  NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v59, &SourceString);
                }
                ++v58;
                --v56;
              }
              while ( v56 );
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&a12);
            if ( (_DWORD)v14 )
            {
              v62 = v32;
              do
              {
                v63 = *v62;
                if ( (*((_DWORD *)*v62 + 10) & 8) == 0 && *((_QWORD *)v63 + 2) == v56 && *((_QWORD *)v63 + 1) == v56 )
                  vUnreferenceFileviewSection(v63);
                ++v62;
                --v30;
              }
              while ( v30 );
            }
            Win32FreePool(v32, v60, v61);
          }
          goto LABEL_47;
        }
        v82 = 0;
        if ( !(unsigned int)PFFMEMOBJ::bLoadFontFileTable(
                              (PFFMEMOBJ *)v85,
                              (unsigned __int16 *)SourceString,
                              v90[0],
                              0LL,
                              a12) )
        {
          *v19 = 0;
LABEL_43:
          if ( (v86 & 2) == 0 )
          {
            if ( (_DWORD)v14 )
            {
              do
              {
                EngUnmapFontFileFD((ULONG_PTR)*v32++);
                --v30;
              }
              while ( v30 );
            }
            PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v85);
            goto LABEL_47;
          }
          goto LABEL_44;
        }
        v89 = (struct PDEV *)ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v44 = PUBLIC_PFTOBJ::pPFFGet(v17, (unsigned __int16 *)SourceString, v96, v14, a5, a6, &v87, v84);
        v45 = a9;
        *a9 = v44;
        if ( v44 )
        {
          v72 = a10;
          v73 = PFTOBJ::chpfeIncrPFF((struct PFT **const *)v17, v44, &v83, a10, a12);
          if ( v73 )
          {
            v74 = (v72 & 0x40) == 0;
            v18 = v83;
            if ( !v74 )
              v73 = 0;
            *v19 = v73;
            goto LABEL_42;
          }
          v18 = v83;
          v45 = a9;
        }
        v46 = v84;
        *v45 = (struct PFF *)v85[0];
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v85, v46) )
        {
          v47 = *(struct PFT **)v17;
          if ( (*(_DWORD *)(v85[0] + 52LL) & 0x200) == 0 )
            ++*((_DWORD *)v47 + 8);
          ++*((_DWORD *)v47 + 7);
          v48 = v87;
          v49 = a9;
          if ( *v87 )
            *((_QWORD *)*v87 + 2) = *a9;
          v50 = *v49;
          *((_QWORD *)v50 + 1) = *v48;
          *((_QWORD *)v50 + 2) = 0LL;
          *v48 = v50;
          PFFOBJ::vSetUniqueness((PFFOBJ *)v85);
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v85);
          v51 = *(_WORD **)(v85[0] + 24LL);
          if ( (_DWORD)v14 )
          {
            v52 = v32;
            v53 = v30;
            do
            {
              *((_QWORD *)*v52 + 10) = v51;
              while ( *v51++ )
                ;
              ++v52;
              --v53;
            }
            while ( v53 );
          }
          if ( (a10 & 0x40) != 0 )
            *((_DWORD *)*v49 + 13) |= 0x80u;
          if ( (_DWORD)v14 )
          {
            v55 = v30;
            do
            {
              EngUnmapFontFileFD((ULONG_PTR)*v32++);
              --v55;
            }
            while ( v55 );
          }
          v32 = 0LL;
          v18 = 1;
        }
        else
        {
          *v19 = 0;
          PFFOBJ::vRemoveHash((PFFOBJ *)v85);
        }
LABEL_42:
        SEMOBJ::vUnlock((SEMOBJ *)&v89);
        goto LABEL_43;
      }
    }
    else
    {
      v18 = 0;
    }
LABEL_47:
    if ( v29 )
      Win32FreePool(v29, v27, v28);
    goto LABEL_9;
  }
  return result;
}
