/*
 * XREFs of bLoadTTF @ 0x1C022910C
 * Callers:
 *     bLoadFontFile @ 0x1C0228AE4 (bLoadFontFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     bLoadGlyphSet @ 0x1C0228FB8 (bLoadGlyphSet.c)
 *     bLoadTTF_Cache @ 0x1C0229608 (bLoadTTF_Cache.c)
 *     bVerifyTTF @ 0x1C022A460 (bVerifyTTF.c)
 *     ui16LangId @ 0x1C022B294 (ui16LangId.c)
 *     vCopy_IFIV @ 0x1C022B2B8 (vCopy_IFIV.c)
 *     vFill_IFIMETRICS @ 0x1C022B88C (vFill_IFIMETRICS.c)
 *     vGetVerticalGSet @ 0x1C022C9F4 (vGetVerticalGSet.c)
 *     bCheckVerticalTable @ 0x1C023353C (bCheckVerticalTable.c)
 *     fs_Initialize @ 0x1C02B5C00 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C02B5E84 (fs_NewSfnt.c)
 *     fs_OpenFonts @ 0x1C02B5F88 (fs_OpenFonts.c)
 */

__int64 __fastcall bLoadTTF(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        PVOID *a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 result; // rax
  ULONG v13; // ebx
  char v14; // r14
  PVOID v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int16 v18; // cx
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  int v21; // r8d
  int v22; // eax
  __int64 v23; // r10
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // eax
  PVOID v34; // rcx
  ULONG **v35; // r14
  __int64 v36; // rdx
  int v37; // eax
  int v38; // eax
  PVOID v39; // r15
  PVOID v40; // rax
  void *v41; // rsi
  ULONG *v42; // rdx
  ULONG *v43; // rcx
  USHORT AnsiCodePage[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v45; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v46; // [rsp+78h] [rbp-88h] BYREF
  USHORT OemCodePage[2]; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v53[36]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v54[8]; // [rsp+140h] [rbp+40h] BYREF
  char *v55; // [rsp+148h] [rbp+48h]
  __int64 v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+190h] [rbp+90h]
  int v59; // [rsp+198h] [rbp+98h]
  int v60; // [rsp+19Ch] [rbp+9Ch]
  __int64 v61; // [rsp+1A0h] [rbp+A0h]
  __int16 v62; // [rsp+1A8h] [rbp+A8h]
  __int16 v63; // [rsp+1AAh] [rbp+AAh]
  __int128 v64; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v65; // [rsp+200h] [rbp+100h]
  __int128 v66; // [rsp+210h] [rbp+110h]
  __int128 v67; // [rsp+220h] [rbp+120h]
  __int128 v68; // [rsp+230h] [rbp+130h]
  __int128 v69; // [rsp+240h] [rbp+140h]
  __int128 v70; // [rsp+250h] [rbp+150h]
  __int128 v71; // [rsp+260h] [rbp+160h]
  __int128 v72; // [rsp+270h] [rbp+170h]
  __int128 v73; // [rsp+280h] [rbp+180h]
  char v74; // [rsp+2E0h] [rbp+1E0h] BYREF

  v48 = 0;
  *a6 = 0LL;
  *(_DWORD *)OemCodePage = 0;
  if ( a7 )
    return bLoadTTF_Cache(a1, a6, a7, a8);
  if ( !(unsigned int)bVerifyTTF(
                        a2,
                        (int)&v64,
                        v53,
                        (__int64)&v45,
                        (__int64)&v46,
                        (__int64)&v51,
                        (__int64)&v50,
                        (__int64)&v49,
                        (__int64)v52,
                        (__int64)&v48,
                        (__int64)OemCodePage) )
    return 0LL;
  v13 = v53[0] + 352;
  if ( v53[0] + 352 < v53[0] )
    return 0LL;
  v14 = OemCodePage[0];
  if ( *(_DWORD *)OemCodePage )
  {
    RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
    if ( AnsiCodePage[0] == 932 || AnsiCodePage[0] == 949 )
      LODWORD(v52[0]) |= 4u;
  }
  v15 = EngAllocMem(0, v13, 0x64667454u);
  v16 = (__int64)v15;
  if ( !v15 )
    return 0LL;
  *a6 = v15;
  memset(v15, 0, 0x160uLL);
  v17 = (unsigned int)v65;
  *(_QWORD *)(v16 + 56) = a1;
  *(_QWORD *)(v16 + 64) = a2;
  *(_DWORD *)(v16 + 72) = a3;
  v18 = __ROR2__(*(_WORD *)(v17 + a2 + 18), 8);
  *(_WORD *)(v16 + 308) = v18;
  if ( (unsigned __int16)(v18 - 16) <= 0x3FF0u )
  {
    v19 = DWORD2(v65);
    v20 = v45;
    *(_WORD *)(v16 + 312) = v46;
    *(_WORD *)(v16 + 310) = v20;
    *(_DWORD *)(v16 + 324) = -65536;
    *(_WORD *)(v16 + 328) = __ROR2__(*(_WORD *)(v19 + a2 + 12), 8);
    *(_WORD *)(v16 + 330) = __ROR2__(*(_WORD *)(v19 + a2 + 14), 8);
    v21 = v48 != 0 ? 2 : 0;
    *(_DWORD *)(v16 + 300) = v21;
    if ( (v14 & 1) != 0 )
      *(_DWORD *)(v16 + 300) = v21 | 0x40;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_WORD *)(v16 + 314) = ui16LangId(v20, a5);
    v22 = v51 - a2;
    *(_DWORD *)(v16 + 48) = v23;
    *(_DWORD *)(v16 + 304) = v22;
    v24 = v64;
    *(_QWORD *)(v16 + 80) = v23;
    v25 = v65;
    *(_DWORD *)(v16 + 272) = a4;
    *(_OWORD *)(v16 + 112) = v24;
    v26 = v66;
    *(_OWORD *)(v16 + 128) = v25;
    v27 = v67;
    *(_OWORD *)(v16 + 144) = v26;
    v28 = v68;
    *(_OWORD *)(v16 + 160) = v27;
    v29 = v69;
    *(_OWORD *)(v16 + 176) = v28;
    v30 = v70;
    *(_OWORD *)(v16 + 192) = v29;
    v31 = v72;
    *(_OWORD *)(v16 + 208) = v30;
    *(_OWORD *)(v16 + 224) = v71;
    v32 = v73;
    v33 = v49;
    *(_OWORD *)(v16 + 240) = v31;
    *(_DWORD *)(v16 + 320) = v33;
    *(_OWORD *)(v16 + 256) = v32;
    *(_OWORD *)(v16 + 332) = *(_OWORD *)v52;
    if ( (unsigned int)fs_OpenFonts(v54, &v64) )
      goto LABEL_15;
    v56 = 0LL;
    v55 = &v74;
    v57 = 0LL;
    if ( (unsigned int)fs_Initialize(v54, &v64) )
      goto LABEL_15;
    v58 = *(_QWORD *)(v16 + 64);
    v61 = v16;
    v59 = 1;
    v60 = 1;
    v62 = *(_WORD *)(v16 + 310);
    v63 = *(_WORD *)(v16 + 312);
    if ( (unsigned int)fs_NewSfnt(v54, &v64) )
      goto LABEL_15;
    v35 = (ULONG **)(v16 + 88);
    v36 = v51;
    v37 = HIDWORD(v64) + 7;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_DWORD *)(v16 + 284) = 1;
    *(_DWORD *)(v16 + 292) = v37 & 0xFFFFFFF8;
    v38 = v65 + 7;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 96) = 0LL;
    *(_DWORD *)(v16 + 296) = v38 & 0xFFFFFFF8;
    *(_DWORD *)(v16 + 316) = v50;
    if ( !(unsigned int)bLoadGlyphSet(v16, v36, (__int64)v54, (__int64)v52, (PVOID *)(v16 + 88)) )
    {
LABEL_15:
      v34 = *a6;
    }
    else
    {
      vFill_IFIMETRICS(v16, v16 + 352);
      if ( (*(_DWORD *)(v16 + 300) & 0x100) == 0 || !(unsigned int)bCheckVerticalTable(v16) )
        goto LABEL_25;
      v39 = EngAllocMem(0, (v53[0] + 7) & 0xFFFFFFF8, 0x64667454u);
      v40 = EngAllocMem(0, **v35, 0x64667454u);
      v41 = v40;
      if ( v39 )
      {
        if ( v40 )
        {
          vCopy_IFIV((void *)(v16 + 352), v39);
          v42 = *v35;
          *(_QWORD *)(v16 + 16) = v39;
          *(_DWORD *)(v16 + 284) = 2;
          memmove(v41, v42, *v42);
          v43 = *v35;
          *(_QWORD *)(v16 + 96) = v41;
          vGetVerticalGSet(v43, v16);
LABEL_25:
          *(_QWORD *)(v16 + 104) = 0LL;
          return 1LL;
        }
        EngFreeMem(v39);
      }
      if ( *v35 )
        EngFreeMem(*v35);
      if ( v41 )
        EngFreeMem(v41);
      v34 = *a6;
      if ( !*a6 )
        return 0LL;
    }
    EngFreeMem(v34);
    *a6 = 0LL;
    return 0LL;
  }
  EngFreeMem(*a6);
  result = 0LL;
  *a6 = 0LL;
  return result;
}
