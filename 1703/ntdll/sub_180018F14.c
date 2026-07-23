/*
 * XREFs of sub_180018F14 @ 0x180018F14
 * Callers:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 * Callees:
 *     sub_1800039E8 @ 0x1800039E8 (sub_1800039E8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwCancelTimer2 @ 0x1800A64F0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A8710 (ZwSetTimer2.c)
 *     sub_180105A78 @ 0x180105A78 (sub_180105A78.c)
 */

void __fastcall sub_180018F14(__int64 a1, char a2)
{
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rbx
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
    v4 = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 8) + 32LL);
    v5 = (*(_QWORD *)(v3 + 32) - v4.QuadPart) / 10000;
    if ( *(_QWORD *)a1 == v4.QuadPart && *(_DWORD *)(a1 + 112) == (_DWORD)v5 )
      return;
    *(LARGE_INTEGER *)a1 = v4;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)v5;
    *(_DWORD *)(a1 + 112) = v5;
    if ( !a2 )
    {
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v6 <= v4.QuadPart )
      {
        v4.QuadPart = v6 - v4.QuadPart;
        DueTime = v4;
LABEL_8:
        if ( RtlGetCurrentServiceSessionId() )
        {
          v4 = DueTime;
          v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
        }
        else
        {
          v7 = 2147353478LL;
        }
        if ( *(_BYTE *)v7 )
          sub_1800039E8(a1, v4.QuadPart, v5);
        ZwSetTimer2(*(HANDLE *)(a1 + 24), &DueTime, 0LL, &Parameters);
        return;
      }
      v4.QuadPart = 0LL;
    }
    DueTime = v4;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      sub_180105A78(a1);
    ZwCancelTimer2(*(HANDLE *)(a1 + 24), 0LL);
  }
}
