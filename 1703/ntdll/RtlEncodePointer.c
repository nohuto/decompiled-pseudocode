/*
 * XREFs of RtlEncodePointer @ 0x180077840
 * Callers:
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180077820 (RtlSetUnhandledExceptionFilter.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  int v2; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = ZwQueryInformationProcess(-1LL, 36LL, &v4, 4LL, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return __ROR8__(a1 ^ v4, v4 & 0x3F);
}
