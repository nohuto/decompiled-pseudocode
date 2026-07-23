/*
 * XREFs of LdrpFreeLoadContext @ 0x18006D59C
 * Callers:
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006D510 (LdrpFreeLoadContextOfNode.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006D4E0 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006D638 (LdrpHandlePendingModuleReplaced.c)
 */

LOGICAL __fastcall LdrpFreeLoadContext(PVOID BaseAddress)
{
  LOGICAL result; // eax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*((_QWORD *)BaseAddress + 7) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(BaseAddress);
  if ( *((_QWORD *)BaseAddress + 11) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)BaseAddress + 24); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)BaseAddress + 11) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 32) & 0x80000) == 0 && *(_QWORD *)(v5 + 56) != v4 )
          {
            *(_QWORD *)(v5 + 56) = v4;
            LdrpFreeReplacedModule((PVOID *)v4);
          }
        }
      }
    }
    result = RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 11));
  }
  if ( (*((_DWORD *)BaseAddress + 8) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return result;
}
