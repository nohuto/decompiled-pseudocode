/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C001E5BC
 * Callers:
 *     UsbhSetFdoPnpState @ 0x1C001F38C (UsbhSetFdoPnpState.c)
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001E6C0 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  PCEVENT_DESCRIPTOR v3; // r10
  NTSTATUS result; // eax
  _DWORD v5[2]; // [rsp+60h] [rbp-58h] BYREF
  int v6; // [rsp+68h] [rbp-50h] BYREF
  __int16 v7; // [rsp+6Ch] [rbp-4Ch]
  __int16 v8; // [rsp+6Eh] [rbp-4Ah]
  __int16 v9; // [rsp+70h] [rbp-48h]
  __int16 v10; // [rsp+72h] [rbp-46h]
  _BYTE v11[40]; // [rsp+78h] [rbp-40h] BYREF

  if ( dword_1C006A650 )
  {
    v6 = *(_DWORD *)(a1 + 5192);
    v7 = *(_WORD *)(a1 + 5196);
    v8 = *(_DWORD *)(a1 + 5200);
    v9 = *(_WORD *)(a1 + 5228);
    v10 = *(_WORD *)(a1 + 5230);
    UsbhEtwGetHubInfo(a1, v11);
    LODWORD(v2) = *(_DWORD *)(v2 + 4208);
    v5[1] = *(_DWORD *)(v1 + 3124);
    v5[0] = v2;
    return UsbhEtwWrite(v3, 0LL, (unsigned __int64)&v6, 12LL, v11, 36LL, v5, 8LL, v1 + 2936, 71LL, 0LL);
  }
  return result;
}
