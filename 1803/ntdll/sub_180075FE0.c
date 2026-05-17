/*
 * XREFs of sub_180075FE0 @ 0x180075FE0
 * Callers:
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180075FE0(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88) || !_InterlockedExchange((volatile __int32 *)(a2 + 92), 1) )
  {
    if ( *(_QWORD *)(a2 + 16) )
      sub_180076128();
    v3 = NtCurrentTeb();
    v4 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
      sub_180001FD0(0LL, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v3->SubProcessTag);
    sub_18002567C(&v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v3->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v6 = 0LL;
      ZwSetInformationThread(-2LL, 5LL, &v6);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    if ( *(_BYTE *)v4 )
      sub_180002050(0LL, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v3->SubProcessTag);
    sub_180025644(v7);
  }
}
