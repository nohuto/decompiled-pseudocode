/*
 * XREFs of McGenControlCallbackV2 @ 0x140002BF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140003D88 (memset_0.c)
 */

void __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // edx
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  bool v10; // r11
  int v11; // r8d
  int *v12; // rcx
  int v13; // eax
  int v14; // r8d
  unsigned __int16 v15; // ax

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(_DWORD *)(a7 + 36) = 1;
        v7 = 0;
        *(_BYTE *)(a7 + 40) = a3;
        *(_QWORD *)(a7 + 16) = a4;
        for ( *(_QWORD *)(a7 + 24) = a5; v7 < *(unsigned __int16 *)(a7 + 42); ++v7 )
        {
          v8 = *(_BYTE *)(a7 + 40);
          v10 = 0;
          if ( *(_BYTE *)(v7 + *(_QWORD *)(a7 + 64)) <= v8 || !v8 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v7);
            if ( !v9 || (v9 & *(_QWORD *)(a7 + 16)) != 0 && (v9 & *(_QWORD *)(a7 + 24)) == *(_QWORD *)(a7 + 24) )
              v10 = 1;
          }
          v11 = 1 << (v7 & 0x1F);
          v12 = (int *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5));
          v13 = *v12;
          if ( v10 )
            v14 = v13 | v11;
          else
            v14 = v13 & ~v11;
          *v12 = v14;
        }
      }
    }
    else
    {
      v15 = *(_WORD *)(a7 + 42);
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( v15 )
        memset_0(*(void **)(a7 + 48), 0, 4LL * ((v15 - 1) / 32 + 1));
    }
  }
}
