/*
 * XREFs of ResCCloseRuntimeView @ 0x18010BA90
 * Callers:
 *     LdrFlushAlternateResourceModules @ 0x18008BB60 (LdrFlushAlternateResourceModules.c)
 *     ResCKeGetCacheIndices @ 0x18010BE24 (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     ResCDirectoryFree @ 0x18010C5EC (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x18010C818 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x18010C978 (ResCSegmentFree.c)
 *     ResCFreeCultureMap @ 0x180111554 (ResCFreeCultureMap.c)
 */

_BOOL8 __fastcall ResCCloseRuntimeView(PVOID BaseAddress)
{
  __int64 v1; // rbp
  int v3; // edi
  void *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  _QWORD *v9; // rcx
  BOOL v10; // edi
  __int64 v11; // rsi
  void *v12; // rcx

  v1 = 0LL;
  v3 = 1;
  if ( !BaseAddress )
    return 0LL;
  v5 = (void *)*((_QWORD *)BaseAddress + 1);
  if ( v5 )
  {
    v6 = ResCFreeCultureMap(v5);
    *((_QWORD *)BaseAddress + 1) = 0LL;
    v3 = v6;
  }
  v7 = *((_QWORD *)BaseAddress + 2);
  if ( v7 )
  {
    v8 = *(void **)(v7 + 64);
    if ( v8 )
    {
      ResCHitsFree(v8);
      *(_QWORD *)(*((_QWORD *)BaseAddress + 2) + 64LL) = 0LL;
    }
    v9 = (_QWORD *)*((_QWORD *)BaseAddress + 2);
    v1 = *(unsigned int *)(v9[3] + 68LL);
    v10 = (unsigned int)ResCDirectoryFree(v9) && v3;
    *((_QWORD *)BaseAddress + 2) = 0LL;
  }
  else
  {
    v10 = 0;
  }
  if ( *((_QWORD *)BaseAddress + 3) )
  {
    if ( (_DWORD)v1 )
    {
      v11 = 0LL;
      do
      {
        v12 = *(void **)(v11 + *((_QWORD *)BaseAddress + 3));
        if ( v12 )
        {
          v10 = (unsigned int)ResCSegmentFree(v12) && v10;
          *(_QWORD *)(v11 + *((_QWORD *)BaseAddress + 3)) = 0LL;
        }
        v11 += 8LL;
        --v1;
      }
      while ( v1 );
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)BaseAddress + 3));
    *((_QWORD *)BaseAddress + 3) = 0LL;
  }
  else
  {
    v10 = 0;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v10;
}
