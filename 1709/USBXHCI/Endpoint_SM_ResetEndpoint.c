/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x1C001ABA0
 * Callers:
 *     ESM_ResettingEndpoint @ 0x1C003F0D0 (ESM_ResettingEndpoint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 */

__int64 __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // ecx
  unsigned int v7; // ecx
  _QWORD v9[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 272);
  LOWORD(v9[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v9);
  v3 = v9[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 272),
         off_1C004E098);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(v4 + 16), 0, 0x60uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 56) = Endpoint_OnResetEndpointResetCompletion;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_QWORD *)(v4 + 64) = v4;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_BYTE *)(v4 + 55) = v7;
  if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
    *(_DWORD *)(v4 + 52) |= 0x200u;
  else
    *(_DWORD *)(v4 + 52) &= ~0x200u;
  return Command_SendCommand(v5, v4 + 16);
}
