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

__int64 __fastcall LdrpFreeLoadContext(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 96); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 32) & 0x80000) == 0 && *(_QWORD *)(v5 + 56) != v4 )
          {
            *(_QWORD *)(v5 + 56) = v4;
            LdrpFreeReplacedModule(v4);
          }
        }
      }
    }
    result = RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 88));
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, a1);
  return result;
}
