/*
 * XREFs of IsProcSpeedStepCapable @ 0x1C0006D64
 * Callers:
 *     ValidatePStateCapability @ 0x1C0002E50 (ValidatePStateCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004A70 (GetCpuIdInfo.c)
 */

bool IsProcSpeedStepCapable()
{
  char v0; // bl
  int v1; // ecx
  unsigned __int64 v2; // rax
  int v3; // r8d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  GetCpuIdInfo(1u, v9);
  v1 = (v9[0] >> 8) & 0xF;
  if ( v1 == 15 && (v9[0] & 0xF0u) <= 0x20 )
  {
    v2 = __readmsr(0x2Cu);
    return (v2 & 0x200000) != 0 && (v2 & 0xFF00) != 0;
  }
  if ( v1 != 6 )
    return v0;
  v3 = LOBYTE(v9[0]) >> 4;
  if ( v3 != 8 && v3 != 11 )
    return v0;
  if ( (v9[0] & 0xF0000) != 0 )
    return v0;
  v4 = __readmsr(0x17u);
  v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) >> 32;
  if ( (v5 & 0x40000) == 0 )
    return v0;
  if ( (v5 & 0x3000000) != 0 )
    return 1;
  if ( v3 != 8 )
  {
LABEL_17:
    if ( v3 == 11 )
      return (__readmsr(0x20u) & 0x100000000000LL) != 0;
    return v0;
  }
  if ( (v9[0] & 0xF) != 6 )
  {
    if ( (v9[0] & 0xF) == 0xA )
    {
      v7 = __readmsr(0x119u);
      return v7 & 1;
    }
    goto LABEL_17;
  }
  v6 = ((unsigned int)v5 >> 19) & 3;
  if ( !v6 || v6 == 3 )
    return 1;
  return v0;
}
