/*
 * XREFs of RtlExtractBitMap @ 0x1800E94A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  __int64 v12; // r9
  unsigned int *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // edx

  v5 = *a2;
  if ( a4 > *(_DWORD *)a1 - a3 )
    a4 = *(_DWORD *)a1 - a3;
  LOBYTE(v7) = a4;
  if ( a4 <= v5 )
    v5 = a4;
  if ( v5 )
  {
    v8 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v13 = (unsigned int *)*((_QWORD *)a2 + 1);
      v14 = (unsigned __int64)a3 >> 5;
      v15 = a3 & 0x1F;
      v16 = (_DWORD *)(v7 + 4 * v14);
      if ( v5 >= 0x20 )
      {
        v17 = v5 >> 5;
        v5 += -32LL * (v5 >> 5);
        do
        {
          v18 = ~((1 << v15) - 1) & *v16++;
          *v13 = v18 >> v15;
          LODWORD(v7) = (((1 << v15) - 1) & *v16) << (32 - v15);
          *v13++ |= v7;
          --v17;
        }
        while ( v17 );
      }
      if ( v5 )
      {
        if ( v5 > 32 - v15 )
        {
          v20 = ((*v16 & (unsigned int)~((1 << v15) - 1)) >> v15) | ((v16[1] & ((1 << (v5 + v15 - 32)) - 1)) << (32 - v15));
          v19 = (1 << v5) - 1;
        }
        else
        {
          v19 = (1 << v5) - 1;
          v20 = (*v16 & (unsigned int)(v19 << v15)) >> v15;
        }
        LODWORD(v7) = v20 | *v13 & ~v19;
        *v13 = v7;
      }
    }
    else
    {
      v9 = (unsigned int)v5;
      v10 = v5 & 7;
      v11 = v9 >> 3;
      if ( v11 )
        LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v8 + *(_QWORD *)(a1 + 8)), v11);
      if ( v10 )
      {
        v12 = *((_QWORD *)a2 + 1);
        LOBYTE(v7) = *(_BYTE *)(v11 + *(_QWORD *)(a1 + 8) + v8) & ((1 << v10) - 1) | *(_BYTE *)(v11 + v12) & ~((1 << v10) - 1);
        *(_BYTE *)(v11 + v12) = v7;
      }
    }
  }
  return v7;
}
