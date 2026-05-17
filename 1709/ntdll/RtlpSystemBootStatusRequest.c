/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x18008880C
 * Callers:
 *     RtlSetSystemBootStatus @ 0x1800887E0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x1800EAB70 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800EABA0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800EAD20 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned __int64 v7; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 || (v7 = 4LL * a3, v5 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0, v7 <= 0xFFFFFFFF) )
  {
    v8[2] = a2;
    v8[1] = a3;
    v8[0] = a1;
    return (unsigned int)NtPowerInformation(87LL, v8, 24LL);
  }
  return v5;
}
