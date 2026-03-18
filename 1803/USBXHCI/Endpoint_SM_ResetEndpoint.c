/*
 * XREFs of Endpoint_SM_ResetEndpoint @ 0x1C0013890
 * Callers:
 *     ESM_ResettingEndpoint @ 0x1C003D6E0 (ESM_ResettingEndpoint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 */

__int64 __fastcall Endpoint_SM_ResetEndpoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  _QWORD v11[5]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_QWORD *)(a1 + 272);
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    v2,
    v11);
  v3 = v11[1];
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 272),
         off_1C004B098);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(v4 + 16), 0, 0x60uLL);
  v6 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 56) = Endpoint_OnResetEndpointResetCompletion;
  v7 = v6 & 0xFFFF03FF | 0x3800;
  *(_QWORD *)(v4 + 64) = v4;
  *(_DWORD *)(v4 + 52) = v7;
  *(_DWORD *)(v4 + 52) = v7 ^ (v7 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v4 + 55) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  v8 = *(_DWORD *)(v4 + 52);
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
    v9 = v8 | 0x200;
  else
    v9 = v8 & 0xFFFFFDFF;
  *(_DWORD *)(v4 + 52) = v9;
  return Command_SendCommand(v5, v4 + 16);
}
