/*
 * XREFs of sub_18002C9D0 @ 0x18002C9D0
 * Callers:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
 * Callees:
 *     sub_180002694 @ 0x180002694 (sub_180002694.c)
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002CB04 @ 0x18002CB04 (sub_18002CB04.c)
 *     sub_18002CC78 @ 0x18002CC78 (sub_18002CC78.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180074E40 (RtlNtStatusToDosErrorNoTeb.c)
 */

signed __int64 __fastcall sub_18002C9D0(__int64 a1, volatile signed __int64 *a2, __int64 *a3, int a4, int a5)
{
  bool v6; // bp
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v19; // eax

  v6 = *a3 >= 0;
  *(_DWORD *)(a1 + 348) = a4;
  v9 = (__int64 *)(a1 + 328);
  *(_DWORD *)(a1 + 344) = a5;
  v10 = (__int64)a2 + (-(__int64)v6 & 0xFFFFFFFFFFFFFF88uLL) + 128;
  if ( v6 )
  {
    *(_BYTE *)(a1 + 354) |= 2u;
    v12 = *a3;
    if ( !*a3 )
      v12 = 1LL;
  }
  else
  {
    if ( a1 == -328 )
    {
      v19 = RtlNtStatusToDosErrorNoTeb(3221225485LL);
      RtlSetLastWin32Error(v19);
      v11 = MEMORY[0];
    }
    else
    {
      v11 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      *v9 = v11;
    }
    v12 = v11 - *a3;
    if ( v12 < v11 )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *v9 = v12;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v16 = 2147353478LL;
  if ( *(_BYTE *)v16 )
    sub_180002694(v10, a1);
  RtlAcquireSRWLockExclusive((unsigned __int64)a2, v13, v14, v15);
  sub_18002CC78(v10, a1);
  LOBYTE(v17) = v6;
  sub_18002CB04(v10, v17);
  return RtlReleaseSRWLockExclusive(a2);
}
