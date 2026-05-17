/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x1800F0AA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rsi
  size_t *v6; // r14
  _QWORD *v7; // r12
  _QWORD *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  size_t v11; // rax
  __int64 result; // rax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = (size_t *)(a3 + 56);
    if ( Size + *(_QWORD *)(a3 + 72) <= *(_QWORD *)(a3 + 56) )
    {
LABEL_10:
      memmove((void *)(*(_QWORD *)(a3 + 72) + *(_QWORD *)(a3 + 48)), Src, v4);
      *(_QWORD *)(a3 + 72) += v4;
    }
    else
    {
      v7 = (_QWORD *)(a3 + 48);
      v8 = (_QWORD *)(a3 + 64);
      while ( 1 )
      {
        v9 = *(_QWORD *)(a3 + 72);
        v10 = *v6 - v9;
        memmove((void *)(*v7 + v9), Src, v10);
        v4 -= v10;
        *v8 += *v6;
        Src += v10;
        if ( *v8 >= *(_QWORD *)(a3 + 8) )
          break;
        NtUnmapViewOfSection();
        v11 = *(_QWORD *)(a3 + 8) - *v8;
        *v7 = 0LL;
        if ( *v6 < v11 )
          v11 = *v6;
        *v6 = v11;
        result = ZwMapViewOfSection();
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)(a3 + 72) = 0LL;
        if ( v4 <= *v6 )
          goto LABEL_10;
      }
      *(_DWORD *)(a3 + 28) = -1073741789;
    }
  }
  return 0LL;
}
