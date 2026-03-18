/*
 * XREFs of InternalVkKeyScanEx @ 0x1C007E1E0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0079210 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InternalVkKeyScanEx(unsigned __int16 a1, _QWORD *a2)
{
  unsigned __int16 v2; // r8
  __int16 v4; // si
  __int16 v5; // di
  __int64 v6; // r10
  __int16 v7; // r14
  __int16 v8; // r12
  __int64 v9; // rcx
  _BYTE *v10; // r9
  char v11; // bp
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // bl
  _BYTE *v14; // rdx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(gspklBaseLayout + 48) + 32LL);
  v6 = *a2;
  v7 = 15;
  if ( *(_WORD *)(*a2 + 8LL) < 2u )
    v8 = 15;
  else
    v8 = *(unsigned __int8 *)(v6 + 12);
  if ( *(_WORD *)(v6 + 8) >= 3u )
    v7 = *(unsigned __int8 *)(v6 + 13);
  v9 = a2[1];
  if ( !v9 || (v10 = *(_BYTE **)v9) == 0LL )
  {
LABEL_36:
    if ( a1 >= 0x20u )
      return -1;
    else
      return (unsigned __int8)(a1 + 64) | 0x200;
  }
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 )
      break;
LABEL_15:
    v9 += 16LL;
    v10 = *(_BYTE **)v9;
    if ( !*(_QWORD *)v9 )
    {
      if ( v4 )
        return v4;
      if ( v5 )
        return v5;
      goto LABEL_36;
    }
  }
  v12 = *(_BYTE *)(v9 + 8);
  while ( 1 )
  {
    v13 = 0;
    if ( v12 )
      break;
LABEL_14:
    v10 += *(unsigned __int8 *)(v9 + 9);
    v11 = *v10;
    if ( !*v10 )
      goto LABEL_15;
  }
  while ( 1 )
  {
    v14 = v10;
    if ( *(_WORD *)&v10[2 * v13 + 2] == a1 )
      break;
LABEL_13:
    if ( ++v13 >= v12 )
      goto LABEL_14;
  }
  if ( v11 == -1 )
    v14 = &v10[-*(unsigned __int8 *)(v9 + 9)];
  if ( v13 == v8 )
  {
    if ( !v4 )
      v4 = (unsigned __int8)*v14 | 0x200;
    goto LABEL_13;
  }
  if ( v13 == v7 )
  {
    if ( !v5 )
      v5 = (unsigned __int8)*v14 | 0x300;
    goto LABEL_13;
  }
  while ( *(_BYTE *)(v2 + v6 + 10) != v13 )
  {
    if ( ++v2 > *(_WORD *)(v6 + 8) )
      return -1;
  }
  if ( *v14 == 0xFF )
    v14 -= *(unsigned __int8 *)(v9 + 9);
  return ((unsigned __int8)v2 << 8) | (unsigned __int8)*v14;
}
