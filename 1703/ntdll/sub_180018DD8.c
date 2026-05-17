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

__int64 __fastcall sub_180018DD8(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r14
  bool v8; // bp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rax
  unsigned int v16; // eax

  v6 = 1LL;
  v7 = a3;
  v8 = *a3 >= 0LL;
  v9 = a2;
  *(_DWORD *)(a1 + 348) = a4;
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (-(__int64)v8 & 0xFFFFFFFFFFFFFF88uLL) + a2 + 128;
  if ( v8 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v15 = *a3;
    if ( !*a3 )
      v15 = 1LL;
    *(_QWORD *)(a1 + 328) = v15;
  }
  else
  {
    v11 = (__int64 *)(a1 + 328);
    if ( a1 == -328 )
    {
      v16 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v16);
    }
    else
    {
      a4 = 2147353520LL;
      a2 = RtlpFreezeTimeBias;
      a3 = (_QWORD *)MEMORY[0x7FFE03B0];
      *v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    }
    v6 = *v11;
    if ( *v11 - *v7 < *v11 )
    {
      *v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v6 -= *v7;
      *v11 = v6;
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
    v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v12 = 2147353478LL;
  if ( *(_BYTE *)v12 )
    sub_180003AB8(v10, a1);
  RtlAcquireSRWLockExclusive(v9);
  sub_180019084(v10, a1);
  LOBYTE(v13) = v8;
  sub_180018F14(v10, v13);
  return RtlReleaseSRWLockExclusive(v9);
}
