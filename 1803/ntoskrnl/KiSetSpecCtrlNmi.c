/*
 * XREFs of KiSetSpecCtrlNmi @ 0x1401AE750
 * Callers:
 *     KiNmiInterruptStart @ 0x1401B5AC0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x1401B8F80 (KiMcheckAbort.c)
 * Callees:
 *     sub_1401AE8BE @ 0x1401AE8BE (sub_1401AE8BE.c)
 */

__int64 __fastcall KiSetSpecCtrlNmi()
{
  __int64 v0; // rbp
  unsigned __int64 v1; // rax
  __int64 result; // rax

  if ( !KeGetPcr()->Prcb.BpbKernelSpecCtrl
    || (v1 = __readmsr(0x48u),
        *(_BYTE *)(v0 - 86) = v1,
        LOBYTE(v1) = KeGetPcr()->Prcb.BpbKernelSpecCtrl,
        __writemsr(0x48u, (unsigned __int8)v1),
        (v1 & 1) == 0) )
  {
    if ( (KeGetPcr()->Prcb.BpbFeatures & 2) != 0 )
    {
      result = 1LL;
      __writemsr(0x49u, 1uLL);
      return result;
    }
LABEL_7:
    JUMPOUT(0x1401AE8CBLL);
  }
  if ( (KeGetPcr()->Prcb.BpbFeatures & 4) != 0 )
    goto LABEL_7;
  sub_1401AE8BE(72LL, 0LL);
  return sub_1401AE7B0();
}
