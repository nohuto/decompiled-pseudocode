/*
 * XREFs of sub_1800773B0 @ 0x1800773B0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180002050 @ 0x180002050 (sub_180002050.c)
 *     sub_1800023A8 @ 0x1800023A8 (sub_1800023A8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025644 @ 0x180025644 (sub_180025644.c)
 *     sub_18002567C @ 0x18002567C (sub_18002567C.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800773B0(_DWORD *Instance, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int64 *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    sub_1800023A8(v3[18], a2, v3[10], v3[11], v3[13]);
  if ( (unsigned int)sub_180025ACC(Instance, (__int64)v3, 1) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      sub_180001FD0(v3[18], a2, v3[10], v3[11], v3[13]);
    sub_18002567C(&v8, v3[10], v3[11], v3[13]);
    ((void (__fastcall *)(_DWORD *, __int64))v3[10])(Instance, v3[11]);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    if ( *(_BYTE *)v5 )
      sub_180002050(v3[18], a2, v3[10], v3[11], v3[13]);
    sub_180025644(v8);
  }
}
