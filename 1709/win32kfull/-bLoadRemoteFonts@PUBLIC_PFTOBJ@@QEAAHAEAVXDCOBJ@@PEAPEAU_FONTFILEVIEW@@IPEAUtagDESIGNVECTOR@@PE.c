/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C024B69C
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0257B00 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02697A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0038CF4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00AF968 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00B42B0 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C00B459C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00B45BC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C00B46B4 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00B5208 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C011FBF4 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0288710 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  void **v14; // rbx
  unsigned int *v15; // r8
  unsigned int *v16; // r10
  struct _FONTFILEVIEW **v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // rsi
  struct PFF *v23; // rbx
  struct _UNIVERSAL_FONT_ID *v24; // r9
  unsigned int v25; // r8d
  PUBLIC_PFTOBJ *v26; // rsi
  __int64 v27; // rcx
  struct PFF **v28; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v31; // [rsp+80h] [rbp-80h]
  unsigned __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  HDEV v33; // [rsp+90h] [rbp-70h] BYREF
  struct _UNIVERSAL_FONT_ID *v34; // [rsp+98h] [rbp-68h]
  PUBLIC_PFTOBJ *v35; // [rsp+A0h] [rbp-60h]
  struct PFF *v36[3]; // [rsp+A8h] [rbp-58h] BYREF
  struct PDEV *v37; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v38[8]; // [rsp+C8h] [rbp-38h] BYREF
  int *v39; // [rsp+D0h] [rbp-30h]
  XDCOBJ *v40; // [rsp+D8h] [rbp-28h]
  struct PFF **v41; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-18h] BYREF
  char v43; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v44[32]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+20h] BYREF

  v34 = a6;
  v8 = 0;
  v39 = a7;
  v9 = a4;
  v40 = a2;
  v35 = this;
  v32 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v31 = v10;
  if ( ScrutinizeFontLoad(2LL, 0LL) >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v14 = (void **)v44;
      v15 = (unsigned int *)&v43;
    }
    else
    {
      v13 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v14 = (void **)v13;
      if ( !v13 )
        goto LABEL_32;
      v15 = (unsigned int *)(v13 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v16 = v15;
      v17 = a3;
      v18 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v17 + (char *)v14 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v17 + 2);
        v19 = (__int64)*v17++;
        *v16++ = *(_DWORD *)(v19 + 24);
        --v18;
      }
      while ( v18 );
    }
    vLoadFontFileView(0LL, 0, a3, v9, v14, v15, Src, v10, &v32, (struct PDEV **)&v33, (struct _FNTCHECKSUM *)v38);
    v37 = (struct PDEV *)v33;
    if ( v14 != (void **)v44 )
      Win32FreePool(v14, v20, v12);
    v11 = v32;
    if ( v32 )
    {
      v21 = PDEVOBJ::QueryFontFile(&v37, v32, 2LL, 0LL, 0LL);
      if ( v21 - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v22 = -1LL;
        do
          ++v22;
        while ( Dst[v22] );
        LODWORD(Size) = v31;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v36,
          v21,
          Dst,
          v22 + 1,
          v9,
          Src,
          Size,
          v32,
          v33,
          0LL,
          *(struct PFT **)v35,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v38,
          a3,
          v34);
        v23 = v36[0];
        if ( v36[0] )
        {
          v24 = v34;
          a3 = 0LL;
          *v39 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v36, Dst, v21, v24, 0LL) )
          {
            v42 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v36, 0);
            if ( v8 )
            {
              v25 = v22 + 1;
              v26 = v35;
              if ( PUBLIC_PFTOBJ::pPFFGet(v35, Dst, v25, v9, Src, v31, &v41, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v40, v23);
                if ( v8 )
                {
                  v27 = *(_QWORD *)v26;
                  if ( (*((_DWORD *)v23 + 13) & 0x200) == 0 )
                    ++*(_DWORD *)(v27 + 32);
                  ++*(_DWORD *)(v27 + 28);
                  v28 = v41;
                  if ( *v41 )
                    *((_QWORD *)*v41 + 2) = v23;
                  *((_QWORD *)v23 + 1) = *v28;
                  *((_QWORD *)v23 + 2) = 0LL;
                  *v28 = v23;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v36);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v36);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v42);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v36);
      }
    }
  }
LABEL_32:
  if ( a3 )
    Win32FreePool(a3, v11, v12);
  return v8;
}
