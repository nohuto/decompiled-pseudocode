/*
 * XREFs of NtUserGetAtomName @ 0x1C00F1E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, int *a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+38h] [rbp-20h]
  volatile void *v11; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v10 = *a2;
  v11 = (volatile void *)*((_QWORD *)a2 + 1);
  ProbeForWrite(v11, HIWORD(*a2), 2u);
  AtomName = UserGetAtomName(a1, v11, HIWORD(v10) >> 1);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return AtomName;
}
