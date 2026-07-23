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

void __fastcall sub_180075FE0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 ThreadInformation; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      sub_180076128(v4, a2, a3);
    v5 = NtCurrentTeb();
    v6 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      sub_180001FD0(0LL, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_18002567C(&v9, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v6 )
      sub_180002050(0LL, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_180025644(v9);
  }
}
