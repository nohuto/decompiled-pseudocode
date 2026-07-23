/*
 * XREFs of RtlHpHeapManagerStart @ 0x140293128
 * Callers:
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     RtlHpKInitializeHeapManager @ 0x1402BD718 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpMetadataHeapCreate @ 0x140295D50 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140296DFC (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x14029DB28 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlHpHeapManagerStart(_RTL_RUN_ONCE *a1, __int64 a2, __int64 a3)
{
  _RTL_RUN_ONCE *v4; // rcx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1 + 1;
  v4[8].Value = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart(v4, 0x10000000LL, a3, 1LL);
  if ( (int)result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart(&a1[10]);
    if ( (int)result >= 0 )
    {
      v6 = 0x103uLL;
      RtlpHpMetadataHeapCreate(a1 + 1557, &v6, 0LL);
      return 0LL;
    }
  }
  return result;
}
