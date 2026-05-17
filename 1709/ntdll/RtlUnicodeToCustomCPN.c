/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800E4140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToCustomCPN(
        __int64 a1,
        _BYTE *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned __int16 *v9; // r9
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ebx
  unsigned __int16 *v14; // r11
  __int64 v15; // rax
  __int16 v16; // di
  unsigned int v17; // eax

  v6 = a6 >> 1;
  if ( *(_WORD *)(a1 + 12) )
  {
    v12 = *(_QWORD *)(a1 + 40);
    v13 = (int)a2;
    if ( v6 )
    {
      v14 = a5;
      do
      {
        if ( !a3 )
          break;
        v15 = *v14++;
        v16 = *(_WORD *)(v12 + 2 * v15);
        if ( HIBYTE(v16) )
        {
          v17 = a3--;
          if ( v17 < 2 )
            break;
          *a2++ = HIBYTE(v16);
        }
        *a2 = v16;
        --a3;
        ++a2;
        --v6;
      }
      while ( v6 );
    }
    if ( a4 )
      *a4 = (_DWORD)a2 - v13;
  }
  else
  {
    v7 = a3;
    if ( v6 < a3 )
      v7 = a6 >> 1;
    if ( a4 )
      *a4 = v7;
    v8 = *(_QWORD *)(a1 + 40);
    if ( v7 )
    {
      v9 = a5;
      v10 = v7;
      do
      {
        v11 = *v9++;
        *a2++ = *(_BYTE *)(v11 + v8);
        --v10;
      }
      while ( v10 );
    }
  }
  return a3 < v6 ? 0x80000005 : 0;
}
