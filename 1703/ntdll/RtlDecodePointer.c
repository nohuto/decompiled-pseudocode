/*
 * XREFs of RtlDecodePointer @ 0x1800508D0
 * Callers:
 *     RtlUserThreadStart @ 0x180050C20 (RtlUserThreadStart.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E7490 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall RtlDecodePointer(__int64 a1)
{
  int v2; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = ZwQueryInformationProcess(-1LL, 36LL, &v4, 4LL, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return __ROR8__(a1, 64 - (v4 & 0x3F)) ^ v4;
}
