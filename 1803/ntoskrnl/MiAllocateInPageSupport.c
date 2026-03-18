/*
 * XREFs of MiAllocateInPageSupport @ 0x14005763C
 * Callers:
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x140057704 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(unsigned __int64 a1, __int64 a2, unsigned int *a3, ULONG_PTR *a4)
{
  ULONG_PTR v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  void *v16; // rdi
  __int64 v17; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  v8 = *a3;
  if ( *a3 > 0x100 )
  {
    *a3 = 256;
    v8 = 256;
  }
  v9 = a2 | 1;
  if ( v8 <= 0x10 )
    v9 = a2;
  v10 = v9;
  if ( a4 )
    v10 = v9 | 4;
  result = MiGetInPageSupportBlock(v10, a2);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(v7, v12, v13, v14);
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v9 &= ~1u;
      *a3 = 16;
    }
    v16 = (void *)MiGetInPageSupportBlock(v9, v12);
    if ( v16 )
      goto LABEL_15;
    if ( (v9 & 1) == 0 )
      return (__int64)v16;
    *a3 = 16;
    v16 = (void *)MiGetInPageSupportBlock(v9 & 0xFFFFFFFE, v15);
    if ( v16 )
    {
LABEL_15:
      if ( !a4 )
        return (__int64)v16;
      v17 = MiLockProtoPoolPage(a1, 0LL);
      if ( v17 )
      {
        *a4 = v17;
        return (__int64)v16;
      }
      MiFreeInPageSupportBlock(v16);
    }
    return 0LL;
  }
  return result;
}
