/*
 * XREFs of PopTraceSleepCheckpointInitFailure @ 0x1406CED44
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopTraceSleepCheckpointInitFailure()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  int *v3; // [rsp+58h] [rbp-30h]
  int v4; // [rsp+60h] [rbp-28h]
  int v5; // [rsp+64h] [rbp-24h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      TlgWrite(&hProvider, &unk_1402AD28F, 0LL, 0LL, 3u, &pData);
    }
  }
}
