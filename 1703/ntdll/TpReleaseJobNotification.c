/*
 * XREFs of TpReleaseJobNotification @ 0x180080EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_180080F20 @ 0x180080F20 (sub_180080F20.c)
 *     sub_1800811F0 @ 0x1800811F0 (sub_1800811F0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1)
{
  signed __int32 v2; // eax

  v2 = sub_1800811F0(a1, 1LL);
  if ( v2 )
  {
    LOBYTE(v2) = sub_1800144B8(a1 + 72, 1LL);
    if ( v2 )
    {
      sub_180080F20(a1);
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v2;
}
