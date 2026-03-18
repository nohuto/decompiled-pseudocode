/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1C00B94E0
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessUpdateKeyStateEvent(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v5; // r12
  int i; // r15d
  unsigned __int8 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  _BYTE *v10; // rax
  char v11; // bl
  _BYTE *v12; // rdi
  int v13; // ecx
  int v14; // ecx
  char v15; // r8
  int v16; // ecx
  int v17; // ecx
  __int64 result; // rax

  v5 = a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v5 )
    {
      v7 = 8 * i;
      v8 = 8LL;
      do
      {
        if ( ((unsigned __int8)(1 << (v7 & 7)) & a3[(unsigned __int64)v7 >> 3]) != 0 )
        {
          v9 = (unsigned __int64)v7 >> 2;
          v10 = (_BYTE *)(v9 + a1 + 192);
          v11 = 2 * (v7 & 3);
          v12 = (_BYTE *)(v9 + a2);
          v13 = (unsigned __int8)*v10;
          if ( ((unsigned __int8)(1 << v11) & *(_BYTE *)(v9 + a2)) != 0 )
            v14 = v13 | (1 << v11);
          else
            v14 = v13 & ~(1 << v11);
          *v10 = v14;
          v15 = 2 * (v7 & 3) + 1;
          v16 = (unsigned __int8)*v10;
          if ( ((unsigned __int8)(1 << v15) & *v12) != 0 )
            v17 = v16 | (1 << v15);
          else
            v17 = v16 & ~(1 << v15);
          *v10 = v17;
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    ++v5;
  }
  result = gpsi;
  ++*(_DWORD *)(gpsi + 5688LL);
  if ( a2 != *(_QWORD *)&gafAsyncKeyState[0] )
    return Win32FreePool(a2);
  return result;
}
