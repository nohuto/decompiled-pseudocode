/*
 * XREFs of DpiGetPnpRegistryKeyName @ 0x1C01232F0
 * Callers:
 *     ?DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z @ 0x1C017ADD0 (-DxgkReadPnPRegistryPath@@YAJPEAVDXGADAPTER@@IW4_DXGK_PNP_KEY_TYPE@@PEAGPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = (int)a2;
  if ( (_DWORD)a2 == 1 )
  {
    v5 = v3 + 512;
    goto LABEL_4;
  }
  if ( (_DWORD)a2 == 2 )
  {
    v5 = v3 + 528;
LABEL_4:
    *a3 = v5;
    return 0LL;
  }
  v7 = WdLogNewEntry5_WdError((unsigned int)(a2 - 1), a2);
  *(_QWORD *)(v7 + 24) = v4;
  WdLogEvent5_WdError(v7);
  return 3221225485LL;
}
