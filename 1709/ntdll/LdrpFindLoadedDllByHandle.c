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
  unsigned __int64 Root; // rdi
  int v8; // ebp
  int v9; // eax
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE *v11; // rax

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
      Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
      v8 = *(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1;
      if ( LdrpModuleBaseAddressIndex.Root )
      {
        do
        {
          v9 = LdrpCompareModuleBaseAddresses(a1, Root);
          if ( v9 < 0 )
          {
            v10 = *(_QWORD *)Root;
          }
          else
          {
            if ( v9 <= 0 )
              break;
            v10 = *(_QWORD *)(Root + 8);
          }
          if ( v8 && v10 )
            Root ^= v10;
          else
            Root = v10;
        }
        while ( Root );
        if ( Root )
        {
          v3 = Root - 200;
          v11 = *(_RTL_BALANCED_NODE **)(Root - 200 + 152);
          if ( LODWORD(v11[1].Children[0]) != -1 && (*(_BYTE *)&v11->Children[0][-3].0 & 0x20) == 0 )
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
