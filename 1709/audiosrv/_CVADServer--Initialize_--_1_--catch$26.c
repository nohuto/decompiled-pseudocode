/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$26 @ 0x180039A0C
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVADServer::Initialize_::_1_::catch_26(__int64 a1, __int64 a2)
{
  __int64 v2; // r9

  v2 = *(unsigned int *)(a2 + 160);
  *(_DWORD *)(a2 + 120) = v2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v2);
  }
  return &loc_180053B69;
}
