/*
 * XREFs of NtUserGetClassName @ 0x1C00DCEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, int *a3)
{
  unsigned int AtomName; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  volatile void *v12; // rsi
  __int64 v13; // rax
  unsigned __int16 v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+78h] [rbp+20h]

  AtomName = 0;
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v16 = *a3;
    v12 = (volatile void *)*((_QWORD *)a3 + 1);
    ProbeForWrite(v12, HIWORD(v16), 2u);
    v15 = *(_WORD *)(*(_QWORD *)(v9 + 168) + 10LL);
    if ( a2 )
    {
      if ( (*(_WORD *)(v9 + 82) & 0x3FFF) != 0 )
      {
        v13 = (*(_WORD *)(v9 + 82) & 0x3FFFu) - 666;
        if ( (unsigned int)v13 < 0x1F )
        {
          _mm_lfence();
          if ( byte_1C02E5B30[v13] != 25 )
            v15 = *(_WORD *)(gpsi + 2LL * byte_1C02E5B30[v13] + 852);
        }
      }
    }
    AtomName = UserGetAtomName(v15, v12, HIWORD(v16) >> 1);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v10, v11);
  return AtomName;
}
