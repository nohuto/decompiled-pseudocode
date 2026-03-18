/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C005125C
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r11
  _BYTE *v6; // rbx
  int i; // r10d
  __int64 v8; // rsi
  unsigned __int8 v9; // di
  int v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // cl
  int v14; // eax
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v6 = (_BYTE *)a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v6 )
    {
      v8 = 8LL;
      v9 = 8 * i;
      do
      {
        a3 = v9;
        a2 = (unsigned int)(1 << (v9 & 7));
        if ( ((unsigned __int8)a2 & *(_BYTE *)(((unsigned __int64)v9 >> 3) + v3)) != 0 )
        {
          a3 = (unsigned __int64)v9 >> 2;
          v10 = *(unsigned __int8 *)(a3 + a1 + 224);
          v11 = 2 * (v9 & 3);
          if ( ((unsigned __int8)(1 << v11) & *(_BYTE *)(a3 + v4)) != 0 )
            v12 = v10 | (1 << v11);
          else
            v12 = v10 & ~(1 << v11);
          *(_BYTE *)(a3 + a1 + 224) = v12;
          v13 = 2 * (v9 & 3) + 1;
          a2 = (unsigned int)(1 << v13);
          if ( ((unsigned __int8)a2 & *(_BYTE *)(a3 + v4)) != 0 )
            v14 = (unsigned __int8)v12 | (1 << v13);
          else
            v14 = (unsigned __int8)v12 & ~(1 << v13);
          *(_BYTE *)(a3 + a1 + 224) = v14;
        }
        ++v9;
        --v8;
      }
      while ( v8 );
    }
    ++v6;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 6984LL);
  if ( v4 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(v4, a2, a3);
  return result;
}
