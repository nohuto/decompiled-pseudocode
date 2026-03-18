/*
 * XREFs of HUBHSM_IsItHubChange @ 0x1C0007740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall HUBHSM_IsItHubChange(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 *v5; // r11
  __int64 i; // rax
  __int64 v7; // rax
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 1;
  v3 = 8 * *(unsigned __int16 *)(v1 + 1122);
  v4 = _bittest64(*(const signed __int64 **)(v1 + 1136), 0) != 0 ? 2057 : 2041;
  if ( v3 > 1 )
  {
    v5 = (__int64 *)(v1 + 2352);
    while ( !_bittest64(*(const signed __int64 **)(v1 + 1136), v2) )
    {
LABEL_8:
      if ( ++v2 >= v3 )
        return v4;
    }
    for ( i = *v5; ; i = *(_QWORD *)(v7 + 248) )
    {
      v7 = i - 248;
      if ( v5 == (__int64 *)(v7 + 248) )
        break;
      if ( *(unsigned __int16 *)(v7 + 200) == v2 )
        goto LABEL_8;
    }
    v9 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2512),
      2u,
      3u,
      0x20u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v9);
    return 2026;
  }
  return v4;
}
