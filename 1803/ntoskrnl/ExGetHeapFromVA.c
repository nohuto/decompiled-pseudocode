/*
 * XREFs of ExGetHeapFromVA @ 0x1402BD6B4
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExFreeHeapPages @ 0x1400E17DC (ExFreeHeapPages.c)
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 *     RtlpHpGetOwnerHeap @ 0x140294C68 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpEnvGetEnvHandle @ 0x1402BD7C4 (RtlpHpEnvGetEnvHandle.c)
 */

unsigned __int64 __fastcall ExGetHeapFromVA(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  if ( !ExpHeapBackedPoolEnabled )
    return 0LL;
  v2 = MiDeterminePoolType(a1);
  if ( v2 == 32 )
    v2 = v3;
  if ( v2 == 33 )
  {
    v4 = 0LL;
    v5 = 2LL;
  }
  else
  {
    v5 = 1LL;
    v4 = 1LL;
  }
  v9 = *(_OWORD *)RtlpHpEnvGetEnvHandle(&v9, v4, v5);
  return RtlpHpGetOwnerHeap(v8, &v9, v6, v7);
}
