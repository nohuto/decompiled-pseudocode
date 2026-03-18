/*
 * XREFs of VrpPreFlushKey @ 0x1406A6EA8
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall VrpPreFlushKey(__int64 a1, __int64 a2)
{
  GUID ActivityId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+60h] [rbp-38h] BYREF

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( (*(_DWORD *)(a2 + 80) & 1) != 0 )
  {
    if ( stru_140354A30.LevelPlus1 > 5 )
      TlgWrite(&stru_140354A30, &unk_1402CF3EE, &ActivityId, 0LL, 2u, &pData);
    return 3221226755LL;
  }
  else
  {
    if ( stru_140354A30.LevelPlus1 > 5 )
      TlgWrite(&stru_140354A30, &unk_1402CF747, &ActivityId, 0LL, 2u, &v6);
    return 0LL;
  }
}
