/*
 * XREFs of ndisQueueMiniportOnDriver @ 0x1C00F9F78
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 */

unsigned __int8 __fastcall ndisQueueMiniportOnDriver(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // di
  KIRQL v5; // al
  KSPIN_LOCK *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]

  v4 = 1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x13u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 392));
  v6 = (KSPIN_LOCK *)(a2 + 392);
  if ( *(_BYTE *)(a2 + 402) )
  {
    KeReleaseSpinLock(v6, v5);
    v4 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = a1;
    KeReleaseSpinLock(v6, v5);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v8 = v4;
    WPP_SF_qqd(0x14u, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1, a2, v8);
  }
  return v4;
}
