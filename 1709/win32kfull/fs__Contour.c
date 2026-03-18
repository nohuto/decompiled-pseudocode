/*
 * XREFs of fs__Contour @ 0x1C02B60DC
 * Callers:
 *     bGetGlyphOutline @ 0x1C022DD74 (bGetGlyphOutline.c)
 *     fs_NewContourGridFit @ 0x1C022E928 (fs_NewContourGridFit.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     InvokeGlobalGSScale @ 0x1C02B7B40 (InvokeGlobalGSScale.c)
 *     scl_CalcDevAdvanceWidth @ 0x1C02B8040 (scl_CalcDevAdvanceWidth.c)
 *     scl_CalcDevHorMetrics @ 0x1C02B809C (scl_CalcDevHorMetrics.c)
 *     scl_ScaleUpToSubPixelOverscale @ 0x1C02B99B0 (scl_ScaleUpToSubPixelOverscale.c)
 *     sbit_CalcDevHorMetrics @ 0x1C02BCBD4 (sbit_CalcDevHorMetrics.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C02BE308 (sbit_GetDevAdvanceHeight.c)
 *     sbit_GetDevAdvanceWidth @ 0x1C02BE43C (sbit_GetDevAdvanceWidth.c)
 *     fsg_GetContourData @ 0x1C02C1828 (fsg_GetContourData.c)
 *     fsg_GridFit @ 0x1C02C1940 (fsg_GridFit.c)
 *     fsg_QueryTwilightElement @ 0x1C02C22BC (fsg_QueryTwilightElement.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C02C2328 (fsg_QueryTwilightElementSubPixel.c)
 *     fsg_RunPreProgram @ 0x1C02C2388 (fsg_RunPreProgram.c)
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C02C270C (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02C2890 (fsg_UpdateWorkSpaceElement.c)
 */

__int64 __fastcall fs__Contour(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v6; // r12d
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int16 v16; // dx
  __int64 TwilightElement; // rax
  __int64 v18; // r10
  int v19; // r11d
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r10d
  __int64 v23; // rdx
  __int16 v24; // ax
  unsigned int v25; // r12d
  int v26; // esi
  unsigned __int16 v27; // ax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r9d
  int v31; // r13d
  __int64 v32; // r8
  __int16 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rbx
  unsigned __int16 v36; // dx
  unsigned __int16 v37; // ax
  int v38; // ecx
  int v39; // r9d
  int v40; // r10d
  int v41; // r8d
  int v42; // [rsp+58h] [rbp-11h]
  int v43; // [rsp+60h] [rbp-9h]
  int v44; // [rsp+70h] [rbp+7h] BYREF
  __int64 TwilightElementSubPixel; // [rsp+78h] [rbp+Fh]
  __int64 v46; // [rsp+80h] [rbp+17h]
  __int64 v47; // [rsp+D0h] [rbp+67h] BYREF
  int v48; // [rsp+E0h] [rbp+77h]
  int v49; // [rsp+E8h] [rbp+7Fh] BYREF
  int v50; // [rsp+ECh] [rbp+83h]

  v48 = a3;
  v3 = 0;
  v6 = 0;
  LODWORD(v47) = 0;
  v7 = 0;
  v46 = 0LL;
  TwilightElementSubPixel = 0LL;
  v49 = 0;
  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v8 = fs_SetUpKey(a1, 14, &v47);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)v47;
  v11 = *(_QWORD *)(v8 + 232);
  v12 = *(_QWORD *)(v11 + 24);
  if ( *(_QWORD *)(v9 + 264) != v12 || *(_QWORD *)(v9 + 272) != *(_QWORD *)(v11 + 32) )
  {
    *(_QWORD *)(v9 + 432) = v12 + *(unsigned int *)(v9 + 480);
    *(_QWORD *)(v9 + 440) = v12 + *(unsigned int *)(v9 + 484);
    *(_QWORD *)(v9 + 448) = v12 + *(unsigned int *)(v9 + 488);
    *(_QWORD *)(v9 + 456) = v12 + *(unsigned int *)(v9 + 492);
    *(_QWORD *)(v9 + 464) = v12 + *(unsigned int *)(v9 + 496);
    *(_QWORD *)(v9 + 472) = v12 + *(unsigned int *)(v9 + 548);
    result = fsg_UpdatePrivateSpaceAddresses(
               v9,
               (int)v9 + 388,
               *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL),
               (int)v9 + 568,
               *(_QWORD *)(v9 + 432),
               (__int64)&v44,
               (__int64)&v47);
    if ( (_DWORD)result )
      return result;
    v13 = *(_QWORD *)(v9 + 232);
    *(_OWORD *)(v9 + 240) = *(_OWORD *)v13;
    *(_OWORD *)(v9 + 256) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(v9 + 272) = *(_OWORD *)(v13 + 32);
    *(_OWORD *)(v9 + 288) = *(_OWORD *)(v13 + 48);
    *(_QWORD *)(v9 + 304) = *(_QWORD *)(v13 + 64);
  }
  fsg_UpdateWorkSpaceElement(v9 + 480, v9 + 432);
  v14 = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL);
  v15 = v14 + *(unsigned int *)(v9 + 584);
  if ( (*(_BYTE *)(v9 + 1076) & 2) != 0 )
  {
    v6 = v14 + *(_DWORD *)(v9 + 668);
    v46 = v14 + *(unsigned int *)(v9 + 668);
    TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v14, v9 + 568);
  }
  v16 = *(_WORD *)(v9 + 1076);
  if ( (v16 & 3) == 1 )
  {
    v49 = 1;
    if ( (v16 & 0x10) != 0 )
      v7 = 1;
  }
  TwilightElement = fsg_QueryTwilightElement(*(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL), v9 + 568);
  v20 = TwilightElement;
  v47 = TwilightElement;
  if ( !*(_DWORD *)(v9 + 1064) )
  {
    *(_DWORD *)(v9 + 424) = 0;
    v19 = 0;
    v48 = 0;
  }
  if ( *(_DWORD *)(v9 + 424) )
  {
    *(_DWORD *)(v9 + 424) = 0;
    result = fsg_RunPreProgram(v9, (int)v9 + 388, (int)v9 + 316, v15, v18, TwilightElement, 0LL);
    if ( (_DWORD)result
      || (*(_BYTE *)(v9 + 1076) & 2) != 0
      && (result = fsg_RunPreProgram(v9, (int)v9 + 388, (int)v9 + 1080, v6, v9 + 432, TwilightElementSubPixel, 0LL),
          (_DWORD)result) )
    {
      *(_DWORD *)(v9 + 1064) = 0;
      return result;
    }
    v20 = v47;
    v18 = v9 + 432;
    v19 = v48;
  }
  if ( *(_DWORD *)(a1 + 120) && *(_DWORD *)(v9 + 844) && (*(_BYTE *)(v9 + 1076) & 1) == 0 )
  {
    *(_DWORD *)(v9 + 956) = 1;
    result = sbit_GetDevAdvanceWidth(v9 + 964, v9, &v47);
    if ( (_DWORD)result )
      return result;
    result = sbit_GetDevAdvanceHeight(v9 + 964, v9, &v49);
    if ( (_DWORD)result )
      return result;
    v21 = v50;
    v22 = v49;
    goto LABEL_51;
  }
  v43 = v49;
  v42 = *(_DWORD *)(v9 + 1068);
  *(_DWORD *)(v9 + 956) = 0;
  result = fsg_GridFit(
             v9,
             (int)v9 + 388,
             (int)v9 + 316,
             v15,
             v18,
             v20,
             *(_QWORD *)(a1 + 112),
             v19,
             v9 + 312,
             v9 + 952,
             v9 + 384,
             v42,
             v43,
             v7);
  if ( (_DWORD)result )
    return result;
  v24 = *(_WORD *)(v9 + 1076);
  if ( (v24 & 1) == 0 )
  {
LABEL_50:
    fsg_GetContourData(
      v9 + 432,
      *(_WORD *)(v9 + 1076) & 1,
      *(_WORD *)(v9 + 1076) & 0x10,
      a2 + 120,
      a2 + 128,
      a2 + 136,
      a2 + 144,
      a2 + 152,
      a2 + 224,
      a2 + 118);
    v35 = *(_QWORD *)(v9 + 448);
    scl_CalcDevAdvanceWidth(v35, &v47);
    v36 = *(_WORD *)(*(_QWORD *)(v35 + 64) + 2LL * (*(__int16 *)(v35 + 80) - 1));
    v37 = v36 + 4;
    v36 += 3;
    v22 = *(_DWORD *)(*(_QWORD *)v35 + 4LL * v36) - *(_DWORD *)(*(_QWORD *)v35 + 4LL * v37);
    v21 = *(_DWORD *)(*(_QWORD *)(v35 + 8) + 4LL * v36) - *(_DWORD *)(*(_QWORD *)(v35 + 8) + 4LL * v37);
LABEL_51:
    v38 = (_DWORD)v47 << 10;
    v39 = HIDWORD(v47) << 10;
    v40 = v22 << 10;
    v41 = v21 << 10;
    *(_DWORD *)(a2 + 72) = (_DWORD)v47 << 10;
    *(_DWORD *)(a2 + 76) = v39;
    *(_DWORD *)(a2 + 204) = v40;
    *(_DWORD *)(a2 + 208) = v41;
    if ( (*(_BYTE *)(v9 + 1076) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 72) = (v38 + 3) / 6;
      *(_DWORD *)(a2 + 204) = (v40 + 3) / 6;
      if ( (*(_BYTE *)(v9 + 1076) & 0x10) != 0 )
      {
        *(_DWORD *)(a2 + 76) = (v39 + 2) / 5;
        *(_DWORD *)(a2 + 208) = (v41 + 2) / 5;
      }
    }
    *(_WORD *)(a2 + 116) = *(_WORD *)(v9 + 952);
    *(_QWORD *)(a2 + 160) = *(_QWORD *)(*(_QWORD *)(v9 + 232) + 32LL) + *(unsigned int *)(v9 + 580);
    result = 0LL;
    *(_DWORD *)(v9 + 420) = 30;
    return result;
  }
  LODWORD(v47) = 0;
  v44 = 0;
  v49 = 0;
  v25 = (v24 & 0x10 | 4) << 14;
  v26 = 0;
  if ( (v24 & 2) == 0 )
  {
    v31 = v48;
LABEL_44:
    scl_ScaleUpToSubPixelOverscale(*(_QWORD *)(v9 + 448), v23, v25);
    if ( v31 && (*(_BYTE *)(v9 + 1076) & 2) != 0 )
    {
      v32 = *(_QWORD *)(v9 + 448);
      v33 = *(_WORD *)(*(_QWORD *)(v32 + 64) + 2LL * (*(__int16 *)(v32 + 80) - 1));
      if ( v33 != -1 )
      {
        v34 = 0LL;
        do
        {
          ++v3;
          v34 += 4LL;
        }
        while ( v3 < (unsigned __int16)(v33 + 1) );
      }
      *(_DWORD *)(*(_QWORD *)v32 + 4LL * (unsigned __int16)(v33 + 2)) = 6 * v26
                                                                      + *(_DWORD *)(*(_QWORD *)v32
                                                                                  + 4LL * (unsigned __int16)(v33 + 1));
    }
    goto LABEL_50;
  }
  if ( *(_DWORD *)(v9 + 844) )
  {
    result = sbit_CalcDevHorMetrics((int)v9 + 964, v9, (unsigned int)&v47, (unsigned int)&v44, (__int64)&v49);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    scl_CalcDevHorMetrics(*(_QWORD *)(v9 + 448), &v47, &v44, &v49);
  }
  v27 = *(_WORD *)(v9 + 384);
  v26 = v47;
  if ( v27 && (_DWORD)v47 )
  {
    v28 = InvokeGlobalGSScale(*(unsigned int *)(v15 + 184), v15 + 264, v27);
    v47 = (__int64)v26 << 16;
    v29 = CompDiv(v28, v47);
    if ( v29 < 0 )
      v29 = -v29;
  }
  else
  {
    v29 = 0x10000;
  }
  v30 = v46;
  v31 = v48;
  *(_DWORD *)(v46 + 468) = v29;
  result = fsg_GridFit(
             v9,
             (int)v9 + 388,
             (int)v9 + 1080,
             v30,
             v9 + 432,
             TwilightElementSubPixel,
             *(_QWORD *)(a1 + 112),
             v31,
             v9 + 312,
             v9 + 952,
             v9 + 384,
             *(_DWORD *)(v9 + 1068),
             *(_WORD *)(v9 + 1076) & 1,
             *(_WORD *)(v9 + 1076) & 0x10);
  if ( !(_DWORD)result )
    goto LABEL_44;
  return result;
}
