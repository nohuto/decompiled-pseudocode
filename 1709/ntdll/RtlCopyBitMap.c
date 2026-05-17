/*
 * XREFs of RtlCopyBitMap @ 0x1800E9290
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800EA0CC (RtlpCopyBitMapTailToHead.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  int *v9; // r11
  int *v10; // r10
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  size_t v14; // rdi
  _BYTE *v15; // r8
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  int v18; // r12d
  unsigned int v19; // edx
  char v20; // di

  result = *(_DWORD *)a2 - a3;
  if ( *a1 <= (unsigned int)result )
  {
    v6 = *a1;
    result = *a1;
  }
  else
  {
    v6 = *(_DWORD *)a2 - a3;
  }
  v7 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v10 = (int *)(v8 + 4 * result);
    if ( v9 > v10 || (result = (unsigned __int64)&v9[(v7 - 1) >> 5], (unsigned __int64)v10 > result) )
    {
      v11 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v16 = a3 & 0x1F;
        if ( v7 >= 0x20 )
        {
          v17 = v7 >> 5;
          v18 = 1 << (32 - v16);
          v7 += -32LL * (v7 >> 5);
          do
          {
            *v10 = ((*v9 & (v18 - 1)) << v16) | ((1 << v16) - 1) & *v10;
            ++v10;
            v19 = (*v9++ & (unsigned int)~(v18 - 1)) >> (32 - v16);
            result = v19 | *v10 & ~((1 << v16) - 1);
            *v10 = result;
            --v17;
          }
          while ( v17 );
        }
        if ( v7 )
        {
          v20 = 32 - v16;
          if ( v7 > 32 - v16 )
          {
            *v10 = ((*v9 & ((1 << v20) - 1)) << v16) | *v10 & ((1 << v16) - 1);
            result = ((*v9 & (unsigned int)(((1 << (v7 + v16 - 32)) - 1) << v20)) >> v20) | v10[1] & ~((1 << (v7 + v16 - 32)) - 1);
            v10[1] = result;
          }
          else
          {
            result = ((*v9 & ((1 << v7) - 1)) << v16) | *v10 & (unsigned int)~(((1 << v7) - 1) << v16);
            *v10 = result;
          }
        }
      }
      else
      {
        v12 = v7;
        v13 = v7 & 7;
        v14 = v12 >> 3;
        if ( v14 )
          result = (unsigned __int64)memmove((void *)(v8 + v11), *((const void **)a1 + 1), v14);
        if ( v13 )
        {
          v15 = (_BYTE *)(v11 + v14 + *(_QWORD *)(a2 + 8));
          *v15 &= ~((1 << v13) - 1);
          result = *((_QWORD *)a1 + 1);
          *v15 |= (unsigned __int8)((1 << v13) - 1) & *(_BYTE *)(v14 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, v6);
    }
  }
  return result;
}
