/*
 * XREFs of KiInitializeIdt @ 0x1404033F4
 * Callers:
 *     KiEnableKvaShadowing @ 0x140403784 (KiEnableKvaShadowing.c)
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  int v2; // esi
  __int64 *v3; // r9
  int v4; // ebp
  __int64 v5; // r8
  __int64 v6; // r11
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  __int64 *v11; // rcx
  char *v12; // rcx
  unsigned __int64 v13; // rcx
  __int16 v14; // ax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int16 v17; // dx
  __int16 v18; // cx
  __int16 v19; // ax

  v2 = KiBootDebuggerActive;
  v3 = &KiInterruptInitTable;
  v4 = KiSystemCallSelector;
  v5 = a1 + 4;
  v6 = 0LL;
  KiDebugTrapIndex = 0;
  v8 = 0LL;
  do
  {
    if ( v2 && (unsigned int)v8 <= 0x2D && (v9 = 0x30000000600ALL, _bittest64(&v9, v8)) )
    {
      result = *(unsigned __int8 *)v3;
      v11 = v3 + 3;
      if ( (_DWORD)v8 != (_DWORD)result )
        v11 = v3;
      v3 = v11;
    }
    else
    {
      v12 = (char *)KiIsrThunkShadow;
      if ( !a2 )
        v12 = (char *)KxUnexpectedInterrupt0;
      v13 = (unsigned __int64)&v12[8 * v8];
      if ( v4 != 1 && (_DWORD)v8 == 46 )
      {
        v14 = *(_WORD *)v5 & 0xF8;
        *(_WORD *)(v5 - 4) = v13;
        *(_WORD *)v5 = v14 | 0x8E00;
        result = v13 >> 16;
        v15 = HIDWORD(v13);
        v3 += 3;
LABEL_21:
        *(_DWORD *)(v5 + 4) = v15;
        *(_WORD *)(v5 + 2) = result;
        *(_WORD *)(v5 - 2) = 16;
        goto LABEL_22;
      }
      if ( (_DWORD)v8 != *(unsigned __int8 *)v3 )
      {
        v19 = *(_WORD *)v5 & 0xF8;
        *(_WORD *)(v5 - 4) = v13;
        *(_WORD *)v5 = v19 | 0x8E00;
        result = v13 >> 16;
        v15 = HIDWORD(v13);
        goto LABEL_21;
      }
      if ( a2 )
        v16 = v3[2];
      else
        v16 = v3[1];
      *(_WORD *)(v5 - 4) = v16;
      *(_WORD *)(v5 - 2) = 16;
      v17 = *(_WORD *)v5 & 0xEEF8 | *((_BYTE *)v3 + 2) & 7 | 0xE00;
      *(_WORD *)v5 = v17;
      v18 = v17 & 0x1FFF | ((*((_BYTE *)v3 + 1) & 3 | 4) << 13);
      *(_WORD *)(v5 + 2) = WORD1(v16);
      result = HIDWORD(v16);
      *(_DWORD *)(v5 + 4) = HIDWORD(v16);
      *(_WORD *)v5 = v18;
      if ( *((_BYTE *)v3 + 1) )
      {
        KiDebugTraps[v6] = v16;
        v6 = (unsigned int)(v6 + 1);
      }
      v3 += 3;
    }
LABEL_22:
    v8 = (unsigned int)(v8 + 1);
    v5 += 16LL;
  }
  while ( (unsigned int)v8 <= 0xFF );
  KiDebugTrapIndex = v6;
  return result;
}
