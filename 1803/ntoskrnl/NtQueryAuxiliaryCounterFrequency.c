/*
 * XREFs of NtQueryAuxiliaryCounterFrequency @ 0x1407C7CD4
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAuxiliaryCounterFrequency @ 0x140240D40 (KeQueryAuxiliaryCounterFrequency.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
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
