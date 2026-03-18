/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0249CE0
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0256000 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026AA30 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C0027AF4 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00299AC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0029AA0 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C002C4C0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C002C614 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00325F8 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C005B7BC (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C028BC00 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
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
  unsigned int v10; // r12d
  char *v11; // rax
  void **v12; // rbx
  unsigned int *v13; // rsi
  unsigned int *v14; // r9
  struct _FONTFILEVIEW **v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int FontFile; // r12d
  __int64 v19; // rsi
  struct PFF *v20; // rbx
  struct _UNIVERSAL_FONT_ID *v21; // r9
  unsigned int v22; // r8d
  PUBLIC_PFTOBJ *v23; // rsi
  __int64 v24; // rax
  struct PFF **v25; // rcx
  size_t Size; // [rsp+30h] [rbp-D0h]
  unsigned int v28[3]; // [rsp+84h] [rbp-7Ch] BYREF
  HDEV v29; // [rsp+90h] [rbp-70h] BYREF
  struct _UNIVERSAL_FONT_ID *v30; // [rsp+98h] [rbp-68h]
  PUBLIC_PFTOBJ *v31; // [rsp+A0h] [rbp-60h]
  struct PFF *v32[3]; // [rsp+A8h] [rbp-58h] BYREF
  struct PDEV *v33; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v34[8]; // [rsp+C8h] [rbp-38h] BYREF
  int *v35; // [rsp+D0h] [rbp-30h]
  XDCOBJ *v36; // [rsp+D8h] [rbp-28h]
  struct PFF **v37; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-18h] BYREF
  char v39; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v40[32]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Dst[32]; // [rsp+120h] [rbp+20h] BYREF

  v30 = a6;
  v8 = 0;
  v35 = a7;
  v9 = a4;
  v36 = a2;
  v31 = this;
  *(_QWORD *)&v28[1] = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v28[0] = v10;
  if ( ScrutinizeFontLoad(2LL, 0LL) >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v12 = (void **)v40;
      v13 = (unsigned int *)&v39;
    }
    else
    {
      v11 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v12 = (void **)v11;
      if ( !v11 )
        goto LABEL_32;
      v13 = (unsigned int *)(v11 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v14 = v13;
      v15 = a3;
      v16 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
        v17 = (__int64)*v15++;
        *v14++ = *(_DWORD *)(v17 + 24);
        --v16;
      }
      while ( v16 );
    }
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    vLoadFontFileView(0LL, 0, a3, v9, v12, v13, Src, v10, (unsigned __int64 *)&v28[1], &v33, (struct _FNTCHECKSUM *)v34);
    v29 = (HDEV)v33;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( v12 != (void **)v40 )
      Win32FreePool(v12);
    if ( *(_QWORD *)&v28[1] )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v29, *(__int64 *)&v28[1], 2u, 0, 0LL);
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v19 = -1LL;
        do
          ++v19;
        while ( Dst[v19] );
        LODWORD(Size) = v28[0];
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v32,
          FontFile,
          Dst,
          v19 + 1,
          v9,
          Src,
          Size,
          *(unsigned __int64 *)&v28[1],
          v29,
          0LL,
          *(struct PFT **)v31,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)v34,
          a3,
          v30);
        v20 = v32[0];
        if ( v32[0] )
        {
          v21 = v30;
          a3 = 0LL;
          *v35 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v32, Dst, FontFile, v21, 0LL) )
          {
            v38 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v32, 0);
            if ( v8 )
            {
              v22 = v19 + 1;
              v23 = v31;
              if ( PUBLIC_PFTOBJ::pPFFGet(v31, Dst, v22, v9, Src, v28[0], &v37, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v36, v20);
                if ( v8 )
                {
                  v24 = *(_QWORD *)v23;
                  if ( (*((_DWORD *)v20 + 13) & 0x200) == 0 )
                    ++*(_DWORD *)(v24 + 32);
                  ++*(_DWORD *)(v24 + 28);
                  v25 = v37;
                  if ( *v37 )
                    *((_QWORD *)*v37 + 2) = v20;
                  *((_QWORD *)v20 + 1) = *v25;
                  *((_QWORD *)v20 + 2) = 0LL;
                  *v25 = v20;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v32);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v32);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v38);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v32);
      }
    }
  }
LABEL_32:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
