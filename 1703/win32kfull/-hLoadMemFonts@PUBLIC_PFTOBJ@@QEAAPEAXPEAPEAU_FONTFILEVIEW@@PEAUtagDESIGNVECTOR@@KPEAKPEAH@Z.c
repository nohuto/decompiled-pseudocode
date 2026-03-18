/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024A094
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C026A930 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C0027AF4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00299AC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0029AA0 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C002C368 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C002C4C0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C002C614 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00325F8 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C005B7BC (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::hLoadMemFonts(
        struct PFT **this,
        struct _FONTFILEVIEW **a2,
        struct tagDESIGNVECTOR *a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // rsi
  struct _FONTFILEVIEW *v7; // rdx
  __int64 v11; // r12
  unsigned int FontFile; // eax
  unsigned int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rbx
  struct PFT *v16; // rax
  struct PFF **v17; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v20; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v21; // [rsp+88h] [rbp-78h]
  unsigned __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  HDEV v23; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v24[3]; // [rsp+A0h] [rbp-60h] BYREF
  void *v25; // [rsp+B8h] [rbp-48h] BYREF
  struct PDEV *v26; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v27[8]; // [rsp+C8h] [rbp-38h] BYREF
  int *v28; // [rsp+D0h] [rbp-30h]
  struct PFF **v29; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Dst[32]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = a2;
  v7 = *a2;
  v28 = a6;
  v21 = a4;
  v11 = 0LL;
  v25 = (void *)*((_QWORD *)v7 + 2);
  v20 = *((_DWORD *)v7 + 6);
  v22 = 0LL;
  if ( ScrutinizeFontLoad(1LL, 0LL) >= 0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    vLoadFontFileView(0LL, 0, v6, 1u, &v25, &v20, a3, a4, &v22, &v26, (struct _FNTCHECKSUM *)v27);
    v23 = (HDEV)v26;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v22 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v23, v22, 2u, 0, 0LL);
      v13 = FontFile;
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        *a5 = FontFile;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v14 = -1LL;
        do
          ++v14;
        while ( Dst[v14] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v24,
          v13,
          Dst,
          v14 + 1,
          1u,
          a3,
          Size,
          v22,
          v23,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v27,
          v6,
          0LL);
        v15 = v24[0];
        if ( v24[0] )
        {
          v6 = 0LL;
          *v28 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v24, Dst, v13, 0LL, 0LL) )
          {
            v30 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v24, 0) )
            {
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v14 + 1, 1, a3, v21, &v29, 0) )
              {
                v16 = *this;
                if ( (*(_DWORD *)(v15 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v16 + 8);
                ++*((_DWORD *)v16 + 7);
                v17 = v29;
                if ( *v29 )
                  *((_QWORD *)*v29 + 2) = v15;
                *(_QWORD *)(v15 + 8) = *v17;
                *(_QWORD *)(v15 + 16) = 0LL;
                *v17 = (struct PFF *)v15;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v24);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v24);
                v11 = *(unsigned int *)(v15 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v24);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v30);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v24);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v11;
}
