/*
 * XREFs of PssNtValidateDescriptor @ 0x180001DE0
 * Callers:
 *     PssNtFreeSnapshot @ 0x180001CE0 (PssNtFreeSnapshot.c)
 *     PssNtDuplicateSnapshot @ 0x180106790 (PssNtDuplicateSnapshot.c)
 *     PssNtQuerySnapshot @ 0x180106A50 (PssNtQuerySnapshot.c)
 *     PssNtWalkSnapshot @ 0x180106CC0 (PssNtWalkSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // ebx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-C8h] BYREF

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 1146311504 )
      return 0LL;
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)a1;
    ExceptionRecord.ExceptionInformation[1] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = v4;
    ExceptionRecord.ExceptionInformation[3] = 1146311504LL;
    RtlRaiseException(&ExceptionRecord);
  }
  return 3221225480LL;
}
