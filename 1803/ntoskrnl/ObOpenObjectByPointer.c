/*
 * XREFs of ObOpenObjectByPointer @ 0x14059A7F0
 * Callers:
 *     CmConvertHandleToKernelHandle @ 0x14049EB74 (CmConvertHandleToKernelHandle.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     PspCreateObjectHandle @ 0x1404B84AC (PspCreateObjectHandle.c)
 *     NtOpenThreadTokenEx @ 0x1404C0990 (NtOpenThreadTokenEx.c)
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PiCMDuplicateRegistryHandle @ 0x14050CC68 (PiCMDuplicateRegistryHandle.c)
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     ExGetNextProcess @ 0x140538C34 (ExGetNextProcess.c)
 *     NtOpenPrivateNamespace @ 0x14053FF0C (NtOpenPrivateNamespace.c)
 *     ObpSetDeviceMap @ 0x14057D9B8 (ObpSetDeviceMap.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     NtGetNextThread @ 0x1405C2B40 (NtGetNextThread.c)
 *     EtwpOpenConsumer @ 0x1405E4694 (EtwpOpenConsumer.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     ObInitServerSilo @ 0x140620A04 (ObInitServerSilo.c)
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 *     SmRegistrationInfoFill @ 0x140651090 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140652F54 (MmManagePartitionGetMemoryEvents.c)
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x14070E0B8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x14070E8C4 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x140758D60 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x140771C84 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x14079D2A8 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1407AC374 (EtwpCapturePreviousRegistryData.c)
 *     sub_1407D0524 @ 0x1407D0524 (sub_1407D0524.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1400F0E30 (ObReferenceObjectByPointerWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
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
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1F8h] BYREF
  int v16[40]; // [rsp+80h] [rbp-1D8h] BYREF
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
        v14 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v16,
                v17,
                DesiredAccess,
                &v9->TypeInfo.GenericMapping);
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v16;
      }
      v13 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
      if ( v13 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v16 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v13;
    }
  }
  return result;
}
