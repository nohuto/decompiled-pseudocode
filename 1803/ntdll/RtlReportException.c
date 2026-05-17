/*
 * XREFs of RtlReportException @ 0x1800D6920
 * Callers:
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C8340 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CFF48 @ 0x1800CFF48 (sub_1800CFF48.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 *     sub_180108740 @ 0x180108740 (sub_180108740.c)
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 *     sub_1800D7B3C @ 0x1800D7B3C (sub_1800D7B3C.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  unsigned int v8; // ebx
  int v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))sub_1800D7B3C)();
  v7 = 0;
  if ( byte_18015C298 )
    return 0LL;
  if ( (int)ZwQueryInformationProcess() >= 0 && v9 == 1 )
  {
    v7 = 1;
    v10 = -300000000LL;
  }
  v8 = sub_1800D6EB8(a1, a2, a3, (unsigned __int64)&v10 & -(__int64)(v7 != 0), 0LL);
  sub_1800D7B3C(a1, a2, a3);
  return v8;
}
