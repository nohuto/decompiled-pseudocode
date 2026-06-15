/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$42 @ 0x180069660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVADServer::Initialize_::_1_::catch_42(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 200);
  *(_DWORD *)(a2 + 112) = v2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, v2);
  }
  return &loc_18002556F;
}
