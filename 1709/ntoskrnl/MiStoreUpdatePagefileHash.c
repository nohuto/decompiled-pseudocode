/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x14022CC04
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 *v6; // r12
  int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // esi
  int v13; // r15d
  unsigned int PagingFileOffset; // r14d
  __int64 v15; // r14
  unsigned __int64 v16; // r9
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h]
  unsigned int v19; // [rsp+88h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v19 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = a3;
  v12 = 16;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_140389188 )
      {
        v13 = 16;
        PagingFileOffset = v8;
      }
      else
      {
        v15 = 48 * result - 0x58000000000LL;
        v18 = v15;
        MiLockPageInline(v15);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v15 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset((__int64 *)(v15 + 16));
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
        v11 = a3;
        if ( !v9 )
          v9 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
        v5 = v19;
      }
      if ( v12 == v13 && PagingFileOffset == v8 )
      {
        ++v7;
      }
      else
      {
        if ( v12 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 5792), v11, v10 - v7, v5, v7);
        v5 = PagingFileOffset;
        v12 = v13;
        v19 = PagingFileOffset;
        v8 = PagingFileOffset;
        v7 = 1;
      }
      v11 = a3;
      ++v10;
      ++v6;
      ++v8;
    }
    while ( v10 < a4 );
    if ( v12 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v9 + 8LL * v12 + 5792), a3, v10 - v7, v5, v7);
  }
  return result;
}
