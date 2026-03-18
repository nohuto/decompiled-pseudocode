/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x14017DEF0
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140080BEC (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x14025F6C4 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 856),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 856),
                           (*(_DWORD *)(a1 + 856) & 0xFFFFFC00 | 0x200) + 1024);
}
