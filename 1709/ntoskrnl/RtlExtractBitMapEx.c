/*
 * XREFs of RtlExtractBitMapEx @ 0x140251FC0
 * Callers:
 *     RtlShiftLeftBitMapEx @ 0x140253800 (RtlShiftLeftBitMapEx.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

char __fastcall RtlExtractBitMapEx(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rdi
  unsigned __int64 *v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax

  if ( a4 > *a1 - a3 )
    a4 = *a1 - a3;
  v8 = *(_QWORD *)a2;
  if ( a4 > *(_QWORD *)a2 )
    a4 = *(_QWORD *)a2;
  if ( a4 )
  {
    v9 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v8 = a1[1];
      v14 = a3 & 0x3F;
      v15 = (_QWORD *)(v8 + 8 * (a3 >> 6));
      v16 = *(unsigned __int64 **)(a2 + 8);
      if ( a4 >= 0x40 )
      {
        v17 = a4 >> 6;
        a4 += -64LL * (a4 >> 6);
        do
        {
          v18 = ~((1LL << v14) - 1) & *v15++;
          *v16 = v18 >> v14;
          v8 = (((1LL << v14) - 1) & *v15) << (64 - (unsigned __int8)v14);
          *v16++ |= v8;
          --v17;
        }
        while ( v17 );
      }
      if ( a4 )
      {
        if ( a4 > 64 - v14 )
        {
          v8 = ((*v15 & (unsigned __int64)~((1LL << v14) - 1)) >> v14) | ((v15[1] & ((1LL << ((unsigned __int8)a4
                                                                                            + (unsigned __int8)v14
                                                                                            - 64))
                                                                                   - 1)) << (64 - (unsigned __int8)v14)) | *v16 & ~((1LL << a4) - 1);
          *v16 = v8;
        }
        else
        {
          v8 = (*v15 & (unsigned __int64)(((1LL << a4) - 1) << v14)) >> v14;
          *v16 = v8 | *v16 & ~((1LL << a4) - 1);
        }
      }
    }
    else
    {
      v10 = a4;
      v11 = a4 & 7;
      v12 = v10 >> 3;
      if ( v12 )
        LOBYTE(v8) = (unsigned __int8)memmove(*(void **)(a2 + 8), (const void *)(v9 + a1[1]), v12);
      if ( v11 )
      {
        v13 = *(_QWORD *)(a2 + 8);
        LOBYTE(v8) = *(_BYTE *)(v12 + a1[1] + v9) & ((1 << v11) - 1) | *(_BYTE *)(v12 + v13) & ~((1 << v11) - 1);
        *(_BYTE *)(v12 + v13) = v8;
      }
    }
  }
  return v8;
}
