/*
 * XREFs of InternalVkKeyScanEx @ 0x1C007FA90
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0071680 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InternalVkKeyScanEx(unsigned __int16 a1, _QWORD *a2)
{
  unsigned __int16 v2; // r8
  __int16 v4; // si
  __int16 v5; // di
  __int64 v6; // r11
  unsigned __int16 v7; // ax
  __int16 v8; // r14
  __int16 v9; // r12
  __int64 v10; // rcx
  _BYTE *v11; // r9
  char v12; // bp
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // bl
  _BYTE *v15; // rdx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(gspklBaseLayout + 48) + 32LL);
  v6 = *a2;
  v7 = *(_WORD *)(*a2 + 8LL);
  v8 = 15;
  if ( v7 < 2u )
    v9 = 15;
  else
    v9 = *(unsigned __int8 *)(v6 + 12);
  if ( v7 >= 3u )
    v8 = *(unsigned __int8 *)(v6 + 13);
  v10 = a2[1];
  if ( !v10 || (v11 = *(_BYTE **)v10) == 0LL )
  {
LABEL_36:
    if ( a1 >= 0x20u )
      return -1;
    else
      return (unsigned __int8)(a1 + 64) | 0x200;
  }
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 )
      break;
LABEL_15:
    v10 += 16LL;
    v11 = *(_BYTE **)v10;
    if ( !*(_QWORD *)v10 )
    {
      if ( v4 )
        return v4;
      if ( v5 )
        return v5;
      goto LABEL_36;
    }
  }
  v13 = *(_BYTE *)(v10 + 8);
  while ( 1 )
  {
    v14 = 0;
    if ( v13 )
      break;
LABEL_14:
    v11 += *(unsigned __int8 *)(v10 + 9);
    v12 = *v11;
    if ( !*v11 )
      goto LABEL_15;
  }
  while ( 1 )
  {
    v15 = v11;
    if ( *(_WORD *)&v11[2 * v14 + 2] == a1 )
      break;
LABEL_13:
    if ( ++v14 >= v13 )
      goto LABEL_14;
  }
  if ( v12 == -1 )
    v15 = &v11[-*(unsigned __int8 *)(v10 + 9)];
  if ( v14 == v9 )
  {
    if ( !v4 )
      v4 = (unsigned __int8)*v15 | 0x200;
    goto LABEL_13;
  }
  if ( v14 == v8 )
  {
    if ( !v5 )
      v5 = (unsigned __int8)*v15 | 0x300;
    goto LABEL_13;
  }
  while ( *(_BYTE *)(v2 + v6 + 10) != v14 )
  {
    if ( ++v2 > *(_WORD *)(v6 + 8) )
      return -1;
  }
  if ( *v15 == 0xFF )
    v15 -= *(unsigned __int8 *)(v10 + 9);
  return ((unsigned __int8)v2 << 8) | (unsigned __int8)*v15;
}
