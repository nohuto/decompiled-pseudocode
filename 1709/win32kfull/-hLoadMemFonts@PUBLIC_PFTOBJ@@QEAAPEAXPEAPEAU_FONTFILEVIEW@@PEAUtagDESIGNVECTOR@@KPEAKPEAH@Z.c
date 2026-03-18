/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024B9FC
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C02696A0 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1C00389E0 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0038CF4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00B42B0 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00B459C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B45BC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C00B46B4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00B5208 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  struct PFT *v18; // rcx
  struct PFF **v19; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v22; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  HDEV v25; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[3]; // [rsp+98h] [rbp-68h] BYREF
  void *v27; // [rsp+B0h] [rbp-50h] BYREF
  struct PDEV *v28; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v29[8]; // [rsp+C0h] [rbp-40h] BYREF
  int *v30; // [rsp+C8h] [rbp-38h]
  struct PFF **v31; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t Dst[32]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = a2;
  v7 = *a2;
  v30 = a6;
  v23 = a4;
  v11 = 0LL;
  v27 = (void *)*((_QWORD *)v7 + 2);
  v22 = *((_DWORD *)v7 + 6);
  v24 = 0LL;
  if ( ScrutinizeFontLoad(1LL, 0LL) >= 0 )
  {
    vLoadFontFileView(0LL, 0, v6, 1u, &v27, &v22, a3, a4, &v24, (struct PDEV **)&v25, (struct _FNTCHECKSUM *)v29);
    v12 = v24;
    v28 = (struct PDEV *)v25;
    if ( v24 )
    {
      v14 = PDEVOBJ::QueryFontFile(&v28, v24, 2LL, 0LL, 0LL);
      v15 = v14;
      if ( v14 - 1 <= 0xFFFFFFFD )
      {
        *a5 = v14;
        swprintf_s(
          Dst,
          0x1EuLL,
          L"MEMORY-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
        v16 = -1LL;
        do
          ++v16;
        while ( Dst[v16] );
        LODWORD(Size) = a4;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v26,
          v15,
          Dst,
          v16 + 1,
          1u,
          a3,
          Size,
          v24,
          v25,
          0LL,
          *this,
          0x10u,
          0x30u,
          (struct _FNTCHECKSUM *)v29,
          v6,
          0LL);
        v17 = v26[0];
        if ( v26[0] )
        {
          v6 = 0LL;
          *v30 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v26, Dst, v15, 0LL, 0LL) )
          {
            v32 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v26, 0) )
            {
              if ( !PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)this, Dst, (int)v16 + 1, 1, a3, v23, &v31, 0) )
              {
                v18 = *this;
                if ( (*(_DWORD *)(v17 + 52) & 0x200) == 0 )
                  ++*((_DWORD *)v18 + 8);
                ++*((_DWORD *)v18 + 7);
                v19 = v31;
                if ( *v31 )
                  *((_QWORD *)*v31 + 2) = v17;
                *(_QWORD *)(v17 + 8) = *v19;
                *(_QWORD *)(v17 + 16) = 0LL;
                *v19 = (struct PFF *)v17;
                PFFOBJ::vSetUniqueness((PFFOBJ *)v26);
                PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v26);
                v11 = *(unsigned int *)(v17 + 140);
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v26);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v32);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v26);
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6, v12, v13);
  return v11;
}
