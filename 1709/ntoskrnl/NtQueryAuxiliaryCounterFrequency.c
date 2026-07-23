/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407609D8
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x140203960 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  NTSTATUS result; // eax
  LONGLONG v3; // [rsp+38h] [rbp+10h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency();
  ProbeForWrite(AuxiliaryCounterFrequency, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency();
  if ( result >= 0 )
    AuxiliaryCounterFrequency->QuadPart = v3;
  return result;
}
