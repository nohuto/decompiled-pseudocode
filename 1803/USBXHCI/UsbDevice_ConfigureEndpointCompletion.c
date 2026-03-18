/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x1C0031130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  bool v3; // zf
  __int64 v4; // rdx
  char v5; // r8
  unsigned __int16 v6; // cx
  unsigned int v7; // edi
  __int64 (__fastcall *v8)(__int64, _QWORD); // rax
  __int64 v9; // rcx

  v2 = *(__int64 **)(a1 + 48);
  v3 = a2 == 3;
  v4 = *v2;
  if ( v3 )
  {
    v5 = *((_BYTE *)v2 + 135);
    v6 = 70;
LABEL_6:
    v7 = -1073741823;
    goto LABEL_7;
  }
  v5 = *(_BYTE *)(a1 + 61);
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    v6 = 72;
    goto LABEL_6;
  }
  v7 = 0;
  v6 = 71;
LABEL_7:
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(v2[1] + 72),
    v4,
    12,
    v6,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    v5,
    *v2);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD))v2[67];
  v9 = v2[68];
  v2[67] = 0LL;
  v2[68] = 0LL;
  return v8(v9, v7);
}
