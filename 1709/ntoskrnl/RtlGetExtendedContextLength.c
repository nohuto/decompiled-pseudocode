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

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  _DWORD *v4; // r11
  int v5; // ecx
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  result = RtlpValidateContextFlags(ContextFlags, v6);
  if ( result >= 0 )
  {
    RtlpGetLegacyContextLength(v3, &v7, &v8);
    v5 = v7 + 24;
    if ( (v6[0] & 2) != 0 )
      v5 = MEMORY[0xFFFFF780000003E8] - 448 + (~(v8 - 1) & (v8 + v7 + 23)) - v8;
    *v4 = v5 + v8 - 1;
    return 0;
  }
  return result;
}
