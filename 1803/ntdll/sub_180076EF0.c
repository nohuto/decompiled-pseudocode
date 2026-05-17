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

void __fastcall sub_180076EF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12[6]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    sub_180077048(a2, a4);
  if ( *(_QWORD *)a2 )
    sub_180076128(*(_QWORD *)a2);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_180001FD0(0LL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v6->SubProcessTag);
  sub_18002567C(v12, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v9);
  v10 = *(_DWORD *)(a2 + 8);
  if ( (v10 & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v11 = 0LL;
    ZwSetInformationThread(-2LL, 5LL, &v11);
    v10 = *(_DWORD *)(a2 + 8);
  }
  if ( (v10 & 4) != 0 )
    sub_180077048(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v7 )
    sub_180002050(0LL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v6->SubProcessTag);
  sub_180025644(v12[0]);
}
