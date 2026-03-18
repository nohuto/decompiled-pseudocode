/*
 * XREFs of PidNodeCompare @ 0x140711EF4
 * Callers:
 *     EtwpDemuxPrivateTraceHandle @ 0x14071161C (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14071172C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PidNodeCompare(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = *(_DWORD *)(a2 + 24);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFLL;
}
