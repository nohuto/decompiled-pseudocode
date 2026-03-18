/*
 * XREFs of FindBGRMapCache @ 0x1C023DB4C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0033238 (AAHalftoneBitmap.c)
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     TrimBGRMapCache @ 0x1C023DFE0 (TrimBGRMapCache.c)
 */

__int64 __fastcall FindBGRMapCache(__int64 a1, int a2)
{
  __int64 v3; // r14
  _OWORD *v4; // r12
  int v5; // ebp
  int v6; // esi
  int v7; // edi
  _DWORD *v8; // rbx
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  __int128 v13; // xmm6

  v3 = 0LL;
  EngAcquireSemaphore(qword_1C032C838);
  v4 = Src;
  v5 = dword_1C032C858;
  if ( Src && (v6 = dword_1C032C858) != 0 )
  {
    v7 = HIDWORD(qword_1C032C85C);
    v8 = (char *)Src + 16 * dword_1C032C858 - 16;
    v9 = 0;
    do
    {
      if ( v3 )
        break;
      if ( a1 == *(_QWORD *)v8 )
      {
        v10 = v8[2];
        v3 = a1;
        if ( v10 )
        {
          v11 = v10 - 1;
          v8[2] = v11;
          if ( !v11 )
            HIDWORD(qword_1C032C85C) = ++v7;
        }
      }
      else if ( v8[3] == a2 )
      {
        v12 = v8[2];
        v3 = *(_QWORD *)v8;
        v8[2] = v12 + 1;
        if ( !v12 )
          HIDWORD(qword_1C032C85C) = --v7;
        if ( v6 < v5 )
        {
          v13 = *(_OWORD *)v8;
          memmove(v8, v8 + 4, 16LL * v9);
          v4[v5 - 1] = v13;
        }
      }
      ++v9;
      v8 -= 4;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v7 = HIDWORD(qword_1C032C85C);
  }
  if ( v5 > 5 && v7 )
    TrimBGRMapCache();
  EngReleaseSemaphore(qword_1C032C838);
  return v3;
}
