/*
 * XREFs of _PnpMultiSzDeleteString @ 0x140785A8C
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1407840B4 (_CmGetDeviceSiblings.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpMultiSzGetLen @ 0x1405713AC (_PnpMultiSzGetLen.c)
 */

char __fastcall PnpMultiSzDeleteString(wchar_t *a1, wchar_t *Str2)
{
  wchar_t *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  wchar_t *v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  PVOID PoolWithTag; // rax
  void *v11; // rsi

  v3 = a1;
  if ( a1 && Str2 )
  {
    if ( !*a1 )
      return 1;
    v4 = -1LL;
    while ( wcsicmp(v3, Str2) )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v3[v5] );
      v3 += v5 + 1;
      if ( !*v3 )
        return 1;
    }
    do
      ++v4;
    while ( v3[v4] );
    v6 = &v3[v4];
    if ( !v6[1] )
    {
      *(_DWORD *)v3 = 0;
      return 1;
    }
    v8 = 2 * PnpMultiSzGetLen(v6 + 1);
    if ( v8 )
    {
      v9 = v8;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x52504E50u);
      v11 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v6 + 1, v9);
        memmove(v3, v11, v9);
        ExFreePoolWithTag(v11, 0);
        return 1;
      }
    }
  }
  return 0;
}
