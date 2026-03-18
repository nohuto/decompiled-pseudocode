/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140590B80
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140590460 (EtwpDeleteRegistrationObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  _DWORD *v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  __int64 *v6; // rcx

  v1 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( v1[6]-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !v3 )
        v6 = &EtwpProviderTraitsUmTree;
      RtlRbRemoveNode((__int64)v6, (unsigned __int64)v1);
    }
    else
    {
      v1 = 0LL;
    }
    KeReleaseGuardedMutex(v4);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
