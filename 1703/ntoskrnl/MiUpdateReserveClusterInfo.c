/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x14003C70C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x1400840D0 (MiAdjustModifiedPageLoad.c)
 *     MiReservePageFileSpace @ 0x140104518 (MiReservePageFileSpace.c)
 *     MiFinishPageFileExtension @ 0x140219F78 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  __int64 result; // rax

  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 904),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  result = 512LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 904), ((*(_DWORD *)(a1 + 904) & 0xFFFFFC00) + 1024) | 0x200);
  return result;
}
