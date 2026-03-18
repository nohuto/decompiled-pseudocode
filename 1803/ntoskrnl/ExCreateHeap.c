/*
 * XREFs of ExCreateHeap @ 0x1402BD44C
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall ExCreateHeap(__int128 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( (a2 & 0xBFFFFFFF) != 0 )
    return 3221225495LL;
  v6 = *a1;
  v5 = RtlpHpHeapCreate(a2, a2, (__int64)a3, &v6);
  result = 0LL;
  if ( !v5 )
    return 3221225495LL;
  *a3 = v5;
  return result;
}
