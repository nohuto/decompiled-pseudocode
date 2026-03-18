/*
 * XREFs of fs__NewTransformation @ 0x1C02B684C
 * Callers:
 *     bSetXform @ 0x1C02321CC (bSetXform.c)
 *     bChangeXform @ 0x1C02333B0 (bChangeXform.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B5FE4 (fs_SetUpKey.c)
 *     sbit_NewTransform @ 0x1C02BEB18 (sbit_NewTransform.c)
 *     fsg_CopyFontProgramResults @ 0x1C02C09CC (fsg_CopyFontProgramResults.c)
 *     fsg_InitInterpreterTrans @ 0x1C02C1ABC (fsg_InitInterpreterTrans.c)
 *     fsg_QueryPPEMXY @ 0x1C02C2224 (fsg_QueryPPEMXY.c)
 *     fsg_QueryTwilightElement @ 0x1C02C22BC (fsg_QueryTwilightElement.c)
 *     fsg_QueryTwilightElementSubPixel @ 0x1C02C2328 (fsg_QueryTwilightElementSubPixel.c)
 *     fsg_RunPreProgram @ 0x1C02C2388 (fsg_RunPreProgram.c)
 *     fsg_UpdatePrivateSpaceAddresses @ 0x1C02C270C (fsg_UpdatePrivateSpaceAddresses.c)
 *     fsg_UpdateWorkSpaceElement @ 0x1C02C2890 (fsg_UpdateWorkSpaceElement.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C35E8 (sfac_CopyFontAndPrePrograms.c)
 *     itrp_ExecuteFontPgm @ 0x1C02CB4AC (itrp_ExecuteFontPgm.c)
 */

__int64 __fastcall fs__NewTransformation(__int64 a1, __int64 a2)
{
  __int64 *v3; // r9
  int *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r11d
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  char v19; // al
  __int16 v20; // cx
  __int16 v21; // r10
  __int64 v22; // rcx
  __int64 TwilightElementSubPixel; // rax
  int v24; // ecx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // r8
  BOOL v30; // eax
  unsigned int inited; // eax
  __int16 v32; // dx
  unsigned int v33; // ecx
  __int64 v34; // r10
  int v35; // eax
  int v36; // r9d
  int v37; // edx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int16 v40; // [rsp+60h] [rbp-20h] BYREF
  __int64 TwilightElement; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+48h]
  __int64 v46; // [rsp+D8h] [rbp+58h] BYREF

  v45 = a2;
  LODWORD(v44) = 0;
  v46 = 0LL;
  v42 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return 4099LL;
  v3 = (__int64 *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v4 = (int *)(a2 + 12);
  v5 = 2LL;
  do
  {
    v6 = *v4++;
    v7 = *v3++;
    *(_DWORD *)(v6 + v7 - 4) = 1936092788;
    --v5;
  }
  while ( v5 );
  v8 = fs_SetUpKey(a1, 2, &v44);
  v10 = v8;
  if ( !v8 )
    return (unsigned int)v44;
  *(_DWORD *)(v8 + 1064) = v9;
  v12 = (__int64 *)(v8 + 432);
  v13 = *(_QWORD *)(*(_QWORD *)(v8 + 232) + 24LL);
  *(_QWORD *)(v8 + 432) = v13 + *(unsigned int *)(v8 + 480);
  *(_QWORD *)(v8 + 440) = v13 + *(unsigned int *)(v8 + 484);
  *(_QWORD *)(v8 + 448) = v13 + *(unsigned int *)(v8 + 488);
  *(_QWORD *)(v8 + 456) = v13 + *(unsigned int *)(v8 + 492);
  *(_QWORD *)(v8 + 464) = v13 + *(unsigned int *)(v8 + 496);
  *(_QWORD *)(v8 + 472) = v13 + *(unsigned int *)(v8 + 548);
  fsg_UpdateWorkSpaceElement(v8 + 480, v8 + 432);
  result = fsg_UpdatePrivateSpaceAddresses(
             v10,
             (int)v10 + 388,
             *(_QWORD *)(*(_QWORD *)(v10 + 232) + 32LL),
             (int)v10 + 568,
             *v12,
             (__int64)&v43,
             (__int64)&v44);
  if ( !(_DWORD)result )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 32LL);
    v15 = v14 + *(unsigned int *)(v10 + 584);
    TwilightElement = fsg_QueryTwilightElement(v14, v10 + 568);
    v16 = *(_QWORD *)(v10 + 232);
    *(_OWORD *)(v10 + 240) = *(_OWORD *)v16;
    *(_OWORD *)(v10 + 256) = *(_OWORD *)(v16 + 16);
    *(_OWORD *)(v10 + 272) = *(_OWORD *)(v16 + 32);
    *(_OWORD *)(v10 + 288) = *(_OWORD *)(v16 + 48);
    *(_QWORD *)(v10 + 304) = *(_QWORD *)(v16 + 64);
    *(_DWORD *)(v10 + 424) = *(_QWORD *)(a1 + 128) == 0LL;
    if ( !*(_DWORD *)(v10 + 1064) )
      *(_QWORD *)(v10 + 424) = 1LL;
    if ( !*(_DWORD *)(v10 + 428) || (result = sfac_CopyFontAndPrePrograms(v10, v43, v44), !(_DWORD)result) )
    {
      v17 = *(_QWORD *)(a1 + 120);
      *(_OWORD *)(v10 + 320) = *(_OWORD *)v17;
      *(_OWORD *)(v10 + 336) = *(_OWORD *)(v17 + 16);
      *(_DWORD *)(v10 + 352) = *(_DWORD *)(v17 + 32);
      *(_DWORD *)(v10 + 368) = *(_DWORD *)(a1 + 112);
      *(_WORD *)(v10 + 832) = *(_WORD *)(a1 + 136);
      if ( *(_DWORD *)(a1 + 164) )
      {
        if ( *(_WORD *)(a1 + 136) != 4
          || !*(_DWORD *)(a1 + 148)
          || (*(_BYTE *)(a1 + 152) & 1) != 0
          || *(_DWORD *)(a1 + 160) )
        {
          return 6913LL;
        }
        *(_WORD *)(v10 + 832) = 0;
        *(_WORD *)(v10 + 1156) = *(_WORD *)(a1 + 136);
      }
      else
      {
        *(_WORD *)(v10 + 1156) = 0;
      }
      *(_DWORD *)(v10 + 1152) = *(_DWORD *)(a1 + 164);
      v18 = *(unsigned __int16 *)(a1 + 108);
      *(_WORD *)(v10 + 1076) = 0;
      v19 = *(_BYTE *)(a1 + 152);
      LOWORD(v44) = v18;
      if ( (v19 & 1) != 0 )
        *(_WORD *)(v10 + 1076) = 1;
      if ( (*(_BYTE *)(a1 + 152) & 2) != 0 && !*(_DWORD *)(v10 + 324) )
        *(_WORD *)(v10 + 1076) |= 2u;
      if ( (*(_BYTE *)(a1 + 152) & 4) != 0 )
        *(_WORD *)(v10 + 1076) |= 4u;
      if ( (*(_BYTE *)(a1 + 152) & 0x11) == 1 && !*(_DWORD *)(v10 + 320) )
        *(_WORD *)(v10 + 1076) ^= 4u;
      if ( (*(_BYTE *)(a1 + 152) & 8) != 0 )
        *(_WORD *)(v10 + 1076) |= 8u;
      if ( (*(_BYTE *)(a1 + 152) & 0x10) != 0 )
        *(_WORD *)(v10 + 1076) |= 0x10u;
      v20 = *(_WORD *)(v10 + 1076);
      v21 = 0;
      if ( (v20 & 1) != 0 && *(_WORD *)(v10 + 832) )
        return 5889LL;
      if ( (v20 & 0xE) != 0 )
      {
        if ( (v20 & 1) == 0 )
          return 5889LL;
      }
      else if ( (v20 & 1) == 0 )
      {
        goto LABEL_44;
      }
      if ( (v20 & 2) != 0 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 32LL);
        v46 = v22 + *(unsigned int *)(v10 + 668);
        TwilightElementSubPixel = fsg_QueryTwilightElementSubPixel(v22, v10 + 568);
        v24 = *(_DWORD *)(v10 + 380);
        v25 = *(_OWORD *)(v10 + 332);
        v18 = (unsigned __int16)v44;
        *(_OWORD *)(v10 + 1080) = *(_OWORD *)(v10 + 316);
        v42 = TwilightElementSubPixel;
        v26 = *(_OWORD *)(v10 + 348);
        *(_OWORD *)(v10 + 1096) = v25;
        v27 = *(_OWORD *)(v10 + 364);
        *(_OWORD *)(v10 + 1112) = v26;
        *(_OWORD *)(v10 + 1128) = v27;
        *(_DWORD *)(v10 + 1144) = v24;
      }
      else
      {
        v21 = *(_WORD *)(v10 + 1076);
      }
LABEL_44:
      v28 = *(_WORD *)(v10 + 832);
      if ( v28 && ((1 << (v28 - 1)) & 0x8B) == 0 )
        return 5889LL;
      if ( v28 > 0x1Fu )
        return 5889LL;
      if ( *(_DWORD *)(a1 + 164) )
      {
        v29 = *(_WORD *)(v10 + 1156);
        if ( ((1 << (v29 - 1)) & 0x8B) == 0 || v29 > 0x1Fu )
          return 5889LL;
      }
      v30 = v28 != 0;
      *(_DWORD *)(v10 + 836) = v30;
      *(_DWORD *)(v15 + 392) = v30;
      *(_WORD *)(v15 + 452) = v21;
      inited = fsg_InitInterpreterTrans(
                 (int)v10 + 316,
                 v15,
                 *(_DWORD *)(a1 + 104),
                 v18,
                 *(_WORD *)(a1 + 110),
                 *(_DWORD *)(a1 + 156),
                 *(_WORD *)(a1 + 138),
                 *(_WORD *)(a1 + 140),
                 *(_WORD *)(v10 + 228),
                 *(_DWORD *)(a1 + 144),
                 v10 + 1072,
                 v10 + 1074);
      v32 = *(_WORD *)(v10 + 1076);
      v33 = inited;
      if ( (v32 & 2) != 0 )
      {
        v34 = v46;
        v35 = *(_DWORD *)(v10 + 836);
        v36 = (unsigned __int16)v44;
        *(_WORD *)(v46 + 452) = v32;
        *(_DWORD *)(v34 + 392) = v35;
        v33 = fsg_InitInterpreterTrans(
                (int)v10 + 1080,
                v34,
                *(_DWORD *)(a1 + 104),
                v36,
                *(_WORD *)(a1 + 110),
                *(_DWORD *)(a1 + 156),
                *(_WORD *)(a1 + 138),
                *(_WORD *)(a1 + 140),
                *(_WORD *)(v10 + 228),
                *(_DWORD *)(a1 + 144),
                v10 + 1072,
                v10 + 1074);
      }
      *(_DWORD *)(v10 + 1068) = *(_DWORD *)(a1 + 148);
      v37 = *(_DWORD *)(a1 + 160);
      if ( v37 && ((*(_BYTE *)(a1 + 152) & 1) == 0 || !*(_DWORD *)(a1 + 148)) )
        return 6914LL;
      *(_DWORD *)(v10 + 1148) = v37;
      if ( v33 )
        return v33;
      if ( *(_DWORD *)(v10 + 428) )
      {
        v38 = *(_QWORD *)(a1 + 128);
        v39 = TwilightElement;
        *(_DWORD *)(v15 + 408) = 10000000;
        result = itrp_ExecuteFontPgm(v39, *(_QWORD *)(v10 + 448), v15, v38);
        if ( (_DWORD)result )
          return result;
        *(_DWORD *)(v10 + 428) = 0;
      }
      if ( (*(_BYTE *)(v10 + 1076) & 2) != 0 )
        fsg_CopyFontProgramResults(v15, v46);
      if ( !*(_DWORD *)(v10 + 424)
        && ((result = fsg_RunPreProgram(
                        v10,
                        (int)v10 + 388,
                        (int)v10 + 316,
                        v15,
                        (__int64)v12,
                        TwilightElement,
                        *(_QWORD *)(a1 + 128)),
             (_DWORD)result)
         || (*(_BYTE *)(v10 + 1076) & 2) != 0
         && (result = fsg_RunPreProgram(
                        v10,
                        (int)v10 + 388,
                        (int)v10 + 1080,
                        v46,
                        (__int64)v12,
                        v42,
                        *(_QWORD *)(a1 + 128)),
             (_DWORD)result)) )
      {
        *(_DWORD *)(v10 + 1064) = 0;
      }
      else
      {
        *(_QWORD *)(v45 + 160) = *(_QWORD *)(*(_QWORD *)(v10 + 232) + 32LL) + *(unsigned int *)(v10 + 580);
        fsg_QueryPPEMXY(v15, v10 + 316, (unsigned int)&v40, (unsigned int)&v46, (__int64)&v44);
        result = sbit_NewTransform(
                   (int)v10 + 964,
                   *(unsigned __int16 *)(v10 + 316),
                   *(unsigned __int16 *)(v10 + 1072),
                   *(unsigned __int16 *)(v10 + 1074),
                   v40,
                   v46,
                   v44);
        if ( !(_DWORD)result )
          *(_DWORD *)(v10 + 420) = 6;
      }
    }
  }
  return result;
}
