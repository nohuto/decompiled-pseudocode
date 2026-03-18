/*
 * XREFs of Bulk_Cleanup @ 0x1C002B2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     Bulk_DoesDriverOwnRequests @ 0x1C002B814 (Bulk_DoesDriverOwnRequests.c)
 */

void __fastcall Bulk_Cleanup(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+38h] [rbp-10h]

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  if ( (unsigned __int8)Bulk_DoesDriverOwnRequests(a1) )
  {
    v4 = *(_DWORD *)(a1 + 64);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0xAu,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
      v2,
      v3,
      v4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
}
