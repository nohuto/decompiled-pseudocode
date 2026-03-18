/*
 * XREFs of xxxInternalToUnicode @ 0x1C0071680
 * Callers:
 *     xxxToUnicodeEx @ 0x1C0071560 (xxxToUnicodeEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 *     GetModifierBits @ 0x1C0071A50 (GetModifierBits.c)
 *     InternalVkKeyScanEx @ 0x1C007FA90 (InternalVkKeyScanEx.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C012FAB8 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C013943C (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C013A888 (ApiSetEditionMessageBeep.c)
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
  __int64 ThreadWin32Thread; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // r15d
  __int64 *v16; // r12
  unsigned __int16 v17; // bx
  int v18; // ecx
  int v19; // ebp
  unsigned __int16 ModifierBits; // ax
  char v21; // r11
  unsigned __int16 v22; // dx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 result; // rax
  char *v26; // rbx
  unsigned __int8 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  __int16 v30; // ax
  __int64 v31; // rbp
  struct DEADKEY *v32; // rdx
  __int16 v33; // ax
  int v34; // ecx
  __int64 v35; // rcx
  unsigned int v36; // eax
  int v37; // edx
  char v38; // al
  int v39; // ecx
  char v40; // al
  char v41; // al
  unsigned __int16 v42; // r8
  char *v43; // rcx
  char v44; // al
  char v45; // dl
  int v46; // ebp
  int v47; // ebx
  int v48; // edx
  unsigned __int16 *v49; // rdi
  unsigned __int16 v50; // r8
  int v51; // eax
  __int64 v52; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *a7 = a2 & 0x8000;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  if ( a8 || (v13 = *(_QWORD *)(ThreadWin32Thread + 416)) == 0 )
  {
    v12 = HKLtoPKL(ThreadWin32Thread, a8);
    v13 = v12;
    if ( !v12 )
      return 0LL;
    v14 = *(_QWORD *)(v12 + 48);
  }
  else
  {
    v14 = *(_QWORD *)(v13 + 48);
  }
  v15 = a2 & 0x1FF;
  v16 = *(__int64 **)(v14 + 32);
  v17 = word_1C0190EA4;
  v18 = *a7;
  v19 = *a7 & 0x8000;
  if ( v19 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C0190EA8 )
        word_1C0190EA8 = 0;
      goto LABEL_9;
    }
    if ( !word_1C0190EA4 )
    {
      if ( byte_1C0190EA6 )
        byte_1C0190EA6 = 0;
      goto LABEL_9;
    }
    if ( byte_1C0190EA6 == 3 )
      goto LABEL_61;
    if ( byte_1C0190EA6 )
    {
      v35 = *(unsigned __int16 *)(v13 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(ThreadWin32Thread + 464) & 8) != 0 )
      {
        *a7 = v18 | 0x4000000;
LABEL_61:
        *a4 = v17;
LABEL_74:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C0190EA8 = 0;
        byte_1C0190EA6 = 0;
        word_1C0190EA4 = 0;
        return result;
      }
      v35 = NlsOemCodePage;
    }
    v36 = (unsigned __int16)v35;
    if ( (unsigned __int16)(v35 - 932) <= 0x12u && (v37 = 393233, LOWORD(v36) = v35 - 932, _bittest(&v37, v36)) )
    {
      if ( (word_1C0190EA4 & 0xFF00) != 0 )
      {
        v17 = _byteswap_ushort(word_1C0190EA4);
        word_1C0190EA4 = v17;
      }
      else if ( ((_WORD)v35 != 932 || (unsigned __int16)(word_1C0190EA4 - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C0190EA4 - 128) <= 0x7Fu )
      {
        v35 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C0190EA4) = 0;
      v17 = word_1C0190EA4;
    }
    *a4 = ApiSetEditionClientCharToWchar(v35, v17, 932LL, 0LL);
    goto LABEL_74;
  }
LABEL_9:
  if ( (v18 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  ModifierBits = GetModifierBits(*v16, a3);
  v21 = a6;
  v22 = ModifierBits;
  if ( !v19 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_56:
      word_1C0190EA8 = 0;
      v22 &= ~4u;
      byte_1C0190EA6 = 0;
      gfInNumpadHexInput &= ~2u;
      word_1C0190EA4 = 0;
      goto LABEL_12;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_52:
      if ( (unsigned int)(v15 - 71) <= 0xB )
      {
        v39 = *((unsigned __int8 *)&aVkNumpad + (unsigned int)(v15 - 71));
        if ( v39 == 255 )
          goto LABEL_56;
        v34 = v39 - 96;
        goto LABEL_55;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( (unsigned int)(a1 - 65) <= 5 )
        {
          v34 = a1 - 55;
          goto LABEL_55;
        }
        if ( (unsigned int)(a1 - 48) <= 9 )
        {
          v34 = a1 - 48;
          goto LABEL_55;
        }
      }
      v34 = -1;
LABEL_55:
      if ( v34 < 0 )
        goto LABEL_56;
      if ( (unsigned __int16)word_1C0190EA8 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C0190EA6 - 2) > 1u )
      {
        word_1C0190EA4 = v34 + 10 * v17;
        if ( !word_1C0190EA4 )
        {
          v40 = byte_1C0190EA6;
          if ( !v34 )
            v40 = 1;
          byte_1C0190EA6 = v40;
        }
      }
      else
      {
        word_1C0190EA4 = v34 + 16 * v17;
      }
LABEL_95:
      word_1C0190EA8 = a1;
      goto LABEL_12;
    }
    if ( v15 == 83 )
    {
      v38 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_56;
      byte_1C0190EA6 = 2;
    }
    else
    {
      if ( v15 != 78 )
        goto LABEL_52;
      v38 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_56;
      byte_1C0190EA6 = 3;
    }
    gfInNumpadHexInput = v38 | 2;
    goto LABEL_95;
  }
LABEL_12:
  if ( a1 == 8 && (v16[10] & 4) != 0 )
  {
    v23 = a3;
    v41 = *(_BYTE *)(a3 + 40);
    if ( (v41 & 1) != 0 )
    {
      v33 = 8206;
      goto LABEL_36;
    }
    if ( (v41 & 4) != 0 )
    {
      v33 = 8207;
      goto LABEL_36;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v15 )
    {
      *a4 = *((_WORD *)gptiCurrent + 425);
      return 1LL;
    }
    v23 = a3;
  }
  v24 = v16[1];
  if ( !v24 )
    return 0LL;
LABEL_19:
  v26 = *(char **)v24;
  if ( !*(_QWORD *)v24 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v26 )
    {
      v24 += 16LL;
      goto LABEL_19;
    }
    if ( *v26 == (_BYTE)a1 )
      break;
    v26 += *(unsigned __int8 *)(v24 + 9);
  }
  v27 = v26[1];
  if ( (v27 & 8) != 0 && (*(_BYTE *)(v23 + 5) & 8) != 0 )
  {
    v22 |= 8u;
  }
  else if ( (((v22 & 0xFFFE) == 0) & v27) != 0 && (*(_BYTE *)(v23 + 5) & 2) != 0
         || (v27 & 4) != 0 && (v22 & 6) == 6 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
  {
    v22 ^= 1u;
  }
  if ( (v27 & 2) != 0 && (v22 & 0xFFFE) == 0 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
    v26 += *(unsigned __int8 *)(v24 + 9);
  v28 = *v16;
  if ( v22 > *(_WORD *)(*v16 + 8) )
    return 0LL;
  _mm_lfence();
  v29 = *(unsigned __int8 *)(v22 + v28 + 10);
  if ( (_DWORD)v29 == 15 )
    return 0LL;
  if ( (unsigned __int16)v29 >= *(unsigned __int8 *)(v24 + 8)
    || (v30 = *(_WORD *)&v26[2 * v29 + 2], v31 = *(unsigned __int8 *)(v22 + v28 + 10), v30 == -4096) )
  {
    if ( ((v22 - 2) & 0xFFF6) == 0 )
    {
      if ( (unsigned int)(a1 - 65) <= 0x19 )
      {
        *a4 = a1 & 0x1F;
        return 1LL;
      }
      if ( (unsigned int)(a1 - 65377) <= 0x30 )
      {
        v33 = InternalVkKeyScanEx((unsigned __int16)a1, v16) & 0x1F;
        goto LABEL_36;
      }
    }
    return 0LL;
  }
  if ( v30 == -4095 )
  {
    v26 += *(unsigned __int8 *)(v24 + 9);
    if ( !*(_WORD *)(v13 + 74) || (GetAppCompatFlags2(1024LL) & 0x8000) != 0 )
    {
      v42 = *(_WORD *)&v26[2 * v31 + 2];
      *a4 = v42;
      if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
        *(_WORD *)(v13 + 74) = v42;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_34;
  }
  if ( v30 == -4094 )
  {
    if ( *((_WORD *)v16 + 41) )
    {
      v43 = (char *)v16[11];
      if ( v43 )
      {
        v44 = *v43;
        if ( *v43 )
        {
          v45 = *v26;
          v46 = 0;
          v47 = 0;
          while ( v44 != v45 || *((_WORD *)v43 + 1) != (_WORD)v29 )
          {
            v43 += *((unsigned __int8 *)v16 + 85);
            v44 = *v43;
            if ( !*v43 )
              goto LABEL_127;
          }
          if ( *((_BYTE *)v16 + 84) )
          {
            v48 = a5;
            v49 = (unsigned __int16 *)(v43 + 4);
            do
            {
              if ( v47 >= v48 )
                break;
              v50 = *v49;
              if ( *v49 == 0xF000 )
                break;
              if ( *(_WORD *)(v13 + 74) )
              {
                v51 = ComposeDeadKeys(
                        (struct tagKL *)v13,
                        (struct DEADKEY *)v16[2],
                        v50,
                        &a4[v47],
                        v48 - v47,
                        v21,
                        *a7 & 0x8000);
                v48 = a5;
                if ( v51 > 0 )
                  v47 += v51;
              }
              else
              {
                v52 = v47++;
                a4[v52] = v50;
              }
              ++v46;
              v21 = a6;
              ++v49;
            }
            while ( v46 < *((unsigned __int8 *)v16 + 84) );
            if ( v47 )
              *a7 |= 0x8000000u;
          }
          return (unsigned int)v47;
        }
      }
    }
LABEL_127:
    ApiSetEditionMessageBeep();
    return 0LL;
  }
LABEL_34:
  v32 = (struct DEADKEY *)v16[2];
  if ( !v32 || !*(_WORD *)(v13 + 74) )
  {
    v33 = *(_WORD *)&v26[2 * v31 + 2];
LABEL_36:
    *a4 = v33;
    return 1LL;
  }
  result = ComposeDeadKeys((struct tagKL *)v13, v32, *(_WORD *)&v26[2 * v31 + 2], a4, a5, a6, *a7 & 0x8000);
  if ( (_DWORD)result )
    *a7 |= 0x8000000u;
  return result;
}
