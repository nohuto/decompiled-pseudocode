/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800E3D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCustomCPToUnicodeN(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned __int8 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // edi
  unsigned __int8 *v15; // r11
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  __int16 v18; // cx

  v6 = a6;
  v7 = a3 >> 1;
  if ( *(_WORD *)(a1 + 12) )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = (int)a2;
    if ( v7 )
    {
      v15 = a5;
      while ( v6 )
      {
        v16 = *v15;
        --v7;
        --v6;
        v17 = *(_WORD *)(v13 + 2 * v16);
        if ( v17 )
        {
          if ( !v6 )
          {
            *a2 = 0;
            LODWORD(a2) = (_DWORD)a2 + 2;
            break;
          }
          ++v15;
          --v6;
          v18 = *(_WORD *)(v13 + 2LL * (v17 + (unsigned int)*v15));
        }
        else
        {
          v18 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2 * v16);
        }
        *a2 = v18;
        ++v15;
        ++a2;
        if ( !v7 )
          break;
      }
    }
    if ( a4 )
      *a4 = (_DWORD)a2 - v14;
  }
  else
  {
    v9 = a6;
    if ( v7 < a6 )
      v9 = v7;
    if ( a4 )
      *a4 = 2 * v9;
    v10 = *(_QWORD *)(a1 + 32);
    if ( (_DWORD)v9 )
    {
      v11 = a5;
      do
      {
        v12 = *v11++;
        *a2++ = *(_WORD *)(v10 + 2 * v12);
        --v9;
      }
      while ( v9 );
    }
  }
  return v7 < v6 ? 0x80000005 : 0;
}
