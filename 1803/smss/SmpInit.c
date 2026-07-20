/*
 * XREFs of SmpInit @ 0x14000A1E0
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 * Callees:
 *     SmpLoadDataFromRegistry @ 0x140007064 (SmpLoadDataFromRegistry.c)
 *     InitializeWow64OnBoot @ 0x140008154 (InitializeWow64OnBoot.c)
 *     SmpInitializePendingRename @ 0x14000A564 (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000A7E0 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializeKnownSubSystems @ 0x14000B570 (SmpInitializeKnownSubSystems.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000CA4D (memset_0.c)
 */

NTSTATUS SmpInit()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // eax
  int v2; // ecx
  _BYTE *Heap; // rax
  _BYTE *v4; // rbx
  NTSTATUS v5; // edi
  void *v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ecx
  ULONG i; // ebx
  NTSTATUS v10; // eax
  void *v11; // rcx
  int v12; // edi
  int DataFromRegistry; // ebx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v20; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v22[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v23; // [rsp+4B8h] [rbp+3B0h]
  __int64 v24; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v18[0]) = 1441812;
  v18[1] = L"\\SmApiPort";
  v19 = 4456514;
  v20 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v1 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
    v2 = SmpSystemWriteConstraintInfo;
    ProcessInformation = 1;
    if ( v1 < 0 )
      v2 = 0;
    SmpSystemWriteConstraintInfo = v2;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
    result = SmpInitializeKnownSubSystems();
    if ( result >= 0 )
    {
      SmpManufacturingMode = 0;
      result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
      if ( result >= 0 )
      {
        return -1073741823;
      }
      else if ( result == -1073741820 )
      {
        Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
        v4 = Heap;
        if ( Heap )
        {
          v5 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
          v6 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
          if ( v5 >= 0 )
          {
            SmpManufacturingMode = *v4 & 1;
            RtlFreeHeap(v6, 0, v4);
            LOBYTE(v7) = 1;
            result = SmpCreateSecurityDescriptors(v7);
            if ( result >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
              ObjectAttributes.Attributes = 0;
              ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              memset_0(v22, 0, 0x48uLL);
              v22[0] = 0x20000;
              v23 = 328LL;
              v24 = 1000000LL;
              result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v22);
              if ( result >= 0 )
              {
                SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
                SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
                result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
                if ( result >= 0 )
                {
                  SmpMaximumNodeCount = SystemInformation[0] + 1;
                  RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
                  RtlClearAllBits(&SmpNodeBitmap);
                  v8 = SmpMaximumNodeCount;
                  for ( i = 0; i < v8; ++i )
                  {
                    if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
                    {
                      RtlSetBits(&SmpNodeBitmap, i, 1u);
                      v8 = SmpMaximumNodeCount;
                    }
                  }
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 64;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v10 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
                  v11 = EventHandle;
                  v12 = v10;
                  if ( v10 < 0 )
                    v11 = 0LL;
                  EventHandle = v11;
                  result = SmpInitializePendingRename();
                  if ( result >= 0 )
                  {
                    DataFromRegistry = SmpLoadDataFromRegistry(EventHandle);
                    if ( v12 >= 0 )
                      NtClose(EventHandle);
                    if ( DataFromRegistry >= 0 )
                      return InitializeWow64OnBoot();
                    return DataFromRegistry;
                  }
                }
              }
            }
          }
          else
          {
            RtlFreeHeap(v6, 0, v4);
            return v5;
          }
        }
        else
        {
          return -1073741670;
        }
      }
    }
  }
  return result;
}
