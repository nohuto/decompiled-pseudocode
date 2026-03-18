/*
 * XREFs of RtlCopyBitMap @ 0x1400BD530
 * Callers:
 *     HvpGrowDirtyVectors @ 0x1400BD380 (HvpGrowDirtyVectors.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     MiSelectRelocationStartHint @ 0x1404F1D2C (MiSelectRelocationStartHint.c)
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1400BD690 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned __int64 result; // rax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  int *v10; // rsi
  int *v11; // r11
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  size_t v15; // rdi
  _BYTE *v16; // r9
  __int64 v17; // r8
  int v18; // edi
  char v19; // r9
  int v20; // ebp
  int v21; // edi
  int v22; // r13d
  unsigned __int64 v23; // rbp
  unsigned int v24; // eax

  v3 = *(_DWORD *)a1;
  result = *(_DWORD *)a2 - a3;
  v7 = result;
  if ( v3 <= (unsigned int)result )
  {
    v7 = v3;
    result = v3;
  }
  v8 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(int **)(a1 + 8);
    result = (unsigned __int64)a3 >> 5;
    v11 = (int *)(v9 + 4 * result);
    if ( v10 > v11 || (result = (unsigned __int64)&v10[(v8 - 1) >> 5], (unsigned __int64)v11 > result) )
    {
      v12 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v17 = a3 & 0x1F;
        if ( v8 >= 0x20 )
        {
          v21 = *v11;
          v22 = 1 << (32 - v17);
          v23 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            *v11++ = ((*v10 & (v22 - 1)) << v17) | v21 & ((1 << v17) - 1);
            v24 = *v10++ & ~(v22 - 1);
            result = v24 >> (32 - v17);
            v21 = result | *v11 & ~((1 << v17) - 1);
            *v11 = v21;
            --v23;
          }
          while ( v23 );
        }
        if ( v8 )
        {
          v18 = *v10;
          v19 = 32 - v17;
          v20 = *v11;
          if ( v8 > 32 - v17 )
          {
            *v11 = v20 & ((1 << v17) - 1) | ((v18 & ((1 << v19) - 1)) << v17);
            result = ((*v10 & (unsigned int)(((1 << (v8 + v17 - 32)) - 1) << v19)) >> v19) | v11[1] & ~((1 << (v8 + v17 - 32)) - 1);
            v11[1] = result;
          }
          else
          {
            result = (v18 & (unsigned int)((1 << v8) - 1)) << v17;
            *v11 = result | v20 & ~(((1 << v8) - 1) << v17);
          }
        }
      }
      else
      {
        v13 = v8;
        v14 = v8 & 7;
        v15 = v13 >> 3;
        if ( v15 )
          result = (unsigned __int64)memmove((void *)(v9 + v12), *(const void **)(a1 + 8), v15);
        if ( v14 )
        {
          v16 = (_BYTE *)(*(_QWORD *)(a2 + 8) + v15 + v12);
          *v16 &= ~((1 << v14) - 1);
          result = *(_QWORD *)(a1 + 8);
          *v16 |= (unsigned __int8)((1 << v14) - 1) & *(_BYTE *)(v15 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, v7);
    }
  }
  return result;
}
