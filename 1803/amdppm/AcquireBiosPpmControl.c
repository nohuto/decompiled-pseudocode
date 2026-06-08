/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0008190
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0008150 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0026E8C (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( (v1 & 0x7F070) != 0 && dword_1C0011C00 && byte_1C0011C05 )
  {
    __outbyte(dword_1C0011C00, byte_1C0011C05);
    v1 = *(_QWORD *)(a1 + 264);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0011C00 )
    {
      LOBYTE(v1) = byte_1C0011C04;
      if ( byte_1C0011C04 )
        __outbyte(dword_1C0011C00, byte_1C0011C04);
    }
  }
  return v1;
}
