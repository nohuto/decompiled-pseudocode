/*
 * XREFs of ObOpenObjectByPointer @ 0x14050ED20
 * Callers:
 *     NtGetNextThread @ 0x14041F564 (NtGetNextThread.c)
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     PiCMDuplicateRegistryHandle @ 0x14043E3D8 (PiCMDuplicateRegistryHandle.c)
 *     EtwpOpenConsumer @ 0x1404521B4 (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x140458C1C (ObpSetDeviceMap.c)
 *     NtOpenPrivateNamespace @ 0x140469798 (NtOpenPrivateNamespace.c)
 *     ExGetNextProcess @ 0x140499578 (ExGetNextProcess.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1404D54E8 (CmConvertHandleToKernelHandle.c)
 *     PsOpenThread @ 0x1404F33F0 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     WmipIoControl @ 0x140554B70 (WmipIoControl.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     ObInitServerSilo @ 0x1405CE6D4 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1405D9E94 (SmRegistrationInfoFill.c)
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14067C648 (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x14067E814 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x14067EFEC (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140680D30 (DbgkUserReportWorkRoutine.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 *     ObOpenObjectByPointerWithTag @ 0x1406C0DC0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1406D8140 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x140701FA8 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x14070E270 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1400948B0 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
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
      v14 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
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
