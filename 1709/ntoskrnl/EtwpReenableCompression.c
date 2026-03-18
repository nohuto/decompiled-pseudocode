/*
 * XREFs of EtwpReenableCompression @ 0x140281B58
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 */

void __fastcall EtwpReenableCompression(__int64 a1)
{
  bool v1; // zf
  int i; // eax
  __int64 *v4; // rdx
  __int64 *j; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 2340) == 2;
  v6 = 0;
  if ( !v1 && KeGetEffectiveIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 2328), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v6);
    for ( i = EtwpQueryUsedProcessorCount(a1); i && v4; --i )
    {
      if ( *((_DWORD *)v4 + 3) == 4 )
        *((_WORD *)v4 + 10) |= 0x80u;
      v4 = (__int64 *)*v4;
    }
    for ( j = *(__int64 **)(a1 + 72); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    EtwpUnlockBufferList(a1, &v6);
  }
}
