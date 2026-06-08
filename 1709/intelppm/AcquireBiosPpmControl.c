/*
 * XREFs of AcquireBiosPpmControl @ 0x1C000355C
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0001680 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 264) & 0x7F070) != 0 && dword_1C0019DC0 && byte_1C0019DC5 )
    __outbyte(dword_1C0019DC0, byte_1C0019DC5);
  v1 = *(_DWORD *)(a1 + 264);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0019DC0 )
    {
      LOBYTE(v1) = byte_1C0019DC4;
      if ( byte_1C0019DC4 )
        __outbyte(dword_1C0019DC0, byte_1C0019DC4);
    }
  }
  return v1;
}
