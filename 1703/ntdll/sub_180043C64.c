/*
 * XREFs of sub_180043C64 @ 0x180043C64
 * Callers:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     sub_1800DBA3C @ 0x1800DBA3C (sub_1800DBA3C.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

char __fastcall sub_180043C64(__int64 a1, int a2, int a3)
{
  PSILO_USER_SHARED_DATA SharedData; // r10
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  PSILO_USER_SHARED_DATA v10; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // r9d
  char v15; // [rsp+48h] [rbp-38h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
  {
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
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
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    else
      v13 = 2147353477LL;
    if ( (*(_BYTE *)v13 & 0x20) != 0 )
    {
      LOBYTE(v12) = a3;
      sub_1800D62F0(5283, a2, 0, v12, 0LL, 0LL);
    }
  }
  else
  {
    v8 = 2147353477LL;
  }
  v15 = _guard_dispatch_icall_fptr();
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && v10->ServiceSessionId )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    if ( (*(_BYTE *)v8 & 0x20) != 0 )
    {
      LOBYTE(v14) = -1;
      LOBYTE(v9) = -1;
      sub_1800D62F0(5270, a2, v9, v14, 0LL, 0LL);
    }
  }
  if ( !v15 && a3 == 1 )
  {
    LOBYTE(v9) = 1;
    sub_180084734(3221225794LL, 5270LL, v9, 0LL);
  }
  return v15;
}
