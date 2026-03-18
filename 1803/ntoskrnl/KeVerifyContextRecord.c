/*
 * XREFs of KeVerifyContextRecord @ 0x1401322F4
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 * Callees:
 *     RtlGuardIsValidWow64StackPointer @ 0x140564704 (RtlGuardIsValidWow64StackPointer.c)
 *     PsWow64GetProcessMachine @ 0x1405B8AE0 (PsWow64GetProcessMachine.c)
 *     RtlGuardIsValidStackPointer @ 0x1405B8B04 (RtlGuardIsValidStackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v8; // rcx
  __int16 v9; // ax

  v2 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(v2 + 440) & 0x20) != 0 && (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
  {
    v5 = *(_QWORD *)(a2 + 152);
    v6 = *(_QWORD *)(a1 + 240);
    if ( !(unsigned int)RtlGuardIsValidStackPointer(v5, v6) )
    {
      v8 = *(_QWORD *)(v2 + 1064);
      if ( !v8 )
        return 3221225485LL;
      v9 = *(_WORD *)(v8 + 8);
      if ( v9 != 332 && v9 != 452 )
        return 3221225485LL;
      if ( v5 >= 0xFFFFFFFF || !(unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v5, v6) )
        return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001
    && (unsigned __int16)PsWow64GetProcessMachine(*(_QWORD *)(a1 + 544), a2) != 332 )
  {
    *(_WORD *)(a2 + 56) = 51;
  }
  return 0LL;
}
