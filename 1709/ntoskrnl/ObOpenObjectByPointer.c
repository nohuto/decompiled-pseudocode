/*
 * XREFs of ObOpenObjectByPointer @ 0x1404C5930
 * Callers:
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     NtGetNextThread @ 0x14046DCC8 (NtGetNextThread.c)
 *     NtOpenPrivateNamespace @ 0x140489880 (NtOpenPrivateNamespace.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x1404C5CB0 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1404E34C4 (CmConvertHandleToKernelHandle.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     ExGetNextProcess @ 0x1404FD7E4 (ExGetNextProcess.c)
 *     PiCMDuplicateRegistryHandle @ 0x140574580 (PiCMDuplicateRegistryHandle.c)
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 *     EtwpOpenConsumer @ 0x140595FAC (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x1405B2684 (ObpSetDeviceMap.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     ObInitServerSilo @ 0x1405E6350 (ObInitServerSilo.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1405EFA90 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x1406A9950 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x1406AA164 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x1406ABF00 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1406EF8E0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x14070E4C8 (TtmiOpenDefaultTerminal.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 *     SmRegistrationInfoFill @ 0x140738E58 (SmRegistrationInfoFill.c)
 *     SmKmFileInfoDuplicate @ 0x14073A2A4 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x140749EBC (EtwpCapturePreviousRegistryData.c)
 *     sub_14076883C @ 0x14076883C (sub_14076883C.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140088FC0 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  POBJECT_TYPE v9; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v16[20]; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v17[28]; // [rsp+120h] [rbp-138h] BYREF

  v9 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v9 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v9->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
        v13 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v16,
                v17,
                DesiredAccess,
                &v9->TypeInfo.GenericMapping);
        if ( v13 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v13;
        }
        PassedAccessState = (PACCESS_STATE)v16;
      }
      v14 = ObpCreateHandle(
              1,
              (char *)Object,
              0,
              (__int64)PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              (unsigned __int64 *)Handle);
      if ( v14 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v16 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v14;
    }
  }
  return result;
}
