/*
 * XREFs of Isoch_EP_EndpointResetFromClient @ 0x1C0027F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Isoch_EP_EndpointResetFromClient(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 56);
  v6 = *(_DWORD *)(v3 + 144);
  v5 = *(unsigned __int8 *)(v2 + 135);
  result = WPP_RECORDER_SF_DD(
             *(_QWORD *)(v3 + 80),
             4u,
             0xEu,
             0xEu,
             (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
             v5,
             v6);
  *(_BYTE *)(a1 + 334) = 1;
  return result;
}
