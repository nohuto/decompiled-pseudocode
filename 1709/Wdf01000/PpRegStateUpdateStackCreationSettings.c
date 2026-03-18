/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C00DB9A0
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00DA200 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A3F74 (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C00DB51C (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00DBB88 (CmRegUtilCreateWstrKey.c)
 */

int __fastcall PpRegStateUpdateStackCreationSettings(
        const _GUID *DeviceClassGuid,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  int result; // eax
  unsigned int v4; // r8d
  __int64 v5; // r9
  unsigned int *Handle; // rbx
  int inited; // ebx
  ULONG v8; // r9d
  void *v9; // r10
  void *classPropertyKey; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  void *tempDescriptor; // [rsp+80h] [rbp+18h] BYREF
  void *classKey; // [rsp+88h] [rbp+20h] BYREF

  result = PiRegStateOpenClassKey(DeviceClassGuid, (unsigned int)StackCreationSettings, 0, 0LL, &classKey);
  if ( result >= 0 )
  {
    Handle = PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc) )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &tempDescriptor) < 0 )
      {
        HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc) = 2;
      }
      else
      {
        HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc) = 1;
        ExFreePoolWithTag(tempDescriptor, 0);
      }
    }
    if ( HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc) != 1 )
      Handle = 0LL;
    tempDescriptor = Handle;
    inited = CmRegUtilCreateWstrKey(classKey, (wchar_t *)L"Properties", v4, v5, Handle, 0LL, &classPropertyKey);
    ZwClose(classKey);
    if ( inited >= 0 )
    {
      RtlLengthSecurityDescriptor(StackCreationSettings->SecurityDescriptor);
      inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
      if ( inited >= 0 )
        inited = ZwSetValueKey(classPropertyKey, &DestinationString, 0, 3u, v9, v8);
      ZwClose(classPropertyKey);
    }
    return inited;
  }
  return result;
}
