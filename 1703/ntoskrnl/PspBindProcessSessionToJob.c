/*
 * XREFs of PspBindProcessSessionToJob @ 0x14054C2D8
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 */

__int64 __fastcall PspBindProcessSessionToJob(__int64 a1, struct _KPROCESS *a2)
{
  unsigned __int32 SessionId; // eax
  __int64 v3; // r8
  int v4; // r9d
  __int64 v5; // rdx
  signed __int32 v7; // eax

  SessionId = MmGetSessionId(a2);
  v5 = SessionId;
  if ( v4 == SessionId )
    return 0LL;
  if ( v4 == -1
    && ((v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 480), SessionId, -1), v7 == -1)
     || v7 == (_DWORD)v5) )
  {
    return 0LL;
  }
  else
  {
    return PspConvertJobToMixed(v3, v5);
  }
}
