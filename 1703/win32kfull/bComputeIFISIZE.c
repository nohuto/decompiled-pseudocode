/*
 * XREFs of bComputeIFISIZE @ 0x1C0226660
 * Callers:
 *     bVerifyTTF @ 0x1C0228EE8 (bVerifyTTF.c)
 * Callees:
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ConvertLangIDtoCodePage @ 0x1C0225B60 (ConvertLangIDtoCodePage.c)
 *     bConvertExtras @ 0x1C0226D68 (bConvertExtras.c)
 *     bShellFontFace @ 0x1C02285E8 (bShellFontFace.c)
 *     fsSelectionTTFD @ 0x1C0229B90 (fsSelectionTTFD.c)
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
  BOOL v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // r11d
  _WORD *v37; // r8
  _BOOL8 v38; // rsi
  __int64 v39; // r10
  unsigned __int16 v40; // ax
  BOOL v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edi
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // edi
  unsigned int v50; // ecx
  size_t v51; // r8
  char v52; // al
  __int64 v53; // r10
  __int64 v54; // r11
  size_t v55; // r8
  int v56; // eax
  unsigned int v57; // edi
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  int v61; // eax
  int v62; // ecx
  __int64 result; // rax
  void *Buf1; // [rsp+20h] [rbp-88h]
  USHORT AnsiCodePage[2]; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v66; // [rsp+2Ch] [rbp-7Ch]
  unsigned __int64 v67; // [rsp+30h] [rbp-78h]
  USHORT OemCodePage[2]; // [rsp+38h] [rbp-70h] BYREF
  int v69; // [rsp+3Ch] [rbp-6Ch]
  _WORD *v70; // [rsp+40h] [rbp-68h]
  unsigned __int64 v71; // [rsp+48h] [rbp-60h]
  unsigned __int64 v72; // [rsp+50h] [rbp-58h]

  v8 = *(unsigned int *)(a2 + 60);
  v9 = 0;
  v10 = a1 + *(unsigned int *)(a2 + 56);
  Buf1 = 0LL;
  v70 = 0LL;
  v66 = 0;
  v13 = v10 + v8;
  if ( (unsigned int)v8 < 6 )
    return 0LL;
  v69 = 1;
  if ( ((a3 - 1) & 0xFFFD) != 0 )
    return 0LL;
  memset(a6, 0, 0x88uLL);
  *((_WORD *)a6 + 67) = a4;
  v14 = v10 + 6;
  *((_WORD *)a6 + 66) = a3;
  v72 = v10 + 6;
  if ( v10 >= v10 + 6 )
    return 0LL;
  if ( v14 > v13 )
    return 0LL;
  v15 = v14 + 12LL * (unsigned __int16)__ROR2__(*(_WORD *)(v10 + 2), 8);
  v16 = v10 + (unsigned __int16)__ROR2__(*(_WORD *)(v10 + 4), 8);
  v67 = v15;
  if ( v14 > v15 )
    return 0LL;
  if ( v15 > v16 )
    return 0LL;
  if ( v16 > v13 )
    return 0LL;
  v71 = v13 - v16;
  v17 = 0;
  v18 = 0;
  RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
  if ( v8 < 12 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(v10 + 2), 8) + 6 )
    return 0LL;
  v19 = v71;
  for ( i = 0; i < 4; ++i )
  {
    if ( v17 )
      break;
    if ( v14 >= v67 )
      continue;
    v21 = v67;
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
                      v70 = v22 - 2;
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
                        v66 = v25;
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
                      v21 = v67;
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
    v14 = v72;
  }
  if ( !v18 )
    return 0LL;
  v33 = a3;
  if ( a3 != 3 )
    goto LABEL_83;
  v34 = (unsigned __int8)__ROR2__(v70[2], 8) == 9;
  v35 = 0LL;
  v36 = 0;
  if ( v14 >= v67 )
  {
    v33 = 3;
    goto LABEL_83;
  }
  v37 = (_WORD *)(v14 + 8);
  v38 = v34;
  while ( 2 )
  {
    v39 = (unsigned __int16)__ROR2__(v37[1], 8);
    v40 = __ROR2__(*v37, 8);
    if ( !v40 )
      goto LABEL_80;
    if ( v40 + (unsigned int)v39 > v71 )
      goto LABEL_80;
    v41 = (unsigned __int8)__ROR2__(*(v37 - 2), 8) == 9;
    if ( __ROR2__(*(v37 - 4), 8) != 3
      || __ROR2__(*(v37 - 3), 8) != a4
      || __ROR2__(*(v37 - 1), 8) != (_WORD)v69
      || v70 == v37 - 4 )
    {
      goto LABEL_80;
    }
    if ( v38 )
    {
      if ( !v41 )
        goto LABEL_74;
LABEL_78:
      if ( !v35 )
      {
        v35 = v39 + v16;
        v36 = v40;
      }
LABEL_80:
      v37 += 6;
      if ( (unsigned __int64)(v37 - 4) >= v67 )
        goto LABEL_75;
      continue;
    }
    break;
  }
  if ( !v41 )
    goto LABEL_78;
LABEL_74:
  v35 = v39 + v16;
  v36 = v40;
LABEL_75:
  v33 = 3;
  if ( v35 )
  {
    *((_QWORD *)a6 + 3) = v35;
    a6[8] = v36;
  }
LABEL_83:
  if ( !(unsigned int)bConvertExtras(0LL, a6) )
    return 0LL;
  v42 = a6[28] + 204;
  a6[23] = 204;
  if ( *((_QWORD *)a6 + 3) )
  {
    v43 = a6[29] + 4;
    a6[24] = v42;
    v42 += v43;
  }
  v44 = v42 + 2;
  v45 = a6[32] + 2;
  v46 = a6[30] + 3;
  a6[26] = v44;
  v47 = a6[31] + v44;
  *a7 = 0;
  a6[27] = v47;
  v48 = v45 + v47;
  a6[25] = v48;
  v49 = (v48 + v46) & 0xFFFFFFFC;
  if ( Buf1 )
  {
    v50 = v66;
    if ( v33 == 3 )
    {
      if ( v66 > 0x48 )
        v50 = 72;
      v51 = v50 - 2;
      if ( v50 <= 2 )
        v51 = v50;
      *a7 = memcmp(Buf1, &awszType1, v51) == 0;
    }
    else
    {
      if ( v66 > 0x24 )
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
      goto LABEL_105;
    }
    v56 = 1;
  }
  else
  {
    v56 = 3;
  }
  a6[1] = v49;
  v49 += 20 * v56 + 12;
LABEL_105:
  a6[21] = v49;
  v57 = v49 + 16;
  v58 = *(unsigned int *)(v53 + 64);
  if ( (_DWORD)v58 )
    v59 = v54 + v58;
  else
    v59 = 0LL;
  if ( v59 )
  {
    a6[22] = v57;
    v57 += 24;
  }
  v60 = a6[16];
  *a8 = 0;
  switch ( v60 )
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
      v61 = bShellFontFace("Microsoft Tahoma Bold", *((_QWORD *)a6 + 7), 21LL);
      v62 = *a8;
      if ( v61 )
        v62 = 3;
      *a8 = v62;
      break;
  }
  result = 1LL;
  *a6 = (v57 + 7) & 0xFFFFFFF8;
  return result;
}
