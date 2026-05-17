/*
 * XREFs of RtlResetStackOverflow @ 0x1800DDA78
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     EtwpWriteToPrivateBuffers @ 0x18001A218 (EtwpWriteToPrivateBuffers.c)
 *     RtlQueryWnfStateData @ 0x1800801A0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086DB0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     EtwpCheckForEnoughStackSpace @ 0x180109A48 (EtwpCheckForEnoughStackSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

char *RtlResetStackOverflow()
{
  char *result; // rax
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  char v3; // [rsp+48h] [rbp-31h] BYREF
  __int64 v4; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+88h] [rbp+Fh]

  result = (char *)ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v6 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v6 - 1LL);
    if ( v2 )
      v2 += v6;
    result = &v3;
    if ( v2 < 3 * v6 )
      v2 = 3 * v6;
    if ( ((unsigned __int64)&v3 & v1) - v2 >= v4 + (unsigned __int64)(17 * v6) )
    {
      result = (char *)ZwAllocateVirtualMemory();
      if ( (int)result >= 0 )
        return (char *)ZwProtectVirtualMemory();
    }
  }
  return result;
}
