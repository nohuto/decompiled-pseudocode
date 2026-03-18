/*
 * XREFs of HUBHSM_QueueingFakeStatusChangeOnResumeInS0 @ 0x1C00079B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_SignalPnpPowerEvent @ 0x1C000B598 (HUBFDO_SignalPnpPowerEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_QueueingFakeStatusChangeOnResumeInS0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 960);
  *(_DWORD *)(v1 + 2320) = *(_DWORD *)(v1 + 2348);
  for ( i = *(_QWORD *)(v1 + 2352); ; i = *(_QWORD *)(v3 + 248) )
  {
    v3 = i - 248;
    if ( v1 + 2352 == i )
      break;
    _InterlockedOr((volatile signed __int32 *)(v3 + 264), 1u);
    (*(void (__fastcall **)(__int64, __int64))(v3 + 1240))(v3, 3030LL);
  }
  HUBFDO_SignalPnpPowerEvent(v1);
  return 2053LL;
}
