/*
 * XREFs of LdrpProcessInitializationComplete @ 0x180087390
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

int LdrpProcessInitializationComplete()
{
  struct _PEB *v0; // rax
  __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx

  LODWORD(v0) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v0 )
  {
    v0 = NtCurrentPeb();
    v1 = (__int64)v0->SharedData + 554;
  }
  else
  {
    v1 = 2147353476LL;
  }
  if ( *(_BYTE *)v1 )
  {
    v0 = NtCurrentPeb();
    if ( (v0->TracingFlags & 4) != 0 )
    {
      LODWORD(v0) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v0 )
      {
        v0 = NtCurrentPeb();
        v4 = (__int64)v0->SharedData + 555;
      }
      else
      {
        v4 = 2147353477LL;
      }
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
      {
        LOBYTE(v3) = -1;
        LOBYTE(v2) = -1;
        LODWORD(v0) = LdrpLogEtwEvent(5252, -1, v2, v3, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(&LdrpProcessInitialized);
  return (int)v0;
}
