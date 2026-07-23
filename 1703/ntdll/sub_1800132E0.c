/*
 * XREFs of sub_1800132E0 @ 0x1800132E0
 * Callers:
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_18001327C @ 0x18001327C (sub_18001327C.c)
 *     sub_1800169B4 @ 0x1800169B4 (sub_1800169B4.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008A588 @ 0x18008A588 (sub_18008A588.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800132E0(PTP_CALLBACK_INSTANCE a1, _QWORD *a2, PTP_WAIT a3, int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[1] & 4) == 0 )
    sub_18001327C((__int64)a2, a4);
  if ( *a2 )
    sub_18008A588(*a2, a2, a3);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_180002FC8(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  sub_1800169EC(v11, a2[4], a2[5], v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  ((void (__fastcall *)(_QWORD, __int64))a2[4])(a2[5], v9);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( (a2[1] & 4) != 0 )
    sub_18001327C((__int64)a2, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v7 )
    sub_180002F48(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  sub_1800169B4(v11[0]);
}
