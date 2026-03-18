/*
 * XREFs of PspGetSetContextSpecialApc @ 0x140188DD0
 * Callers:
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 * Callees:
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 */

void __fastcall PspGetSetContextSpecialApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5[9]; // [rsp+C0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 120);
  if ( (unsigned __int8)PspGetSetContextInternal(a1, *a4, v5) )
    _fxrstor((void *)(v4 + 256));
  if ( v5[0] )
    KeSignalGate(v5[0], 1u);
}
