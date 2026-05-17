/*
 * XREFs of TpReleaseIoCompletion @ 0x1800572C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025900 @ 0x180025900 (sub_180025900.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseIoCompletion(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = sub_180025900((struct _PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
