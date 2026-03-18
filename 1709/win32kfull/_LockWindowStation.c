/*
 * XREFs of _LockWindowStation @ 0x1C011F67C
 * Callers:
 *     NtUserLockWindowStation @ 0x1C011F620 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  _QWORD *i; // rax

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    *(_DWORD *)(a1 + 32) |= 1u;
    v3 = *(_DWORD *)(a1 + 32);
    for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)i[4] )
    {
      if ( i != grpdeskLogon && *(i - 5) )
      {
        v2 = 1;
        break;
      }
    }
    if ( (v3 & 8) != 0 )
      *(_DWORD *)(a1 + 32) = v3 | 2;
    return 2 - (unsigned int)(v2 != 0);
  }
  else
  {
    UserSetLastError(5LL, gpidLogon);
    return 0LL;
  }
}
