/*
 * XREFs of MiAllocateInPageSupport @ 0x14002A89C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14002A960 (MiGetInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 */

__int64 __fastcall MiAllocateInPageSupport(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0LL;
  if ( *a3 > 0x100u )
    *a3 = 256;
  v8 = a2 | 1;
  if ( *a3 <= 0x10u )
    v8 = a2;
  v9 = v8;
  if ( a4 )
    v9 = v8 | 4;
  result = MiGetInPageSupportBlock(v9, a2, a3, a4);
  if ( !result )
  {
    if ( a4 )
    {
      LOBYTE(v11) = 17;
      MiUnlockProtoPoolPage(v7, v11);
    }
    else
    {
      if ( (v8 & 1) == 0 )
        return 0LL;
      v8 &= ~1u;
      *a3 = 16;
    }
    v15 = (void *)MiGetInPageSupportBlock(v8, v11, v12, v13);
    if ( v15 )
      goto LABEL_13;
    if ( (v8 & 1) == 0 )
      return (__int64)v15;
    *a3 = 16;
    v15 = (void *)MiGetInPageSupportBlock(v8 & 0xFFFFFFFE, v14, v16, v17);
    if ( v15 )
    {
LABEL_13:
      if ( !a4 )
        return (__int64)v15;
      v18 = MiLockProtoPoolPage(a1, 0LL);
      if ( v18 )
      {
        *a4 = v18;
        return (__int64)v15;
      }
      MiFreeInPageSupportBlock(v15);
    }
    return 0LL;
  }
  return result;
}
