/*
 * XREFs of xxxInternalToUnicode @ 0x1C0079210
 * Callers:
 *     xxxToUnicodeEx @ 0x1C00790F0 (xxxToUnicodeEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GetModifierBits @ 0x1C00795B0 (GetModifierBits.c)
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 *     InternalVkKeyScanEx @ 0x1C007E1E0 (InternalVkKeyScanEx.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0130498 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C013A164 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C013B5C4 (ApiSetEditionMessageBeep.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rbp
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rax
  int v15; // r13d
  _QWORD *v16; // r8
  unsigned __int16 v17; // di
  int v18; // ecx
  int v19; // r14d
  __int64 result; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 v22; // dx
  __int64 v23; // r11
  _QWORD *v24; // r13
  __int64 v25; // r8
  char *v26; // rdi
  __int64 v27; // rax
  unsigned __int8 v28; // r10
  __int64 v29; // r9
  __int16 v30; // ax
  __int64 v31; // r14
  struct DEADKEY *v32; // rdx
  __int16 v33; // ax
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  unsigned int v37; // eax
  int v38; // edx
  int v39; // r8d
  char v40; // al
  char v41; // al
  unsigned __int16 v42; // r8
  char *v43; // rcx
  char v44; // al
  char v45; // dl
  int v46; // r14d
  int v47; // edi
  unsigned __int16 *v48; // rsi
  unsigned __int16 v49; // r8
  int v50; // eax
  __int64 v51; // rax
  _QWORD *v52; // [rsp+40h] [rbp-48h]
  bool v53; // [rsp+90h] [rbp+8h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *a7 = a2 & 0x8000;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  v12 = 0;
  if ( a8 || (v13 = *(_QWORD *)(ThreadWin32Thread + 392)) == 0 )
  {
    v27 = HKLtoPKL(ThreadWin32Thread, a8);
    v13 = v27;
    if ( !v27 )
      return 0LL;
    v14 = *(_QWORD *)(v27 + 48);
  }
  else
  {
    v14 = *(_QWORD *)(v13 + 48);
  }
  v15 = a2 & 0x1FF;
  v16 = *(_QWORD **)(v14 + 32);
  v17 = word_1C018C174;
  v52 = v16;
  v18 = *a7;
  v19 = *a7 & 0x8000;
  if ( v19 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C018C178 )
        word_1C018C178 = 0;
      goto LABEL_6;
    }
    if ( !word_1C018C174 )
    {
      if ( byte_1C018C176 )
        byte_1C018C176 = 0;
      goto LABEL_6;
    }
    if ( byte_1C018C176 == 3 )
      goto LABEL_64;
    if ( byte_1C018C176 )
    {
      v36 = *(unsigned __int16 *)(v13 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 8) != 0 )
      {
        *a7 = v18 | 0x4000000;
LABEL_64:
        *a4 = v17;
LABEL_77:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C018C178 = 0;
        byte_1C018C176 = 0;
        word_1C018C174 = 0;
        return result;
      }
      v36 = NlsOemCodePage;
    }
    v37 = (unsigned __int16)v36;
    if ( (unsigned __int16)(v36 - 932) <= 0x12u && (v38 = 393233, LOWORD(v37) = v36 - 932, _bittest(&v38, v37)) )
    {
      if ( (word_1C018C174 & 0xFF00) != 0 )
      {
        v17 = _byteswap_ushort(word_1C018C174);
        word_1C018C174 = v17;
      }
      else if ( ((_WORD)v36 != 932 || (unsigned __int16)(word_1C018C174 - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C018C174 - 128) <= 0x7Fu )
      {
        v36 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C018C174) = 0;
      v17 = word_1C018C174;
    }
    *a4 = ApiSetEditionClientCharToWchar(v36, v17);
    goto LABEL_77;
  }
LABEL_6:
  v53 = (a6 & 2) == 0;
  if ( (v18 & 0x8000) != 0 && v53 )
    return 0LL;
  ModifierBits = GetModifierBits(*v16, a3);
  v22 = ModifierBits;
  if ( !v19 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_59:
      word_1C018C178 = 0;
      v22 &= ~4u;
      byte_1C018C176 = 0;
      word_1C018C174 = 0;
      gfInNumpadHexInput &= ~2u;
      goto LABEL_11;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_55:
      v34 = (unsigned int)(v15 - 71);
      if ( (unsigned int)v34 <= 0xB )
      {
        v39 = *((unsigned __int8 *)&aVkNumpad + v34);
        if ( v39 == 255 )
          goto LABEL_59;
        v35 = v39 - 96;
        goto LABEL_58;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( (unsigned int)(a1 - 65) <= 5 )
        {
          v35 = a1 - 55;
          goto LABEL_58;
        }
        if ( (unsigned int)(a1 - 48) <= 9 )
        {
          v35 = a1 - 48;
          goto LABEL_58;
        }
      }
      v35 = -1;
LABEL_58:
      if ( v35 < 0 )
        goto LABEL_59;
      if ( (unsigned __int16)word_1C018C178 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C018C176 - 2) > 1u )
      {
        word_1C018C174 = v35 + 10 * v17;
        if ( !word_1C018C174 )
        {
          v40 = byte_1C018C176;
          if ( !v35 )
            v40 = 1;
          byte_1C018C176 = v40;
        }
      }
      else
      {
        word_1C018C174 = v35 + 16 * v17;
      }
LABEL_98:
      word_1C018C178 = a1;
      goto LABEL_11;
    }
    if ( v15 == 83 )
    {
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_59;
      byte_1C018C176 = 2;
    }
    else
    {
      if ( v15 != 78 )
        goto LABEL_55;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_59;
      byte_1C018C176 = 3;
    }
    gfInNumpadHexInput |= 2u;
    goto LABEL_98;
  }
LABEL_11:
  if ( a1 == 8 )
  {
    v24 = v52;
    v23 = a3;
    if ( (v52[10] & 4) != 0 )
    {
      v41 = *(_BYTE *)(a3 + 40);
      if ( (v41 & 1) != 0 )
      {
        v33 = 8206;
        goto LABEL_39;
      }
      if ( (v41 & 4) != 0 )
      {
        v33 = 8207;
        goto LABEL_39;
      }
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v15 )
    {
      if ( (v15 & 0x8000) == 0 || !v53 )
      {
        v12 = 1;
        *a4 = *((_WORD *)gptiCurrent + 381);
      }
      return v12;
    }
    v23 = a3;
    v24 = v52;
  }
  v25 = v24[1];
  if ( !v25 )
    return 0LL;
LABEL_17:
  v26 = *(char **)v25;
  if ( !*(_QWORD *)v25 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v26 )
    {
      v25 += 16LL;
      goto LABEL_17;
    }
    if ( *v26 == (_BYTE)a1 )
      break;
    v26 += *(unsigned __int8 *)(v25 + 9);
  }
  v28 = v26[1];
  if ( (v28 & 8) != 0 && (*(_BYTE *)(v23 + 5) & 8) != 0 )
  {
    v22 |= 8u;
  }
  else if ( (((v22 & 0xFFFE) == 0) & v28) != 0 && (*(_BYTE *)(v23 + 5) & 2) != 0
         || ((v28 >> 2) & ((v22 & 6) == 6)) != 0 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
  {
    v22 ^= 1u;
  }
  if ( ((v28 >> 1) & ((v22 & 0xFFFE) == 0)) != 0 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
    v26 += *(unsigned __int8 *)(v25 + 9);
  if ( v22 > *(_WORD *)(*v24 + 8LL) )
    return 0LL;
  _mm_lfence();
  v29 = *(unsigned __int8 *)(v22 + *v24 + 10LL);
  if ( (_DWORD)v29 == 15 )
    return 0LL;
  if ( (unsigned __int16)v29 >= *(unsigned __int8 *)(v25 + 8)
    || (v30 = *(_WORD *)&v26[2 * v29 + 2], v31 = *(unsigned __int8 *)(v22 + *v24 + 10LL), v30 == -4096) )
  {
    if ( ((v22 - 2) & 0xFFF6) != 0 )
      return 0LL;
    if ( (unsigned int)(a1 - 65) <= 0x19 )
    {
      *a4 = a1 & 0x1F;
      return 1LL;
    }
    if ( (unsigned int)(a1 - 65377) > 0x30 )
      return 0LL;
    v33 = InternalVkKeyScanEx((unsigned __int16)a1, v24) & 0x1F;
LABEL_39:
    *a4 = v33;
    return 1LL;
  }
  if ( v30 == -4095 )
  {
    v26 += *(unsigned __int8 *)(v25 + 9);
    if ( *(_WORD *)(v13 + 74) && (GetAppCompatFlags2(1024LL) & 0x8000) == 0 )
      goto LABEL_37;
    v42 = *(_WORD *)&v26[2 * v31 + 2];
    *a4 = v42;
    if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
      *(_WORD *)(v13 + 74) = v42;
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v30 != -4094 )
    {
LABEL_37:
      v32 = (struct DEADKEY *)v24[2];
      if ( v32 && *(_WORD *)(v13 + 74) )
      {
        result = ComposeDeadKeys((struct tagKL *)v13, v32, *(_WORD *)&v26[2 * v31 + 2], a4, a5, a6, *a7 & 0x8000);
        if ( (_DWORD)result )
          *a7 |= 0x8000000u;
        return result;
      }
      v33 = *(_WORD *)&v26[2 * v31 + 2];
      goto LABEL_39;
    }
    if ( !*((_WORD *)v24 + 41) || (v43 = (char *)v24[11]) == 0LL || (v44 = *v43) == 0 )
    {
LABEL_128:
      ApiSetEditionMessageBeep();
      return 0LL;
    }
    v45 = *v26;
    v46 = 0;
    v47 = 0;
    while ( v44 != v45 || *((_WORD *)v43 + 1) != (_WORD)v29 )
    {
      v43 += *((unsigned __int8 *)v24 + 85);
      v44 = *v43;
      if ( !*v43 )
        goto LABEL_128;
    }
    if ( *((_BYTE *)v24 + 84) )
    {
      v48 = (unsigned __int16 *)(v43 + 4);
      do
      {
        if ( v47 >= a5 )
          break;
        v49 = *v48;
        if ( *v48 == 0xF000 )
          break;
        if ( *(_WORD *)(v13 + 74) )
        {
          v50 = ComposeDeadKeys(
                  (struct tagKL *)v13,
                  (struct DEADKEY *)v24[2],
                  v49,
                  &a4[v47],
                  a5 - v47,
                  a6,
                  *a7 & 0x8000);
          if ( v50 > 0 )
            v47 += v50;
        }
        else
        {
          v51 = v47++;
          a4[v51] = v49;
        }
        ++v46;
        ++v48;
      }
      while ( v46 < *((unsigned __int8 *)v24 + 84) );
      if ( v47 )
        *a7 |= 0x8000000u;
    }
    return (unsigned int)v47;
  }
}
