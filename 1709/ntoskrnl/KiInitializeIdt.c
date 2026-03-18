/*
 * XREFs of KiInitializeIdt @ 0x1404233F4
 * Callers:
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  __int64 *v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r8
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 *v8; // rcx
  char *v9; // rcx
  unsigned __int64 v10; // rcx
  __int16 v11; // ax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r11
  __int16 v14; // dx
  __int16 v15; // cx
  int v16; // ecx
  __int16 v17; // ax

  KiDebugTrapIndex = 0;
  v2 = &KiInterruptInitTable;
  v3 = 0LL;
  v4 = a1 + 4;
  do
  {
    if ( KiBootDebuggerActive && (unsigned int)v3 <= 0x2D && (v6 = 0x30000000600ALL, _bittest64(&v6, v3)) )
    {
      result = *(unsigned __int8 *)v2;
      v8 = v2 + 3;
      if ( (_DWORD)v3 != (_DWORD)result )
        v8 = v2;
      v2 = v8;
    }
    else
    {
      v9 = (char *)KiIsrThunkShadow;
      if ( !a2 )
        v9 = (char *)KxUnexpectedInterrupt0;
      v10 = (unsigned __int64)&v9[8 * v3];
      if ( KiSystemCallSelector != 1 && (_DWORD)v3 == 46 )
      {
        v11 = *(_WORD *)v4 & 0xF8;
        *(_WORD *)(v4 - 4) = v10;
        *(_WORD *)v4 = v11 | 0x8E00;
        result = v10 >> 16;
        v12 = HIDWORD(v10);
        v2 += 3;
LABEL_21:
        *(_DWORD *)(v4 + 4) = v12;
        *(_WORD *)(v4 + 2) = result;
        *(_WORD *)(v4 - 2) = 16;
        goto LABEL_22;
      }
      if ( (_DWORD)v3 != *(unsigned __int8 *)v2 )
      {
        v17 = *(_WORD *)v4 & 0xF8;
        *(_WORD *)(v4 - 4) = v10;
        *(_WORD *)v4 = v17 | 0x8E00;
        result = v10 >> 16;
        v12 = HIDWORD(v10);
        goto LABEL_21;
      }
      if ( a2 )
        v13 = v2[2];
      else
        v13 = v2[1];
      *(_WORD *)(v4 - 4) = v13;
      *(_WORD *)(v4 - 2) = 16;
      v14 = *(_WORD *)v4 & 0xEEF8 | *((_BYTE *)v2 + 2) & 7 | 0xE00;
      *(_WORD *)v4 = v14;
      v15 = v14 & 0x1FFF | ((*((_BYTE *)v2 + 1) & 3 | 4) << 13);
      *(_WORD *)(v4 + 2) = WORD1(v13);
      result = HIDWORD(v13);
      *(_DWORD *)(v4 + 4) = HIDWORD(v13);
      *(_WORD *)v4 = v15;
      if ( *((_BYTE *)v2 + 1) )
      {
        v16 = KiDebugTrapIndex;
        KiDebugTraps[KiDebugTrapIndex] = v13;
        KiDebugTrapIndex = v16 + 1;
      }
      v2 += 3;
    }
LABEL_22:
    v3 = (unsigned int)(v3 + 1);
    v4 += 16LL;
  }
  while ( (unsigned int)v3 <= 0xFF );
  return result;
}
