/*
 * XREFs of TpReleaseTimer @ 0x180019600
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     sub_180082ED0 @ 0x180082ED0 (sub_180082ED0.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     sub_1800144B8 @ 0x1800144B8 (sub_1800144B8.c)
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_1800196E0 @ 0x1800196E0 (sub_1800196E0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall TpReleaseTimer(__int64 a1)
{
  int v2; // edi
  signed __int32 v3; // eax
  __int64 v4; // r9
  __int64 (__fastcall *v5)(__int64); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  v3 = sub_18001770C((struct _PEB_LDR_DATA *)a1, 1LL, 0LL);
  if ( v3 )
  {
    LOBYTE(v3) = sub_1800144B8(a1, 1LL);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      RtlAcquireSRWLockExclusive(a1 + 240);
      ++*(_BYTE *)(a1 + 355);
      if ( sub_1800177A0(a1, *(_QWORD *)(a1 + 144) + 112LL, 0LL, v4) )
        v2 = 2;
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, -v2);
      if ( v3 == v2 )
      {
        v5 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( v5 == sub_1800196E0 )
          LOBYTE(v3) = sub_1800196E0(a1);
        else
          LOBYTE(v3) = v5(a1);
      }
    }
  }
  return v3;
}
