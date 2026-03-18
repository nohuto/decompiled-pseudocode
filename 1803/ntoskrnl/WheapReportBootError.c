/*
 * XREFs of WheapReportBootError @ 0x1402BE3CC
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1401868E8 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     WheapAllocErrorRecord @ 0x1402BE944 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x1402BED10 (WheapGetErrorSource.c)
 *     WheapWorkQueueAddItem @ 0x1402BF9B4 (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rbp
  __int64 ErrorSource; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(unsigned int *)(a1 + 24));
  v4 = ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  v8 = 0;
  v6 = WheapAllocErrorRecord(ErrorSource, &v8);
  v7 = v6;
  if ( !v6 )
    return 0;
  (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))&unk_1403E9350 + 6 * *(int *)(v4 + 40)))(
    v4 + 89,
    a1,
    v6 + 40,
    (unsigned int)(v8 - 40),
    *(_QWORD *)(v4 + 56));
  WheapWorkQueueAddItem(WheaInfo[2], v7);
  return 1;
}
