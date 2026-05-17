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

__int64 __fastcall sub_180030264(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax

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
      RtlAcquireSRWLockExclusive(&qword_18015C040);
      v7 = qword_18015C208;
      if ( qword_18015C208 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 - 152);
          if ( a1 < v8 )
            v9 = -1;
          else
            v9 = a1 > v8;
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
          if ( (byte_18015C210 & 1) != 0 && v10 )
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
      RtlReleaseSRWLockExclusive(&qword_18015C040);
    }
  }
  *a2 = v3;
  return v3 == 0 ? 0xC0000135 : 0;
}
