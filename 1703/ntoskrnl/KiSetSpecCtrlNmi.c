/*
 * XREFs of KiSetSpecCtrlNmi @ 0x140185060
 * Callers:
 *     KiNmiInterruptStart @ 0x14018C080 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14018F540 (KiMcheckAbort.c)
 * Callees:
 *     sub_1401851CE @ 0x1401851CE (sub_1401851CE.c)
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
    JUMPOUT(0x1401851DBLL);
  }
  if ( (KeGetPcr()->Prcb.BpbFeatures & 4) != 0 )
    goto LABEL_7;
  sub_1401851CE(72LL, 0LL);
  return sub_1401850C0();
}
