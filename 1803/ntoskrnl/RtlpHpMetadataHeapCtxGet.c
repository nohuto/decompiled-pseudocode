/*
 * XREFs of RtlpHpMetadataHeapCtxGet @ 0x140295D90
 * Callers:
 *     RtlpHpHeapAllocate @ 0x140294D44 (RtlpHpHeapAllocate.c)
 *     RtlpHpMetadataAlloc @ 0x140295B48 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCtxGet(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HeapManager; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = *a1;
  HeapManager = RtlpHpEnvGetHeapManager(&v9, v9, a3, a4);
  v5 = 2;
  v7 = v6 >> 8;
  if ( (unsigned __int8)v7 < 2u )
    v5 = (unsigned __int8)v7;
  return HeapManager + 16 * (v5 + 777LL);
}
