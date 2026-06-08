/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0004D90
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0004D50 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C001BB84 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = dword_1C0011BA0;
  if ( (*(_DWORD *)(a1 + 264) & 0x7F070) != 0 && dword_1C0011BA0 && byte_1C0011BA5 )
  {
    __outbyte(dword_1C0011BA0, byte_1C0011BA5);
    v1 = dword_1C0011BA0;
  }
  v2 = *(_DWORD *)(a1 + 264);
  if ( (v2 & 0x70000000) != 0 )
  {
    if ( v1 )
    {
      LOBYTE(v2) = byte_1C0011BA4;
      if ( byte_1C0011BA4 )
        __outbyte(v1, byte_1C0011BA4);
    }
  }
  return v2;
}
