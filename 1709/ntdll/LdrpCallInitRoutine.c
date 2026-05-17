/*
 * XREFs of LdrpCallInitRoutine @ 0x180031254
 * Callers:
 *     LdrpProcessDetachNode @ 0x180012198 (LdrpProcessDetachNode.c)
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x180076200 (LdrShutdownProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(__int64 a1, int a2, int a3)
{
  _DWORD *SharedData; // r10
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rcx
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r9d
  char v16; // [rsp+48h] [rbp-38h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    v6 = 2147353476LL;
  }
  else
  {
    v6 = 2147353476LL;
    v7 = 2147353476LL;
  }
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v8 = 2147353477LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, v7) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v14 = 2147353477LL;
    if ( (*(_BYTE *)v14 & 0x20) != 0 )
    {
      LOBYTE(v13) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v13, 0LL, 0LL);
    }
  }
  else
  {
    v8 = 2147353477LL;
  }
  v16 = _guard_dispatch_icall_fptr();
  v11 = NtCurrentPeb()->SharedData;
  if ( v11 && *v11 )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v9) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v10) = -1;
      LdrpLogEtwEvent(5270, a2, v10, v15, 0LL, 0LL);
    }
  }
  if ( !v16 && a3 == 1 )
  {
    LOBYTE(v10) = 1;
    LdrpLogError(3221225794LL, 5270LL, v10, 0LL);
  }
  return v16;
}
