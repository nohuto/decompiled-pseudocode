/*
 * XREFs of RtlExtractBitMap @ 0x1800E5570
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r9
  unsigned int *v14; // r11
  __int64 v15; // r8
  _DWORD *v16; // rsi
  int v17; // r9d
  unsigned __int64 v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx

  v5 = *a2;
  v6 = *(_DWORD *)a1 - a3;
  if ( a4 <= (unsigned int)v6 )
    v6 = a4;
  if ( v6 <= v5 )
    v5 = (unsigned int)v6;
  if ( v5 )
  {
    v8 = (unsigned __int64)a3 >> 3;
    v9 = a3;
    if ( (a3 & 7) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v14 = (unsigned int *)*((_QWORD *)a2 + 1);
      v15 = a3 & 0x1F;
      v16 = (_DWORD *)(v6 + 4 * (v9 >> 5));
      v17 = 1 << v15;
      if ( v5 >= 0x20 )
      {
        v18 = v5 >> 5;
        v5 += -32LL * (v5 >> 5);
        do
        {
          v19 = *v16++ & ~(v17 - 1);
          v20 = v19 >> v15;
          *v14 = v20;
          LODWORD(v6) = v20 | ((*v16 & (v17 - 1)) << (32 - v15));
          *v14++ = v6;
          --v18;
        }
        while ( v18 );
      }
      if ( v5 )
      {
        if ( v5 > 32 - v15 )
          v21 = ((*v16 & (unsigned int)~(v17 - 1)) >> v15) | ((v16[1] & ((1 << (v5 + v15 - 32)) - 1)) << (32 - v15));
        else
          v21 = (*v16 & (unsigned int)(((1 << v5) - 1) << v15)) >> v15;
        LODWORD(v6) = v21 | ~((1 << v5) - 1) & *v14;
        *v14 = v6;
      }
    }
    else
    {
      v10 = (unsigned int)v5;
      v11 = v5 & 7;
      v12 = v10 >> 3;
      if ( v12 )
        LOBYTE(v6) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v8 + *(_QWORD *)(a1 + 8)), v12);
      if ( v11 )
      {
        v13 = *((_QWORD *)a2 + 1);
        LOBYTE(v6) = *(_BYTE *)(v12 + *(_QWORD *)(a1 + 8) + v8) & ((1 << v11) - 1) | *(_BYTE *)(v12 + v13) & ~((1 << v11) - 1);
        *(_BYTE *)(v12 + v13) = v6;
      }
    }
  }
  return v6;
}
