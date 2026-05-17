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

__int64 __fastcall LdrpFindLoadedDllByAddress(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v6 = LdrpModuleBaseAddressIndex;
  v7 = byte_1801602C0 & 1;
  if ( LdrpModuleBaseAddressIndex )
  {
    do
    {
      v8 = LdrpCompareModuleBaseAddressRange(a1, v6);
      if ( v8 < 0 )
      {
        v9 = *(_QWORD *)v6;
      }
      else
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      if ( v7 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      v10 = v6 - 200;
      v11 = *(_QWORD *)(v6 - 200 + 152);
      if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 276));
      *a2 = v10;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(v10 + 152) + 56LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v6 == 0 ? 0xC0000135 : 0;
}
