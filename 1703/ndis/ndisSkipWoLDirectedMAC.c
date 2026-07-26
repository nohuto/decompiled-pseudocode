/*
 * XREFs of ndisSkipWoLDirectedMAC @ 0x1C00D79C0
 * Callers:
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006CFDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

bool __fastcall ndisSkipWoLDirectedMAC(__int64 a1)
{
  const UNICODE_STRING *v1; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v4[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  wchar_t v6; // [rsp+58h] [rbp-20h]

  v1 = (const UNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 3784) + 40LL) + 56LL);
  v6 = aDriverMrvlpcie[20];
  v4[0] = *(_OWORD *)L"\\Driver\\mrvlpcie8897";
  String2.Buffer = (wchar_t *)v4;
  v4[1] = *(_OWORD *)L"mrvlpcie8897";
  *(_DWORD *)&String2.Length = 2752552;
  v5 = *(_QWORD *)L"8897";
  return RtlEqualUnicodeString(v1, &String2, 1u) != 0;
}
