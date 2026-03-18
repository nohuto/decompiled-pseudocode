/*
 * XREFs of VKFromVSC @ 0x1C000FE60
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F000 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionGetActiveHKL @ 0x1C001171C (ApiSetEditionGetActiveHKL.c)
 *     GetModifierBits @ 0x1C0071A50 (GetModifierBits.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v4; // di
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int16 v8; // ax
  char v9; // cl
  unsigned __int8 v10; // cl
  unsigned __int16 ModifierBits; // ax
  __int64 v12; // rcx
  __int64 v13; // rdx

  *((_WORD *)a1 + 1) = 255;
  v4 = 255;
  if ( (*(_DWORD *)gpsi & 4) != 0 && (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x12 )
  {
    v9 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      v10 = v9 | 0x80;
      a2 = -32;
    }
    else
    {
      v10 = v9 & 0x7F;
    }
    *a1 = v10;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( gptiForeground && (v5 = *((_QWORD *)gptiForeground + 52)) != 0 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 32LL);
  else
    v6 = gpKbdTbl;
  if ( !a2 )
  {
    if ( *a1 < *(_BYTE *)(v6 + 56) )
    {
      v4 = *(_WORD *)(*(_QWORD *)(v6 + 48) + 2LL * *a1);
      if ( v4 )
        goto LABEL_18;
    }
    goto LABEL_25;
  }
  if ( a2 == -32 )
  {
    v4 = 511;
    if ( *a1 == 42 || *a1 == 54 )
      goto LABEL_32;
    v7 = *(_QWORD *)(v6 + 64);
    goto LABEL_12;
  }
  if ( a2 != -31 )
  {
LABEL_25:
    LOBYTE(v8) = -1;
    return v8;
  }
  v7 = *(_QWORD *)(v6 + 72);
LABEL_12:
  if ( v7 && *(_WORD *)(v7 + 2) )
  {
    while ( *(_BYTE *)v7 != *a1 )
    {
      v7 += 4LL;
      if ( !*(_WORD *)(v7 + 2) )
        goto LABEL_18;
    }
    v4 = *(_WORD *)(v7 + 2);
  }
LABEL_18:
  if ( dword_1C0196078 )
  {
    dword_1C0196078 = 0;
LABEL_32:
    LOBYTE(v8) = 0;
    return v8;
  }
  if ( v4 == 19 )
  {
    *a1 = 69;
    dword_1C0196078 = 1;
  }
  if ( (v4 & 0x200) != 0 )
  {
    ModifierBits = GetModifierBits(&Modifiers_VK_STANDARD, &gafRawKeyState);
    if ( ModifierBits <= (unsigned __int16)word_1C018D508 )
    {
      _mm_lfence();
      v12 = *((unsigned __int8 *)&Modifiers_VK_STANDARD + ModifierBits + 10);
      if ( (_DWORD)v12 != 15 )
      {
        v13 = *((_QWORD *)gapulCvt_VK + v12);
        if ( v13 )
        {
          while ( *(_DWORD *)v13 )
          {
            if ( *(_BYTE *)v13 == (_BYTE)v4 )
            {
              v8 = *(_WORD *)(v13 + 2);
              *((_WORD *)a1 + 1) = v8;
              return v8;
            }
            v13 += 4LL;
          }
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v4;
  LOBYTE(v8) = v4;
  return v8;
}
