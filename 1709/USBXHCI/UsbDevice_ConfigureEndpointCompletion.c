/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x1C00335D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r9d
  int v5; // edx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rcx
  char v10; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    v3 = *(unsigned __int8 *)(v2 + 135);
    v4 = 68;
LABEL_6:
    v10 = v3;
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v3,
      12,
      v4,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      v10,
      *(_QWORD *)v2);
    v6 = 3221225473LL;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 61);
    v4 = 70;
    goto LABEL_6;
  }
  v5 = *(unsigned __int8 *)(a1 + 61);
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
    v5,
    12,
    69,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(_BYTE *)(a1 + 61),
    *(_QWORD *)v2);
  v6 = 0LL;
LABEL_7:
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(v2 + 536);
  v8 = *(_QWORD *)(v2 + 544);
  *(_QWORD *)(v2 + 536) = 0LL;
  *(_QWORD *)(v2 + 544) = 0LL;
  return v7(v8, v6);
}
