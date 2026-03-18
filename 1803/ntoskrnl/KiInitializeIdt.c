/*
 * XREFs of KiInitializeIdt @ 0x14047C160
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
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
  __int64 v9; // rax
  char *v10; // rdx
  char *v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r11
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // ecx

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
      v9 = 8LL * (unsigned int)v3;
      v10 = (char *)KiIsrThunkShadow + v9;
      if ( !a2 )
        v10 = (char *)KxUnexpectedInterrupt0 + v9;
      v11 = (char *)KiIsrThunkShadow;
      if ( !a2 )
        v11 = (char *)KxUnexpectedInterrupt0;
      v12 = (unsigned __int64)&v11[v9];
      if ( KiSystemCallSelector != 1 && (_DWORD)v3 == 46 )
      {
        *(_WORD *)v4 = *(_WORD *)v4 & 0xF8 | 0x8E00;
        result = v12 >> 16;
        v13 = HIDWORD(v12);
        v2 += 3;
LABEL_23:
        *(_DWORD *)(v4 + 4) = v13;
        *(_WORD *)(v4 + 2) = result;
        *(_WORD *)(v4 - 2) = 16;
        *(_WORD *)(v4 - 4) = (_WORD)v10;
        goto LABEL_24;
      }
      if ( (_DWORD)v3 != *(unsigned __int8 *)v2 )
      {
        *(_WORD *)v4 = *(_WORD *)v4 & 0xF8 | 0x8E00;
        result = v12 >> 16;
        v13 = HIDWORD(v12);
        goto LABEL_23;
      }
      if ( a2 )
        v14 = v2[2];
      else
        v14 = v2[1];
      *(_WORD *)(v4 - 4) = v14;
      *(_WORD *)(v4 - 2) = 16;
      v15 = *(_WORD *)v4 & 0xEEF8 | *((_BYTE *)v2 + 2) & 7 | 0xE00;
      *(_WORD *)v4 = v15;
      v16 = v15 & 0x1FFF | ((*((_BYTE *)v2 + 1) & 3 | 4) << 13);
      *(_WORD *)(v4 + 2) = WORD1(v14);
      result = HIDWORD(v14);
      *(_DWORD *)(v4 + 4) = HIDWORD(v14);
      *(_WORD *)v4 = v16;
      if ( *((_BYTE *)v2 + 1) )
      {
        v17 = KiDebugTrapIndex;
        KiDebugTraps[KiDebugTrapIndex] = v14;
        KiDebugTrapIndex = v17 + 1;
      }
      v2 += 3;
    }
LABEL_24:
    v3 = (unsigned int)(v3 + 1);
    v4 += 16LL;
  }
  while ( (unsigned int)v3 <= 0xFF );
  return result;
}
