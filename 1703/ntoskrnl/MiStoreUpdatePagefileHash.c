/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x140077074
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 */

void __fastcall MiStoreUpdatePagefileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edx
  _QWORD *v5; // r12
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 v12; // r14
  int v13; // r15d
  unsigned int PagingFileOffset; // r14d
  unsigned __int64 v15; // r9
  __int64 v16; // [rsp+80h] [rbp+8h]
  unsigned int v17; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = (_QWORD *)(a3 + 48);
  v6 = 0;
  v17 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v10 = a3;
  v11 = 16;
  if ( a4 )
  {
    do
    {
      if ( *v5 == qword_14036CEC8 )
      {
        v13 = 16;
        PagingFileOffset = v7;
      }
      else
      {
        v12 = 48LL * *v5 - 0x58000000000LL;
        v16 = v12;
        MiLockPageInline(v12);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v12 + 16)) >> 4;
        PagingFileOffset = MiGetPagingFileOffset(v12 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        v10 = a3;
        if ( !v8 )
          v8 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
        v4 = v17;
      }
      if ( v11 == v13 && PagingFileOffset == v7 )
      {
        ++v6;
      }
      else
      {
        if ( v11 != 16 )
          MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 5600), v10, v9 - v6, v4, v6);
        v4 = PagingFileOffset;
        v11 = v13;
        v17 = PagingFileOffset;
        v7 = PagingFileOffset;
        v6 = 1;
      }
      v10 = a3;
      ++v9;
      ++v5;
      ++v7;
    }
    while ( v9 < a4 );
    if ( v11 != 16 )
      MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 5600), a3, v9 - v6, v4, v6);
  }
}
