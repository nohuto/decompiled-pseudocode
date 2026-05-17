/*
 * XREFs of RtlReportException @ 0x1800DD400
 * Callers:
 *     sub_180010590 @ 0x180010590 (sub_180010590.c)
 *     sub_18006FD08 @ 0x18006FD08 (sub_18006FD08.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 *     sub_1800D76B0 @ 0x1800D76B0 (sub_1800D76B0.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 *     sub_180105930 @ 0x180105930 (sub_180105930.c)
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 *     sub_1800DE274 @ 0x1800DE274 (sub_1800DE274.c)
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
  ((void (*)(void))sub_1800DE274)();
  v7 = 0;
  if ( byte_18015B26C )
    return 0LL;
  if ( (int)ZwQueryInformationProcess() >= 0 && v9 == 1 )
  {
    v7 = 1;
    v10 = -300000000LL;
  }
  v8 = sub_1800DD9C0(a1, a2, a3, (unsigned __int64)&v10 & -(__int64)(v7 != 0), 0LL);
  sub_1800DE274(a1, a2, a3);
  return v8;
}
