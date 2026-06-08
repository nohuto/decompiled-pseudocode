/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0003730
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00017B0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C0016560;
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070) != 0 && dword_1C0016560 && byte_1C0016565 )
  {
    __outbyte(dword_1C0016560, byte_1C0016565);
    v1 = dword_1C0016560;
  }
  v2 = *(_DWORD *)(a1 + 264);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C0016564;
      if ( byte_1C0016564 )
        __outbyte(v1, byte_1C0016564);
    }
  }
  return v2;
}
