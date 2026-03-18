/*
 * XREFs of SrbAssignCommandId @ 0x1C000D8A0
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C00101B4 (ProcessCommandInSpecificQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall SrbAssignCommandId(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // r9
  __int64 v5; // r8
  int v6; // edx
  int v7; // r10d
  __int16 v8; // r11
  __int16 v9; // dx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  __int16 v12; // cx
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // cx
  char result; // al

  if ( a3 )
  {
    v4 = *(_WORD *)(a1 + 230);
    v5 = 136LL * a3 + *(_QWORD *)(a1 + 544) - 136LL;
  }
  else
  {
    v4 = *(_WORD *)(a1 + 228);
    v5 = a1 + 240;
  }
  v6 = *(unsigned __int16 *)(v5 + 44);
  v7 = *(unsigned __int16 *)(v5 + 46);
  v8 = *(_WORD *)(v5 + 44);
  if ( v7 != v6 + 1 && ((_WORD)v7 || v6 != v4 - 1) )
  {
    v9 = v6 + 1;
    *(_WORD *)(v5 + 44) = v9;
    if ( v9 == v4 )
      *(_WORD *)(v5 + 44) = 0;
    v10 = *(_WORD *)(v5 + 48);
    if ( v10 < v4 )
    {
      while ( *(_QWORD *)(16LL * v10 + *(_QWORD *)(v5 + 32)) )
      {
        if ( ++v10 >= v4 )
          goto LABEL_16;
      }
      v11 = v10;
      v12 = v10 + 1;
      *(_WORD *)(v5 + 48) = v12;
      if ( v12 == v4 )
        *(_WORD *)(v5 + 48) = 0;
      goto LABEL_23;
    }
LABEL_16:
    v13 = *(_WORD *)(v5 + 48);
    v14 = 0;
    if ( v13 )
    {
      while ( *(_QWORD *)(16LL * v14 + *(_QWORD *)(v5 + 32)) )
      {
        if ( ++v14 >= v13 )
          goto LABEL_19;
      }
      v11 = v14;
      v16 = v14 + 1;
      *(_WORD *)(v5 + 48) = v16;
      if ( v16 == v4 )
        *(_WORD *)(v5 + 48) = 0;
LABEL_23:
      *(_WORD *)(a2 + 4238) = v11;
      result = 1;
      *(_WORD *)(a2 + 4240) = v8;
      return result;
    }
LABEL_19:
    v15 = *(_WORD *)(v5 + 44);
    if ( v15 )
      *(_WORD *)(v5 + 44) = v15 - 1;
    else
      *(_WORD *)(v5 + 44) = v4 - 1;
  }
  return 0;
}
