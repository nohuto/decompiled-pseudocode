/*
 * XREFs of sub_180076EF0 @ 0x180076EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180076128 @ 0x180076128 (sub_180076128.c)
 *     sub_180077048 @ 0x180077048 (sub_180077048.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180076EF0(PTP_CALLBACK_INSTANCE a1, __int64 *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[1] & 4) == 0 )
    sub_180077048(a2, a4, a3);
  if ( *a2 )
    sub_180076128(*a2);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_180001FD0(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  sub_18002567C(v13, a2[4], a2[5], (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  ((void (__fastcall *)(__int64, __int64))a2[4])(a2[5], v9);
  v11 = *((_DWORD *)a2 + 2);
  if ( (v11 & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    v11 = *((_DWORD *)a2 + 2);
  }
  if ( (v11 & 4) != 0 )
    sub_180077048(a2, a4, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v7 )
    sub_180002050(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  sub_180025644(v13[0]);
}
