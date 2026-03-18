/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x140295D50
 * Callers:
 *     RtlHpHeapManagerStart @ 0x140293128 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4 = RtlpHpHeapCreate(0, (__int64)a2, (__int64)a3, &v6);
  result = 0LL;
  if ( v4 )
  {
    a1[-1].Value = v4;
    return 1LL;
  }
  return result;
}
