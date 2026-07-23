/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x1800107A8
 * Callers:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 *     TpReleaseWork @ 0x18000C930 (TpReleaseWork.c)
 *     TpReleaseWait @ 0x180011BA0 (TpReleaseWait.c)
 *     TpReleaseIoCompletion @ 0x180012DE0 (TpReleaseIoCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800139E0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseJobNotification @ 0x180013ED0 (TpReleaseJobNotification.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

bool __fastcall TppCleanupGroupMemberRelease(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v2 | 0x10000, v2);
  }
  while ( v3 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  TppRaiseInvalidParameter(v2, a2);
  return 0;
}
