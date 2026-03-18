/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x140492018
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteRegistrationObject @ 0x140491B40 (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  _DWORD *v1; // rbx
  __int16 v3; // si
  struct _FAST_MUTEX *v4; // rdi
  __int64 *v6; // rcx

  v1 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_WORD *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !(_BYTE)v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( v1[6]-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !(_BYTE)v3 )
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
