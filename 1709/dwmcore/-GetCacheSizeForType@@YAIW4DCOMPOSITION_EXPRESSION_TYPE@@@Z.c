/*
 * XREFs of ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BE6E4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCacheSizeForType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 17;
  if ( !v1 )
    return 12LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 12LL;
  v4 = v2 - 17;
  if ( !v4 )
    return 16LL;
  v5 = v4 - 17;
  if ( !v5 )
    return 20LL;
  v6 = v5 - 17;
  if ( !v6 )
    return 24LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 24LL;
  v8 = v7 - 1;
  if ( !v8 )
    return 24LL;
  v9 = v8 - 33;
  if ( !v9 )
    return 32LL;
  if ( v9 == 161 )
    return 72LL;
  return 0LL;
}
