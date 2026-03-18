/*
 * XREFs of RtlpWriteExtendedContext @ 0x140563B0C
 * Callers:
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PspGetContextThreadInternal @ 0x1405B83A0 (PspGetContextThreadInternal.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1401317D4 (RtlpGetLegacyContextLength.c)
 *     RtlpValidateContextFlags @ 0x140131930 (RtlpValidateContextFlags.c)
 *     RtlpCopyExtendedContext @ 0x140131EE0 (RtlpCopyExtendedContext.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall RtlpWriteExtendedContext(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp-18h] BYREF
  ULONG Alignment; // [rsp+50h] [rbp+8h] BYREF

  Alignment = 0;
  result = RtlpValidateContextFlags(a4, &v9);
  if ( (int)result >= 0 )
  {
    RtlpGetLegacyContextLength(a4, 0LL, &Alignment);
    if ( (v9 & 1) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 8)), *(unsigned int *)(a3 + 12), Alignment);
    if ( (v9 & 2) != 0 )
      ProbeForWrite((volatile void *)(a2 + *(int *)(a3 + 16)), *(unsigned int *)(a3 + 20), 0x40u);
    return RtlpCopyExtendedContext(1, a2, a3, a4, a5, 0LL);
  }
  return result;
}
