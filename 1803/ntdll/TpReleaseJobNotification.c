/*
 * XREFs of TpReleaseJobNotification @ 0x180056130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     sub_18005649C @ 0x18005649C (sub_18005649C.c)
 *     sub_180058A78 @ 0x180058A78 (sub_180058A78.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpReleaseJobNotification(__int64 a1)
{
  __int64 result; // rax

  result = sub_18005649C(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = sub_180058A78(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      sub_180056190(a1);
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return result;
}
