/*
 * XREFs of RtlNtStatusToDosError @ 0x18001AD60
 * Callers:
 *     EtwSendNotification @ 0x1800192A0 (EtwSendNotification.c)
 *     EtwTraceMessageVa @ 0x180019640 (EtwTraceMessageVa.c)
 *     EtwLogTraceEvent @ 0x180019A30 (EtwLogTraceEvent.c)
 *     EtwpEventWriteFull @ 0x180019F70 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18001ACD0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 *     EtwpRegisterProvider @ 0x18003652C (EtwpRegisterProvider.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     EtwpStopUmLogger @ 0x180062764 (EtwpStopUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpStartUmLogger @ 0x1800634C8 (EtwpStartUmLogger.c)
 *     EtwpProviderArrivalCallback @ 0x180067534 (EtwpProviderArrivalCallback.c)
 *     EtwEventActivityIdControl @ 0x18006E6E0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800755AC (EtwpSetProviderTraits.c)
 *     EtwpTrackProviderBinary @ 0x180075754 (EtwpTrackProviderBinary.c)
 *     RtlGetUserInfoHeap @ 0x180077630 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077A10 (RtlSetUserValueHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007DC30 (EtwWriteUMSecurityEvent.c)
 *     EtwEventWriteNoRegistration @ 0x180087990 (EtwEventWriteNoRegistration.c)
 *     EtwRegisterSecurityProvider @ 0x18008CE50 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 *     EtwSetMark @ 0x1800906A0 (EtwSetMark.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF5E0 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180103EFC (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180104A64 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x1801093C0 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x1801095E8 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x180109740 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x1801098DC (EtwpBufferingModeFlush.c)
 *     EtwpUpdateUmLogger @ 0x180109CFC (EtwpUpdateUmLogger.c)
 *     EtwReplyNotification @ 0x180109EF0 (EtwReplyNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180109F34 (EtwpReceiveReplyDataBlock.c)
 *     EtwpGenerateFileName @ 0x18010A398 (EtwpGenerateFileName.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 *     ResCReleaseInitMutex @ 0x18010ED1C (ResCReleaseInitMutex.c)
 *     ResCultureNameToLCID @ 0x18010EE14 (ResCultureNameToLCID.c)
 *     _ResCFlushMappedView @ 0x18010F194 (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x18010F38C (_ResCloseHandle.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResCreateFileMapping @ 0x18010F62C (_ResCreateFileMapping.c)
 *     _ResCreateMutex @ 0x18010F750 (_ResCreateMutex.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 *     _ResGetFileSizeEx @ 0x18011039C (_ResGetFileSizeEx.c)
 *     _ResMapViewOfFile @ 0x180110408 (_ResMapViewOfFile.c)
 *     _ResOpenFileMapping @ 0x1801104C4 (_ResOpenFileMapping.c)
 *     _ResReadFile @ 0x18011056C (_ResReadFile.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 *     _ResWaitForSingleObject @ 0x18011068C (_ResWaitForSingleObject.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
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
  bool v10; // zf
  int v11; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
    return Status;
  if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
    return (unsigned __int16)v1;
  if ( (Status & 0xF0000000) == 0xD0000000 )
    v1 = Status & 0xCFFFFFFF;
  v3 = 0;
  v4 = 284;
  do
  {
    v5 = (v4 + v3) >> 1;
    v6 = RtlpRunTable[2 * v5];
    v7 = v1 - v6;
    if ( v1 < v6 )
    {
      v4 = v5 - 1;
    }
    else
    {
      if ( v7 < (unsigned __int8)byte_180125C14[8 * v5] )
      {
        v10 = byte_180125C15[8 * v5] == 1;
        v11 = (unsigned __int16)word_180125C16[4 * v5];
        if ( v10 )
          return (unsigned __int16)RtlpStatusTable[v7 + v11];
        else
          return (unsigned __int16)RtlpStatusTable[2 * v7 + v11] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v11] << 16);
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
