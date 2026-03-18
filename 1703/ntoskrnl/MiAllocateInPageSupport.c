/*
 * XREFs of MiAllocateInPageSupport @ 0x1401067C4
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 */

void *__fastcall MiAllocateInPageSupport(unsigned __int64 a1, char a2, _DWORD *a3, __int64 *a4)
{
  __int64 v7; // rdi
  char v8; // bl
  char v9; // cl
  void *result; // rax
  void *v11; // rdi
  __int64 v12; // rax

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
  result = MiGetInPageSupportBlock(v9);
  if ( !result )
  {
    if ( a4 )
    {
      MiUnlockProtoPoolPage(v7, 0x11u);
    }
    else
    {
      if ( (v8 & 1) == 0 )
        return 0LL;
      v8 &= ~1u;
      *a3 = 16;
    }
    v11 = MiGetInPageSupportBlock(v8);
    if ( v11 )
      goto LABEL_15;
    if ( (v8 & 1) == 0 )
      return v11;
    *a3 = 16;
    v11 = MiGetInPageSupportBlock(v8 & 0xFE);
    if ( v11 )
    {
LABEL_15:
      if ( !a4 )
        return v11;
      v12 = MiLockProtoPoolPage(a1, 0LL);
      if ( v12 )
      {
        *a4 = v12;
        return v11;
      }
      MiFreeInPageSupportBlock(v11);
    }
    return 0LL;
  }
  return result;
}
