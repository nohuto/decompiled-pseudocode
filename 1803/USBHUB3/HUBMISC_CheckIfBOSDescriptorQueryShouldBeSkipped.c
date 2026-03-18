/*
 * XREFs of HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped @ 0x1C0026538
 * Callers:
 *     HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped @ 0x1C001C560 (HUBDSM_CheckingIfAlternateBOSDescriptorQueryShouldBeSkipped.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0011564 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall HUBMISC_CheckIfBOSDescriptorQueryShouldBeSkipped(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (*(_DWORD *)(a1 + 1644) & 0x8000) != 0 || *(_WORD *)(a1 + 1990) <= 0x200u )
  {
    v1 = 4089;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x59u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      a1);
  }
  else
  {
    return 4061;
  }
  return v1;
}
