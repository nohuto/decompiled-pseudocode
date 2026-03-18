/*
 * XREFs of RtlpArchContextFlagFromMachine @ 0x140426474
 * Callers:
 *     PspWow64SetupCpuArea @ 0x1404241B0 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140425EAC (RtlWow64GetCpuAreaInfo.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140426498 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64InitThread @ 0x1404264E0 (PspWow64InitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpArchContextFlagFromMachine(unsigned __int16 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  switch ( a1 )
  {
    case 0x14Cu:
      return 0x10000;
    case 0x1C4u:
      return 0x200000;
    case 0x8664u:
      return 0x100000;
    case 0xAA64u:
      return 0x400000;
  }
  return v1;
}
