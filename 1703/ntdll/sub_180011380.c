/*
 * XREFs of sub_180011380 @ 0x180011380
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180011380(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
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
      sub_18008A588(v4, a2, a3);
    v5 = NtCurrentTeb();
    v6 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      sub_180002FC8(0LL, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_1800169EC(&v9, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v5->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v6 )
      sub_180002F48(0LL, *((_QWORD *)a2 + 8), *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    sub_1800169B4(v9);
  }
}
