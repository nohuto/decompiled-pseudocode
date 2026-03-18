/*
 * XREFs of McGenControlCallbackV2 @ 0x140002BB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400043A8 (memset_0.c)
 */

void __fastcall McGenControlCallbackV2(__int64 a1, int a2, char a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // r9d
  unsigned __int8 v8; // cl
  __int64 v9; // r8
  _DWORD *v10; // r8
  _DWORD *v11; // r8
  unsigned __int16 v12; // ax

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *(_QWORD *)(a7 + 16) = a4;
        v7 = 0;
        *(_BYTE *)(a7 + 40) = a3;
        *(_QWORD *)(a7 + 24) = a5;
        for ( *(_DWORD *)(a7 + 36) = 1; v7 < *(unsigned __int16 *)(a7 + 42); ++v7 )
        {
          v8 = *(_BYTE *)(a7 + 40);
          if ( *(_BYTE *)(v7 + *(_QWORD *)(a7 + 64)) > v8 && v8
            || (v9 = *(_QWORD *)(*(_QWORD *)(a7 + 56) + 8LL * v7)) != 0
            && ((v9 & *(_QWORD *)(a7 + 16)) == 0 || (v9 & *(_QWORD *)(a7 + 24)) != *(_QWORD *)(a7 + 24)) )
          {
            v11 = (_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5));
            *v11 &= ~(1 << (v7 & 0x1F));
          }
          else
          {
            v10 = (_DWORD *)(*(_QWORD *)(a7 + 48) + 4 * ((unsigned __int64)v7 >> 5));
            *v10 |= 1 << (v7 & 0x1F);
          }
        }
      }
    }
    else
    {
      v12 = *(_WORD *)(a7 + 42);
      *(_DWORD *)(a7 + 36) = 0;
      *(_BYTE *)(a7 + 40) = 0;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
      if ( v12 )
        memset_0(*(void **)(a7 + 48), 0, 4LL * ((v12 - 1) / 32 + 1));
    }
  }
}
