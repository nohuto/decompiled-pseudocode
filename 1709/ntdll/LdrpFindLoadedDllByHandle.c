/*
 * XREFs of LdrpFindLoadedDllByHandle @ 0x1800292AC
 * Callers:
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     LdrpGetDelayloadExportDll @ 0x180022A6C (LdrpGetDelayloadExportDll.c)
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180037100 (RtlQueryInformationActivationContext.c)
 *     LdrGetDllFullName @ 0x180079D70 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007C930 (LdrDisableThreadCalloutsForDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800D1160 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D1590 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     LdrpCompareModuleBaseAddresses @ 0x1800297E8 (LdrpCompareModuleBaseAddresses.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByHandle(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == LdrpSystemDllBase )
    {
      v3 = LdrpNtDllDataTableEntry;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v7 = LdrpModuleBaseAddressIndex;
      v8 = byte_1801602C0 & 1;
      if ( LdrpModuleBaseAddressIndex )
      {
        do
        {
          v9 = LdrpCompareModuleBaseAddresses(a1, v7);
          if ( v9 < 0 )
          {
            v10 = *(_QWORD *)v7;
          }
          else
          {
            if ( v9 <= 0 )
              break;
            v10 = *(_QWORD *)(v7 + 8);
          }
          if ( v8 && v10 )
            v7 ^= v10;
          else
            v7 = v10;
        }
        while ( v7 );
        if ( v7 )
        {
          v3 = v7 - 200;
          v11 = *(_QWORD *)(v7 - 200 + 152);
          if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
          if ( a3 )
            *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
        }
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
