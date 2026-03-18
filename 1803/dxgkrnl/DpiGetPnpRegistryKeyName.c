/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C01EFA20
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C0165AF4 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C0165CE8 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01EFBD0 (DpiOpenPnpRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  switch ( a2 )
  {
    case 1:
      v7 = v3 + 512;
      break;
    case 2:
      v7 = v3 + 528;
      break;
    case 3:
      v7 = *(_QWORD *)(v3 + 40) + 40LL;
      break;
    default:
      v5 = WdLogNewEntry5_WdError((unsigned int)(a2 - 2));
      *(_QWORD *)(v5 + 24) = v4;
      WdLogEvent5_WdError(v5);
      return 3221225485LL;
  }
  *a3 = v7;
  return 0LL;
}
