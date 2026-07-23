/*
 * XREFs of LdrProcessInitializationComplete @ 0x180083490
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

int LdrProcessInitializationComplete()
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
    v1 = (__int64)&v0->SharedData->UserModeGlobalLogger[2];
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
        v4 = (__int64)&v0->SharedData->UserModeGlobalLogger[2] + 1;
      }
      else
      {
        v4 = 2147353477LL;
      }
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
      {
        LOBYTE(v3) = -1;
        LOBYTE(v2) = -1;
        LODWORD(v0) = sub_1800CBAB0(5252, -1, v2, v3, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(&dword_18015C3B8);
  return (int)v0;
}
