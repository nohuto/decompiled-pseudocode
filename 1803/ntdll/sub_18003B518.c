/*
 * XREFs of sub_18003B518 @ 0x18003B518
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_1800D51FC @ 0x1800D51FC (sub_1800D51FC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

char __fastcall sub_18003B518(__int64 a1, int a2, int a3)
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
      sub_1800CBAB0(5283, a2, 0, v12, 0LL, 0LL);
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
      sub_1800CBAB0(5270, a2, v9, v14, 0LL, 0LL);
    }
  }
  if ( !v15 && a3 == 1 )
  {
    LOBYTE(v9) = 1;
    sub_180043B30(3221225794LL, 5270LL, v9, 0LL);
  }
  return v15;
}
