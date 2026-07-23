/*
 * XREFs of sub_1800D5364 @ 0x1800D5364
 * Callers:
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlTryEnterCriticalSection @ 0x18001EEC0 (RtlTryEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

char sub_1800D5364()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // r8d
  int v4; // r9d
  USHORT *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  int v9; // r8d
  int v10; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v5 = RtlGetCurrentServiceSessionId()
       ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
       : (USHORT *)2147353477;
    if ( (*(_BYTE *)v5 & 0x20) != 0 )
    {
      LOBYTE(v4) = -1;
      LOBYTE(v3) = -1;
      sub_1800D62F0(5248, -1, v3, v4, 0LL, 0LL);
    }
  }
  if ( RtlTryEnterCriticalSection(&stru_1801555A8) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v7) = -1;
        LOBYTE(v6) = -1;
        sub_1800D62F0(5249, -1, v6, v7, 0LL, 0LL);
      }
    }
    return 1;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v0 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v10) = -1;
        LOBYTE(v9) = -1;
        sub_1800D62F0(5250, -1, v9, v10, 0LL, 0LL);
      }
    }
    return 0;
  }
}
