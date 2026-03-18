/*
 * XREFs of HUBHSM_IsItHubChange @ 0x1C0007700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall HUBHSM_IsItHubChange(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned int v3; // r11d
  unsigned int v4; // edx
  _QWORD **v5; // r9
  _QWORD *i; // rax
  unsigned int v8; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 1;
  v3 = 8 * *(unsigned __int16 *)(v1 + 1122);
  v4 = _bittest64(*(const signed __int64 **)(v1 + 1136), 0) != 0 ? 2057 : 2041;
  if ( v3 > 1 )
  {
    v5 = (_QWORD **)(v1 + 2352);
    while ( !_bittest64(*(const signed __int64 **)(v1 + 1136), v2) )
    {
LABEL_8:
      if ( ++v2 >= v3 )
        return v4;
    }
    for ( i = *v5; v5 != i; i = (_QWORD *)*i )
    {
      if ( *((unsigned __int16 *)i - 24) == v2 )
        goto LABEL_8;
    }
    v8 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2512),
      2u,
      3u,
      0x20u,
      (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
      v8);
    return 2026;
  }
  return v4;
}
