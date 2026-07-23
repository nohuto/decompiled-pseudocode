/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x140720B7C
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+48h] [rbp+10h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return off_14033B640[0]();
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = ((__int64 (__fastcall *)(LONGLONG *))off_14033B640[0])(&v3);
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
