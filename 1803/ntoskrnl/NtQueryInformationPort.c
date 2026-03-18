/*
 * XREFs of NtQueryInformationPort @ 0x1407470E8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryInformationPort(
        HANDLE PortHandle,
        PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG PortInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v7; // rcx
  int v8; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(PortInformation, PortInformationLength, 4u);
    if ( ReturnLength )
    {
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v7 = (__int64)ReturnLength;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
  }
  if ( !PortHandle )
    return -1073741821;
  v8 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    if ( ReturnLength )
      *ReturnLength = 0;
    ObfDereferenceObject(Object);
  }
  return v8;
}
