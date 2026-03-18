/*
 * XREFs of RtlGetExtendedContextLength @ 0x1400DAFAC
 * Callers:
 *     KiRaiseException @ 0x14000D500 (KiRaiseException.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1400DAA74 (KiContinuePreviousModeUser.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x14071D310 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14006A610 (RtlpValidateContextFlags.c)
 *     RtlpGetLegacyContextLength @ 0x1400DB028 (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(int a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  int v4; // ecx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
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
