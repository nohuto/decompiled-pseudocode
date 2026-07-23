/*
 * XREFs of sub_180018DD8 @ 0x180018DD8
 * Callers:
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 * Callees:
 *     sub_180003AB8 @ 0x180003AB8 (sub_180003AB8.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 *     sub_180019084 @ 0x180019084 (sub_180019084.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077920 (RtlNtStatusToDosErrorNoTeb.c)
 */

void __fastcall sub_180018DD8(__int64 a1, _RTL_SRWLOCK *a2, __int64 *a3, int a4, int a5)
{
  bool v7; // bp
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  LONG v14; // eax

  v7 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  *(_DWORD *)(a1 + 344) = a5;
  v9 = (__int64)&a2[16] + (-(__int64)v7 & 0xFFFFFFFFFFFFFF88uLL);
  if ( v7 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v13 = *a3;
    if ( !*a3 )
      v13 = 1LL;
    *(_QWORD *)(a1 + 328) = v13;
  }
  else
  {
    v10 = (_QWORD *)(a1 + 328);
    if ( a1 == -328 )
    {
      v14 = RtlNtStatusToDosErrorNoTeb(-1073741811);
      RtlSetLastWin32Error(v14);
    }
    else
    {
      *v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    if ( *v10 - *a3 < *v10 )
      *v10 = 0x7FFFFFFFFFFFFFFFLL;
    else
      *v10 -= *a3;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v11 = 2147353478LL;
  if ( *(_BYTE *)v11 )
    sub_180003AB8(v9, a1);
  RtlAcquireSRWLockExclusive(a2);
  sub_180019084(v9, a1);
  LOBYTE(v12) = v7;
  sub_180018F14(v9, v12);
  RtlReleaseSRWLockExclusive(a2);
}
