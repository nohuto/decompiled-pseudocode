/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C008B9E4
 * Callers:
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0016440 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1C00E63F0 (NtMITDisableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  char v2; // al
  bool v3; // bl

  RIMLockExclusive(a1);
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v2 = *(_BYTE *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = v2 == 0;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
