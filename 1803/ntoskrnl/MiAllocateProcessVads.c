/*
 * XREFs of MiAllocateProcessVads @ 0x1404EA744
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140652748 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiAllocateVad @ 0x1404EA7EC (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x140749C5C (MiReturnProcessVads.c)
 */

_QWORD *__fastcall MiAllocateProcessVads(__int64 a1, __int64 a2)
{
  void *Vad; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  Vad = (void *)MiAllocateVad(2147352576LL, 2147356671LL, 1LL);
  if ( !Vad )
    return 0LL;
  if ( !qword_1403CB680 )
    goto LABEL_3;
  v6 = (_QWORD *)MiAllocateVad(qword_1403CB680, qword_1403CB680 + 4095, 1LL);
  if ( v6 )
  {
    *v6 = Vad;
    Vad = v6;
LABEL_3:
    if ( !a2 )
      return Vad;
    v7 = (_QWORD *)MiAllocateVad(*(_QWORD *)(a1 + 1152), a2 - 1, 0LL);
    if ( v7 )
    {
      *v7 = Vad;
      return v7;
    }
  }
  MiReturnProcessVads(Vad);
  return 0LL;
}
