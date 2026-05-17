/*
 * XREFs of TpReleaseJobNotification @ 0x180013ED0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 *     TppJobpRundownJob @ 0x180013F30 (TppJobpRundownJob.c)
 *     TppJobpValidateJob @ 0x180014200 (TppJobpValidateJob.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseJobNotification(__int64 a1)
{
  signed __int32 v2; // eax

  v2 = TppJobpValidateJob(a1, 1LL);
  if ( v2 )
  {
    LOBYTE(v2) = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( v2 )
    {
      TppJobpRundownJob(a1);
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 80))(a1 + 72);
    }
  }
  return v2;
}
