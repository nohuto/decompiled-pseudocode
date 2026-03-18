/*
 * XREFs of NtUserGetAtomName @ 0x1C00FDEA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, ULONG64 a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+38h] [rbp-20h]
  volatile void *v9; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v8 = *(_DWORD *)a2;
  v9 = *(volatile void **)(a2 + 8);
  ProbeForWrite(v9, (unsigned __int16)HIWORD(*(_DWORD *)a2), 2u);
  AtomName = UserGetAtomName(a1, v9, HIWORD(v8) >> 1);
  UserSessionSwitchLeaveCrit(v6, v5);
  return AtomName;
}
