/*
 * XREFs of ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C01C70C4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AB300 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TriggerSDRWhiteLevelChangedWnf(__int64 a1)
{
  int updated; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v3 = updated;
  if ( updated < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
  }
  return (unsigned int)v3;
}
