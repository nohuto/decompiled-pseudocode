/*
 * XREFs of RtlNtStatusToDosError @ 0x180008400
 * Callers:
 *     EtwLogTraceEvent @ 0x1800019E0 (EtwLogTraceEvent.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 *     EtwSendNotification @ 0x1800081C0 (EtwSendNotification.c)
 *     EtwTraceMessageVa @ 0x1800082B0 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180008370 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     EtwEventActivityIdControl @ 0x18006B380 (EtwEventActivityIdControl.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     sub_1800728E0 @ 0x1800728E0 (sub_1800728E0.c)
 *     EtwWriteUMSecurityEvent @ 0x18007D3C0 (EtwWriteUMSecurityEvent.c)
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 *     EtwSetMark @ 0x180089610 (EtwSetMark.c)
 *     EtwRegisterSecurityProvider @ 0x18008AC60 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801004A0 @ 0x1801004A0 (sub_1801004A0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_180101048 @ 0x180101048 (sub_180101048.c)
 *     EtwEventWriteString @ 0x180106680 (EtwEventWriteString.c)
 *     sub_1801068A8 @ 0x1801068A8 (sub_1801068A8.c)
 *     EtwTraceEventInstance @ 0x180106A00 (EtwTraceEventInstance.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 *     EtwReplyNotification @ 0x180107660 (EtwReplyNotification.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  bool v9; // zf
  int v10; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
  {
    return Status;
  }
  else if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
  {
    if ( (Status & 0xF0000000) == 0xD0000000 )
      v1 = Status & 0xCFFFFFFF;
    v3 = 0;
    v4 = 286;
    do
    {
      v5 = (v4 + v3) >> 1;
      v6 = dword_180122A70[2 * v5];
      v7 = v1 - v6;
      if ( v1 < v6 )
      {
        v4 = v5 - 1;
      }
      else
      {
        if ( v7 < (unsigned __int8)byte_180122A74[8 * v5] )
        {
          v9 = byte_180122A75[8 * v5] == 1;
          v10 = (unsigned __int16)word_180122A76[4 * v5];
          if ( v9 )
            return (unsigned __int16)word_180120E00[v7 + v10];
          else
            return (unsigned __int16)word_180120E00[2 * v7 + v10] | ((unsigned __int16)word_180120E00[2 * v7 + 1 + v10] << 16);
        }
        v3 = v5 + 1;
      }
    }
    while ( v3 <= v4 );
    if ( (v1 & 0xFFFF0000) == 0xC0010000 )
      return (unsigned __int16)v1;
    DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
    DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
    DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
    return 317;
  }
  else
  {
    return (unsigned __int16)v1;
  }
}
