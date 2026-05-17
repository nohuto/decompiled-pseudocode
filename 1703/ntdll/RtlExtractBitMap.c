/*
 * XREFs of RtlExtractBitMap @ 0x1800EA0F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  __int64 v12; // r8
  unsigned int *v13; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax

  if ( a4 > *(_DWORD *)a1 - a3 )
    a4 = *(_DWORD *)a1 - a3;
  v6 = *a2;
  v7 = a4;
  if ( a4 > v6 )
    v7 = (unsigned int)v6;
  if ( v7 )
  {
    v8 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v13 = (unsigned int *)*((_QWORD *)a2 + 1);
      v14 = (unsigned __int64)a3 >> 5;
      v15 = a3 & 0x1F;
      v16 = (_DWORD *)(v6 + 4 * v14);
      if ( v7 >= 0x20 )
      {
        v17 = v7 >> 5;
        v7 += -32LL * (v7 >> 5);
        do
        {
          v18 = *v16++ & ~((1 << v15) - 1);
          *v13 = v18 >> v15;
          LODWORD(v6) = (((1 << v15) - 1) & *v16) << (32 - v15);
          *v13++ |= v6;
          --v17;
        }
        while ( v17 );
      }
      if ( v7 )
      {
        if ( v7 > 32 - v15 )
        {
          LODWORD(v6) = (*v16 & (unsigned int)~((1 << v15) - 1)) >> v15;
          *v13 = v6 | ((v16[1] & ((1 << (v7 + v15 - 32)) - 1)) << (32 - v15));
        }
        else
        {
          LODWORD(v6) = (*v16 & (unsigned int)(((1 << v7) - 1) << v15)) >> v15;
          *v13 = v6;
        }
      }
    }
    else
    {
      v9 = (unsigned int)v7;
      v10 = v7 & 7;
      v11 = v9 >> 3;
      if ( v11 )
        LOBYTE(v6) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v8 + *(_QWORD *)(a1 + 8)), v11);
      if ( v10 )
      {
        v12 = *((_QWORD *)a2 + 1);
        *(_BYTE *)(v11 + v12) &= ~((1 << v10) - 1);
        LOBYTE(v6) = ((1 << v10) - 1) & *(_BYTE *)(v11 + *(_QWORD *)(a1 + 8) + v8);
        *(_BYTE *)(v11 + v12) |= v6;
      }
    }
  }
  return v6;
}
