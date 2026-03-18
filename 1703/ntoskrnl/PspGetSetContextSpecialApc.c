/*
 * XREFs of PspGetSetContextSpecialApc @ 0x1401892D0
 * Callers:
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 */

__int64 __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  result = PspGetSetContextInternal(a1, *a4, v6);
  if ( (_BYTE)result )
    _fxrstor((void *)(v4 + 256));
  if ( v6[0] )
    return KeSignalGate(v6[0], 1);
  return result;
}
