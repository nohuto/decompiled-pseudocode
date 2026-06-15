/*
 * XREFs of _CVADServer::Initialize_::_1_::catch$28 @ 0x18005AA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVADServer::Initialize_::_1_::catch_28(__int64 a1, __int64 a2)
{
  int v2; // r9d

  v2 = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a2 + 96) = v2;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, v2);
  }
  return &loc_18001C706;
}
