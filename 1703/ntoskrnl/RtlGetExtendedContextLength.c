/*
 * XREFs of RtlGetExtendedContextLength @ 0x140008FAC
 * Callers:
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140008A84 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140135720 (KiRaiseException.c)
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x1406E4F20 (PspSetContextState.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x140009028 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x1400FCB40 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  int v4; // ecx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  result = RtlpValidateContextFlags(a1, v5);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(v2, &v6, &v7);
    v4 = v6 + 24;
    if ( (v5[0] & 2) != 0 )
      v4 = MEMORY[0xFFFFF780000003E8] - 448 + (~(v7 - 1) & (v7 + v6 + 23)) - v7;
    *v3 = v4 + v7 - 1;
    return 0LL;
  }
  return result;
}
