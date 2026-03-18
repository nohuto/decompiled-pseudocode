/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407609D8
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x140203960 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryAuxiliaryCounterFrequency(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return KeQueryAuxiliaryCounterFrequency();
  ProbeForWrite(a1, 8uLL, 4u);
  result = KeQueryAuxiliaryCounterFrequency();
  if ( (int)result >= 0 )
    *a1 = v3;
  return result;
}
