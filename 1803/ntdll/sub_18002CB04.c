/*
 * XREFs of sub_18002CB04 @ 0x18002CB04
 * Callers:
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 * Callees:
 *     sub_18000262C @ 0x18000262C (sub_18000262C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x18009BCF0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x18009DF70 (ZwSetTimer2.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 */

void __fastcall sub_18002CB04(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER DueTime; // [rsp+20h] [rbp-28h] BYREF
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+28h] [rbp-20h] BYREF

  Parameters.Version = 0;
  v3 = *(_QWORD *)(a1 + 16);
  Parameters.NoWakeTolerance = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v5 = (*(_QWORD *)(v3 + 32) - v4) / 10000;
    if ( *(_QWORD *)a1 != v4 || *(_DWORD *)(a1 + 112) != (_DWORD)v5 )
    {
      *(_QWORD *)a1 = v4;
      Parameters.NoWakeTolerance = 10000LL * (unsigned int)v5;
      *(_DWORD *)(a1 + 112) = v5;
      if ( !a2 )
      {
        v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
        if ( v6 > v4 )
          v4 = 0LL;
        else
          v4 = v6 - v4;
      }
      DueTime.QuadPart = v4;
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      else
        v7 = 2147353478LL;
      if ( *(_BYTE *)v7 )
        sub_18000262C(a1, v4, v5);
      ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
    }
  }
  else if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_1801088FC(a1);
    ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
}
