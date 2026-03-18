/*
 * XREFs of SrbAssignCommandId @ 0x1C000DD54
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C0010688 (ProcessCommandInSpecificQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall SrbAssignCommandId(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // edx
  int v8; // r10d
  __int16 v9; // r11
  __int16 v10; // dx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // dx
  char result; // al

  if ( a3 )
  {
    v6 = a3;
    v4 = *(_WORD *)(a1 + 238);
    v5 = 136 * v6 + *(_QWORD *)(a1 + 552) - 136LL;
  }
  else
  {
    v4 = *(_WORD *)(a1 + 236);
    v5 = a1 + 248;
  }
  v7 = *(unsigned __int16 *)(v5 + 44);
  v8 = *(unsigned __int16 *)(v5 + 46);
  v9 = *(_WORD *)(v5 + 44);
  if ( v8 == v7 + 1 || !(_WORD)v8 && v7 == v4 - 1 )
    return 0;
  v10 = v7 + 1;
  *(_WORD *)(v5 + 44) = v10;
  if ( v10 == v4 )
    *(_WORD *)(v5 + 44) = 0;
  v11 = *(_WORD *)(v5 + 48);
  if ( v11 < v4 )
  {
    while ( 1 )
    {
      v12 = v11 + 1;
      if ( !*(_QWORD *)(16LL * v11 + *(_QWORD *)(v5 + 32)) )
        break;
      ++v11;
      if ( v12 >= v4 )
      {
        v11 = *(_WORD *)(v5 + 48);
        goto LABEL_16;
      }
    }
    v13 = v11;
    *(_WORD *)(v5 + 48) = v12;
    if ( v12 == v4 )
      *(_WORD *)(v5 + 48) = 0;
    goto LABEL_25;
  }
LABEL_16:
  v14 = 0;
  if ( !v11 )
  {
LABEL_19:
    if ( *(_WORD *)(v5 + 44) )
      v4 = *(_WORD *)(v5 + 44);
    *(_WORD *)(v5 + 44) = v4 - 1;
    return 0;
  }
  while ( 1 )
  {
    v15 = v14 + 1;
    if ( !*(_QWORD *)(16LL * v14 + *(_QWORD *)(v5 + 32)) )
      break;
    ++v14;
    if ( v15 >= v11 )
      goto LABEL_19;
  }
  v13 = v14;
  *(_WORD *)(v5 + 48) = v15;
  if ( v15 == v4 )
    *(_WORD *)(v5 + 48) = 0;
LABEL_25:
  *(_WORD *)(a2 + 4246) = v13;
  result = 1;
  *(_WORD *)(a2 + 4248) = v9;
  return result;
}
