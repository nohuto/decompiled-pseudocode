/*
 * XREFs of RtlGetExtendedContextLength @ 0x140131758
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x1401321E0 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140249930 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404D0960 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x140563548 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 *     PspSetContextState @ 0x140780B40 (PspSetContextState.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1401317D4 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
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
