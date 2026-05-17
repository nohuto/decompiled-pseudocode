/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800567B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056970 @ 0x180056970 (sub_180056970.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = sub_180056970(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 256) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return result;
}
