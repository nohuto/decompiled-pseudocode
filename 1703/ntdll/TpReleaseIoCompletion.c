/*
 * XREFs of TpReleaseIoCompletion @ 0x1800816C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseIoCompletion(__int64 a1)
{
  signed __int32 v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_1800176B8((struct _PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( v2 )
  {
    LOBYTE(v2) = sub_1800144B8(a1, 1LL);
    if ( v2 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return v2;
}
