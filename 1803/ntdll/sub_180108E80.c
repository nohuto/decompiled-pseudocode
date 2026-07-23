/*
 * XREFs of sub_180108E80 @ 0x180108E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180108E80(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = *(GUID *)(a2 + 160);
  v8 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_180001FD0(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  sub_18002567C(&v10, *(_QWORD *)(a2 - 8), a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v8 )
    sub_180002050(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  if ( *(_QWORD *)(a2 + 152) )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  sub_180025644(v10);
}
