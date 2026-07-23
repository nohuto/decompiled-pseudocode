/*
 * XREFs of sub_18008A588 @ 0x18008A588
 * Callers:
 *     sub_180011380 @ 0x180011380 (sub_180011380.c)
 *     sub_180012130 @ 0x180012130 (sub_180012130.c)
 *     sub_1800132E0 @ 0x1800132E0 (sub_1800132E0.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_18008A588(__int64 a1)
{
  unsigned int v1; // ebx
  NTSTATUS v2; // edi
  __int64 ThreadInformation; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  ThreadInformation = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
