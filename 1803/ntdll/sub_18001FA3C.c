/*
 * XREFs of sub_18001FA3C @ 0x18001FA3C
 * Callers:
 *     LdrGetDllFullName @ 0x18001F910 (LdrGetDllFullName.c)
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     LdrDisableThreadCalloutsForDll @ 0x180079BF0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800CA9A0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800CAE20 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001FA3C(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 Root; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == qword_18015C350 )
    {
      v3 = qword_18015C348;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(qword_18015C348 + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&stru_18015D070);
      Root = (unsigned __int64)stru_18015D228.Root;
      if ( ((__int64)stru_18015D228.Min & 1) != 0 && stru_18015D228.Root )
        Root = (unsigned __int64)&stru_18015D228 ^ (unsigned __int64)stru_18015D228.Root;
      while ( Root )
      {
        v8 = *(_QWORD *)(Root - 152);
        if ( a1 < v8 )
        {
          v9 = *(_QWORD *)Root;
        }
        else
        {
          if ( a1 <= v8 )
          {
            v3 = Root - 200;
            v10 = *(_QWORD *)(Root - 200 + 152);
            if ( *(_DWORD *)(v10 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v10 - 56LL) & 0x20) == 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
            if ( a3 )
              *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
            break;
          }
          v9 = *(_QWORD *)(Root + 8);
        }
        if ( ((__int64)stru_18015D228.Min & 1) != 0 && v9 )
          Root ^= v9;
        else
          Root = v9;
      }
      RtlReleaseSRWLockExclusive(&stru_18015D070);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
