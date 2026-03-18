/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x1402A1924
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x14048B860 (SeIsParentOfChildAppContainer.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, _QWORD *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8

  *a3 = 0LL;
  v4 = (__int64 **)g_SessionLowboxMap;
  if ( g_SessionLowboxMap )
  {
LABEL_7:
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == a1 )
      {
        v11 = (char *)(i + 3);
LABEL_17:
        *a3 = v11;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x734C6553u);
    if ( PoolWithTag )
    {
      v10 = g_SessionLowboxMap;
      v11 = (char *)(PoolWithTag + 3);
      PoolWithTag[3] = 0LL;
      *((_BYTE *)PoolWithTag + 56) = 0;
      *((_DWORD *)PoolWithTag + 4) = a1;
      v12 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      *PoolWithTag = v12;
      PoolWithTag[1] = v10;
      *(_QWORD *)(v12 + 8) = PoolWithTag;
      *(_QWORD *)v10 = PoolWithTag;
      goto LABEL_17;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  v4 = (__int64 **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x734C6553u);
  g_SessionLowboxMap = (__int64)v4;
  if ( v4 )
  {
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    goto LABEL_7;
  }
  return 3221225626LL;
}
