/*
 * XREFs of ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x18005D2B4
 * Callers:
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D314 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D358 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800F9450 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x18005BED4 (--$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4G.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

TLG_STATUS __fastcall CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(__int64 a1, int a2, int a3)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // si
  TLG_STATUS result; // eax
  __int64 v7; // r8
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = a2;
  v5 = a3;
  result = IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
             (LPCWSTR *)(*(_QWORD *)(a1 + 144) + 544LL),
             *(_QWORD *)(a1 + 144) + 552LL,
             &v8,
             &v9);
  if ( ((v5 ^ v4) & 2) != 0 )
  {
    if ( (v5 & 2) != 0 )
      return CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(a1, 0LL, 2LL);
    else
      return CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(a1, 2LL, v7);
  }
  return result;
}
