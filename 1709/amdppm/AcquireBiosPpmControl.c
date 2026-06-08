/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0004DB0
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0004D70 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C001EB90 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 264) & 0x7F070) != 0 && dword_1C0011BF0 && byte_1C0011BF5 )
    __outbyte(dword_1C0011BF0, byte_1C0011BF5);
  v1 = *(_DWORD *)(a1 + 264);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0011BF0 )
    {
      LOBYTE(v1) = byte_1C0011BF4;
      if ( byte_1C0011BF4 )
        __outbyte(dword_1C0011BF0, byte_1C0011BF4);
    }
  }
  return v1;
}
