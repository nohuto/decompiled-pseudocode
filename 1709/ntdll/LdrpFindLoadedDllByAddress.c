/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x180019188
 * Callers:
 *     LdrFindEntryForAddress @ 0x180019140 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9A3C (AVrfCallAPILookupCallback.c)
 * Callees:
 *     LdrpCompareModuleBaseAddressRange @ 0x180019268 (LdrpCompareModuleBaseAddressRange.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(__int64 a1, volatile signed __int32 **a2, _DWORD *a3)
{
  unsigned __int64 Root; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  volatile signed __int32 *v10; // rdx
  _RTL_BALANCED_NODE *v11; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  v7 = *(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1;
  if ( LdrpModuleBaseAddressIndex.Root )
  {
    do
    {
      v8 = LdrpCompareModuleBaseAddressRange(a1, Root);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)Root;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(Root + 8);
      }
      if ( v7 && v9 )
        Root ^= v9;
      else
        Root = v9;
    }
    while ( Root );
    if ( Root )
    {
      v10 = (volatile signed __int32 *)(Root - 200);
      v11 = *(_RTL_BALANCED_NODE **)(Root - 200 + 152);
      if ( LODWORD(v11[1].Children[0]) != -1 && (*(_BYTE *)&v11->Children[0][-3].0 & 0x20) == 0 )
        _InterlockedIncrement(v10 + 69);
      *a2 = v10;
      if ( a3 )
        *a3 = *(_DWORD *)(*((_QWORD *)v10 + 19) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return Root == 0 ? 0xC0000135 : 0;
}
