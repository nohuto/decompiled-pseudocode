/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x14015988C
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1401597E0 (MiRescanPagefileBitmaps.c)
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  bool v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v1 = 0;
  v2 = a1 + 144;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = a1 + 160;
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = a1 + 176;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v6 = *(_QWORD **)(a1 + 192);
  v7 = v6 + 3577;
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      __fastfail(3u);
    *v6 = v4;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(v4 + 8) = v6;
    v6 += 7;
  }
  v9 = 0;
  *((_DWORD *)v6 + 13) = -1;
  *((_DWORD *)v6 + 12) = -1;
  v10 = *(_QWORD *)v2;
  if ( *(_QWORD *)v2 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      {
        if ( !v12 )
          break;
        v12 ^= v10;
      }
      if ( !v12 )
        break;
      v10 = v12;
    }
    v9 = 1;
  }
  RtlRbInsertNodeEx(v2, v10, v9, (unsigned __int64)v6);
  v11 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v6 + 12) < *(_DWORD *)(v11 + 24) )
      {
        v13 = *(_QWORD *)v11;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v11;
        }
        if ( !v13 )
          break;
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_21;
          v13 ^= v11;
        }
        if ( !v13 )
        {
LABEL_21:
          v1 = 1;
          break;
        }
      }
      v11 = v13;
    }
  }
  RtlRbInsertNodeEx(v3, v11, v1, (unsigned __int64)(v6 + 3));
  *(_DWORD *)(a1 + 140) = -1;
}
