/*
 * XREFs of bComputeIFISIZE @ 0x1C0227BD8
 * Callers:
 *     bVerifyTTF @ 0x1C022A460 (bVerifyTTF.c)
 * Callees:
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ConvertLangIDtoCodePage @ 0x1C02270E0 (ConvertLangIDtoCodePage.c)
 *     bConvertExtras @ 0x1C02282EC (bConvertExtras.c)
 *     bShellFontFace @ 0x1C0229B74 (bShellFontFace.c)
 *     fsSelectionTTFD @ 0x1C022B0F0 (fsSelectionTTFD.c)
 */

__int64 __fastcall bComputeIFISIZE(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int *a6,
        _DWORD *a7,
        int *a8)
{
  unsigned __int64 v8; // rsi
  int v9; // r15d
  unsigned __int64 v10; // rdi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  int v17; // ebp
  int v18; // r14d
  unsigned __int64 v19; // rdi
  int i; // r11d
  unsigned __int64 v21; // rcx
  _WORD *v22; // r8
  __int64 v23; // r10
  unsigned __int16 v24; // ax
  unsigned int v25; // r9d
  int v26; // eax
  char v27; // dl
  bool v28; // zf
  int v29; // eax
  unsigned __int16 v30; // ax
  int v31; // ecx
  void *v32; // rax
  __int16 v33; // bp
  __int64 v34; // rdx
  unsigned int v35; // r11d
  __int16 v36; // di
  _WORD *v37; // r8
  __int64 v38; // r10
  unsigned __int16 v39; // ax
  __int16 v40; // cx
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edi
  int v46; // esi
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // edi
  unsigned int v50; // ecx
  size_t v51; // r8
  char v52; // al
  __int64 v53; // r9
  __int64 v54; // r10
  size_t v55; // r8
  unsigned int v56; // edi
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  int v60; // eax
  int v61; // ecx
  __int64 result; // rax
  void *Buf1; // [rsp+20h] [rbp-88h]
  USHORT AnsiCodePage[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v65; // [rsp+2Ch] [rbp-7Ch]
  unsigned __int64 v66; // [rsp+30h] [rbp-78h]
  USHORT OemCodePage[2]; // [rsp+38h] [rbp-70h] BYREF
  int v68; // [rsp+3Ch] [rbp-6Ch]
  _WORD *v69; // [rsp+40h] [rbp-68h]
  unsigned __int64 v70; // [rsp+48h] [rbp-60h]
  unsigned __int64 v71; // [rsp+50h] [rbp-58h]

  v8 = *(unsigned int *)(a2 + 60);
  v9 = 0;
  v10 = a1 + *(unsigned int *)(a2 + 56);
  Buf1 = 0LL;
  v69 = 0LL;
  v65 = 0;
  v13 = v10 + v8;
  if ( (unsigned int)v8 < 6 )
    return 0LL;
  v68 = 1;
  if ( ((a3 - 1) & 0xFFFD) != 0 )
    return 0LL;
  memset(a6, 0, 0x88uLL);
  *((_WORD *)a6 + 67) = a4;
  v14 = v10 + 6;
  *((_WORD *)a6 + 66) = a3;
  v71 = v10 + 6;
  if ( v10 >= v10 + 6 )
    return 0LL;
  if ( v14 > v13 )
    return 0LL;
  v15 = v14 + 12LL * (unsigned __int16)__ROR2__(*(_WORD *)(v10 + 2), 8);
  v16 = v10 + (unsigned __int16)__ROR2__(*(_WORD *)(v10 + 4), 8);
  v66 = v15;
  if ( v14 > v15 )
    return 0LL;
  if ( v15 > v16 )
    return 0LL;
  if ( v16 > v13 )
    return 0LL;
  v70 = v13 - v16;
  v17 = 0;
  v18 = 0;
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
  if ( v8 < 12 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(v10 + 2), 8) + 6 )
    return 0LL;
  v19 = v70;
  for ( i = 0; i < 4; ++i )
  {
    if ( v17 )
      break;
    if ( v14 >= v66 )
      continue;
    v21 = v66;
    v22 = (_WORD *)(v14 + 4);
    while ( !v17 )
    {
      v23 = (unsigned __int16)__ROR2__(v22[3], 8);
      v24 = __ROR2__(v22[2], 8);
      v25 = v24;
      if ( v24 )
      {
        if ( v24 + (unsigned int)v23 > v19 )
          goto LABEL_58;
        v17 = 0;
        if ( i )
        {
          if ( i == 1 )
          {
            if ( (unsigned __int8)a5 == 4 )
            {
              v29 = ConvertLangIDtoCodePage(__ROR2__(*v22, 8));
              v9 = 0;
              if ( v29 != AnsiCodePage[0] )
                goto LABEL_27;
LABEL_23:
              v28 = v27 == 4;
LABEL_31:
              LOBYTE(v9) = v28;
              goto LABEL_32;
            }
            v28 = (unsigned __int16)(unsigned __int8)__ROR2__(*v22, 8) == (unsigned __int16)(unsigned __int8)a5;
          }
          else
          {
            if ( i != 2 )
            {
              if ( i == 3 )
                v9 = 1;
LABEL_32:
              if ( __ROR2__(*(v22 - 2), 8) == a3 && __ROR2__(*(v22 - 1), 8) == a4 && v9 )
              {
                v30 = __ROR2__(v22[1], 8);
                switch ( v30 )
                {
                  case 1u:
                    if ( !*((_QWORD *)a6 + 1) )
                    {
                      a6[4] = v25;
                      *((_QWORD *)a6 + 1) = v23 + v16;
                      v69 = v22 - 2;
                    }
                    break;
                  case 2u:
                    if ( !*((_QWORD *)a6 + 5) )
                    {
                      a6[12] = v25;
                      *((_QWORD *)a6 + 5) = v23 + v16;
                    }
                    break;
                  case 3u:
                    if ( !*((_QWORD *)a6 + 7) )
                    {
                      a6[16] = v25;
                      *((_QWORD *)a6 + 7) = v23 + v16;
                    }
                    break;
                  default:
                    v31 = v30 - 4;
                    if ( v30 != 4 )
                    {
                      v32 = Buf1;
                      if ( v31 == 1 && !Buf1 )
                      {
                        v32 = (void *)(v23 + v16);
                        v65 = v25;
                        Buf1 = (void *)(v23 + v16);
                      }
LABEL_51:
                      if ( *((_QWORD *)a6 + 1) && *((_QWORD *)a6 + 5) && *((_QWORD *)a6 + 7) && *((_QWORD *)a6 + 9) )
                      {
                        v18 = 1;
                        if ( v32 )
                          v17 = 1;
                      }
                      else
                      {
                        v18 = 0;
                      }
LABEL_58:
                      v21 = v66;
                      goto LABEL_59;
                    }
                    if ( !*((_QWORD *)a6 + 9) )
                    {
                      a6[20] = v25;
                      *((_QWORD *)a6 + 9) = v23 + v16;
                    }
                    break;
                }
              }
              v32 = Buf1;
              goto LABEL_51;
            }
            if ( (_BYTE)a5 == 4 )
            {
              v26 = ConvertLangIDtoCodePage(__ROR2__(*v22, 8));
              v9 = 0;
              if ( v26 != AnsiCodePage[0] )
                goto LABEL_23;
LABEL_27:
              v28 = v27 == 9;
              goto LABEL_31;
            }
            v28 = (unsigned __int8)__ROR2__(*v22, 8) == 9;
          }
        }
        else
        {
          v28 = __ROR2__(*v22, 8) == a5;
        }
        v9 = 0;
        goto LABEL_31;
      }
LABEL_59:
      v22 += 6;
      if ( (unsigned __int64)(v22 - 2) >= v21 )
        break;
    }
    v14 = v71;
  }
  if ( !v18 )
    return 0LL;
  v33 = a3;
  if ( a3 != 3 )
    goto LABEL_83;
  v34 = 0LL;
  v35 = 0;
  v36 = (unsigned __int8)__ROR2__(v69[2], 8);
  if ( v14 >= v66 )
  {
    v33 = 3;
    goto LABEL_83;
  }
  v37 = (_WORD *)(v14 + 8);
  while ( 2 )
  {
    v38 = (unsigned __int16)__ROR2__(v37[1], 8);
    v39 = __ROR2__(*v37, 8);
    if ( !v39 )
      goto LABEL_80;
    if ( v39 + (unsigned int)v38 > v70 )
      goto LABEL_80;
    v40 = (unsigned __int8)__ROR2__(*(v37 - 2), 8);
    if ( __ROR2__(*(v37 - 4), 8) != 3
      || __ROR2__(*(v37 - 3), 8) != a4
      || __ROR2__(*(v37 - 1), 8) != (_WORD)v68
      || v69 == v37 - 4 )
    {
      goto LABEL_80;
    }
    if ( v36 == 9 )
    {
      if ( v40 != 9 )
        goto LABEL_74;
LABEL_78:
      if ( !v34 )
      {
        v34 = v38 + v16;
        v35 = v39;
      }
LABEL_80:
      v37 += 6;
      if ( (unsigned __int64)(v37 - 4) >= v66 )
        goto LABEL_75;
      continue;
    }
    break;
  }
  if ( v40 != 9 )
    goto LABEL_78;
LABEL_74:
  v34 = v38 + v16;
  v35 = v39;
LABEL_75:
  v33 = 3;
  if ( v34 )
  {
    *((_QWORD *)a6 + 3) = v34;
    a6[8] = v35;
  }
LABEL_83:
  if ( !(unsigned int)bConvertExtras(0LL, a6) )
    return 0LL;
  v41 = a6[28] + 204;
  a6[23] = 204;
  if ( *((_QWORD *)a6 + 3) )
  {
    v42 = a6[29] + 4;
    a6[24] = v41;
    v41 += v42;
  }
  v43 = v41 + 2;
  v44 = a6[32] + 2;
  v45 = a6[30] + 3;
  v46 = 72;
  a6[26] = v43;
  v47 = a6[31] + v43;
  *a7 = 0;
  a6[27] = v47;
  v48 = v44 + v47;
  a6[25] = v48;
  v49 = (v48 + v45) & 0xFFFFFFFC;
  if ( Buf1 )
  {
    v50 = v65;
    if ( v33 == 3 )
    {
      if ( v65 > 0x48 )
        v50 = 72;
      v51 = v50 - 2;
      if ( v50 <= 2 )
        v51 = v50;
      *a7 = memcmp(Buf1, &awszType1, v51) == 0;
    }
    else
    {
      if ( v65 > 0x24 )
        v50 = 36;
      v55 = v50 - 1;
      if ( v50 <= 1 )
        v55 = v50;
      *a7 = strncmp((const char *)Buf1, "Converter: Windows Type 1 Installer", v55) == 0;
    }
  }
  v52 = fsSelectionTTFD(a1, a2);
  if ( (v52 & 0x21) != 0 )
  {
    if ( (v52 & 0x21) != 1 && (v52 & 0x21) != 0x20 )
    {
      a6[1] = 0;
      goto LABEL_104;
    }
    v46 = 32;
  }
  a6[1] = v49;
  v49 += v46;
LABEL_104:
  a6[21] = v49;
  v56 = v49 + 16;
  v57 = *(unsigned int *)(v53 + 64);
  if ( (_DWORD)v57 )
    v58 = v54 + v57;
  else
    v58 = 0LL;
  if ( v58 )
  {
    a6[22] = v56;
    v56 += 24;
  }
  v59 = a6[16];
  *a8 = 0;
  switch ( v59 )
  {
    case '8':
      if ( (unsigned int)bShellFontFace("Microsoft Sans Serif Regular", *((_QWORD *)a6 + 7), 28LL) )
        *a8 = 1;
      break;
    case '0':
      if ( (unsigned int)bShellFontFace("Microsoft Tahoma Regular", *((_QWORD *)a6 + 7), 24LL) )
        *a8 = 2;
      break;
    case '*':
      v60 = bShellFontFace("Microsoft Tahoma Bold", *((_QWORD *)a6 + 7), 21LL);
      v61 = *a8;
      if ( v60 )
        v61 = 3;
      *a8 = v61;
      break;
  }
  result = 1LL;
  *a6 = (v56 + 7) & 0xFFFFFFF8;
  return result;
}
