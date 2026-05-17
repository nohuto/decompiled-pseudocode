/*
 * XREFs of RtlCopyBitMap @ 0x1800E5350
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E626C @ 0x1800E626C (sub_1800E626C.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  int *v9; // r11
  int *v10; // r10
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  size_t v14; // rdi
  _BYTE *v15; // r8
  __int64 v16; // r8
  int v17; // esi
  int v18; // r13d
  unsigned __int64 v19; // rbp
  unsigned int v20; // eax
  int v21; // esi
  char v22; // di

  result = *(_DWORD *)a2 - a3;
  if ( *a1 <= (unsigned int)result )
    v6 = *a1;
  else
    v6 = *(_DWORD *)a2 - a3;
  if ( *a1 <= (unsigned int)result )
    result = *a1;
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
          v17 = *v10;
          v18 = 1 << (32 - v16);
          v19 = v7 >> 5;
          v7 += -32LL * (v7 >> 5);
          do
          {
            *v10++ = ((*v9 & (v18 - 1)) << v16) | v17 & ((1 << v16) - 1);
            v20 = *v9++ & ~(v18 - 1);
            result = v20 >> (32 - v16);
            v17 = result | *v10 & ~((1 << v16) - 1);
            *v10 = v17;
            --v19;
          }
          while ( v19 );
        }
        if ( v7 )
        {
          v21 = *v9;
          v22 = 32 - v16;
          if ( v7 > 32 - v16 )
          {
            *v10 = *v10 & ((1 << v16) - 1) | ((v21 & ((1 << v22) - 1)) << v16);
            result = ((*v9 & (unsigned int)(((1 << (v7 + v16 - 32)) - 1) << v22)) >> v22) | v10[1] & ~((1 << (v7 + v16 - 32)) - 1);
            v10[1] = result;
          }
          else
          {
            result = (v21 & (unsigned int)((1 << v7) - 1)) << v16;
            *v10 = result | *v10 & ~(((1 << v7) - 1) << v16);
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
          v15 = (_BYTE *)(*(_QWORD *)(a2 + 8) + v14 + v11);
          *v15 &= ~((1 << v13) - 1);
          result = *((_QWORD *)a1 + 1);
          *v15 |= (unsigned __int8)((1 << v13) - 1) & *(_BYTE *)(v14 + result);
        }
      }
    }
    else
    {
      return sub_1800E626C(a1, a2, a3, v6);
    }
  }
  return result;
}
