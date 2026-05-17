/*
 * XREFs of sub_1800F2C28 @ 0x1800F2C28
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F2760 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     RtlCreateUmsThreadContext @ 0x1800F2500 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F2670 (RtlDeleteUmsThreadContext.c)
 */

__int64 __fastcall sub_1800F2C28(__int64 a1, __int64 a2)
{
  struct _TEB *v2; // rsi
  int v3; // edi
  int UmsThreadContext; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0LL;
  v2 = NtCurrentTeb();
  v3 = -1073741811;
  if ( a2 )
  {
    UmsThreadContext = RtlCreateUmsThreadContext((__int64 *)&v7);
    v5 = v7;
    v3 = UmsThreadContext;
    if ( UmsThreadContext < 0
      || (*(_QWORD *)(v7 + 1248) = v2,
          *(_QWORD *)(v5 + 1280) = v5,
          *(_QWORD *)(v5 + 1272) = SLODWORD(v2->ClientId.UniqueThread),
          v3 = ZwSetInformationThread(),
          v3 < 0) )
    {
      if ( v5 )
        RtlDeleteUmsThreadContext(v5);
    }
    else
    {
      v2->TlsSlots[4] = (void *)v5;
    }
  }
  return (unsigned int)v3;
}
