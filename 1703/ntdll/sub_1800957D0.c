/*
 * XREFs of sub_1800957D0 @ 0x1800957D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_180002FC8 @ 0x180002FC8 (sub_180002FC8.c)
 *     sub_1800169EC @ 0x1800169EC (sub_1800169EC.c)
 *     RtlSetThreadSubProcessTag @ 0x180017240 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800957D0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4, a2, a3, (__int64)a4);
  NtCurrentTeb()->ActivityId = *(struct _GUID *)(a2 + 160);
  v8 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    sub_180002FC8(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  sub_1800169EC(&v13, *(_QWORD *)(a2 - 8), a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
  if ( *(_BYTE *)v8 )
    sub_180002F48(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  if ( *(_QWORD *)(a2 + 152) )
  {
    RtlSetThreadSubProcessTag(0LL, v10, v11, v12);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  sub_1800169B4(v13);
}
