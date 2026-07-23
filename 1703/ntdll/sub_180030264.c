/*
 * XREFs of sub_180030264 @ 0x180030264
 * Callers:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     LdrGetDllFullName @ 0x18007AD40 (LdrGetDllFullName.c)
 *     LdrDisableThreadCalloutsForDll @ 0x18007E0D0 (LdrDisableThreadCalloutsForDll.c)
 *     LdrQueryModuleServiceTags @ 0x1800D55C0 (LdrQueryModuleServiceTags.c)
 *     LdrSetImplicitPathOptions @ 0x1800D59F0 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180030264(ULONG_PTR a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 Root; // rax
  ULONG_PTR v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // rcx
  _RTL_BALANCED_NODE *v11; // rax

  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == qword_18015B320 )
    {
      v3 = qword_18015B318;
      if ( a3 )
        *a3 = *(_DWORD *)(*(_QWORD *)(qword_18015B318 + 152) + 56LL);
    }
    else
    {
      RtlAcquireSRWLockExclusive(&stru_18015C040);
      Root = (unsigned __int64)stru_18015C208.Root;
      if ( stru_18015C208.Root )
      {
        do
        {
          v8 = *(_QWORD *)(Root - 152);
          if ( a1 < v8 )
            v9 = -1;
          else
            v9 = a1 > v8;
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
          if ( ((__int64)stru_18015C208.Min & 1) != 0 && v10 )
            Root ^= v10;
          else
            Root = v10;
        }
        while ( Root );
        if ( Root )
        {
          v3 = Root - 200;
          v11 = *(_RTL_BALANCED_NODE **)(Root - 200 + 152);
          if ( LODWORD(v11[1].Children[0]) != -1 && (*(_BYTE *)&v11->Children[0][-3].16 & 0x20) == 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v3 + 276));
          if ( a3 )
            *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 152) + 56LL);
        }
      }
      RtlReleaseSRWLockExclusive(&stru_18015C040);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
