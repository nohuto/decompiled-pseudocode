/*
 * XREFs of SmpInit @ 0x140009F54
 * Callers:
 *     wmain @ 0x1400014B0 (wmain.c)
 * Callees:
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 *     InitializeWow64OnBoot @ 0x14000A298 (InitializeWow64OnBoot.c)
 *     SmpInitializePendingRename @ 0x14000A398 (SmpInitializePendingRename.c)
 *     SmpCreateSecurityDescriptors @ 0x14000A610 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializeKnownSubSystems @ 0x14000B3A0 (SmpInitializeKnownSubSystems.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

NTSTATUS SmpInit()
{
  NTSTATUS result; // eax
  _BYTE *Heap; // rax
  _BYTE *v2; // rbx
  NTSTATUS v3; // edi
  void *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ecx
  ULONG i; // ebx
  NTSTATUS v8; // eax
  void *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int DataFromRegistry; // ebx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-98h] BYREF
  int v20; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v21; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v23[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v24; // [rsp+4B8h] [rbp+3B0h]
  __int64 v25; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v19[0]) = 1441812;
  v19[1] = L"\\SmApiPort";
  v20 = 4456514;
  v21 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result >= 0 )
  {
    ProcessInformation = 1;
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
        v2 = Heap;
        if ( Heap )
        {
          v3 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
          v4 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
          if ( v3 < 0 )
          {
            RtlFreeHeap(v4, 0, v2);
            return v3;
          }
          else
          {
            SmpManufacturingMode = *v2 & 1;
            RtlFreeHeap(v4, 0, v2);
            LOBYTE(v5) = 1;
            result = SmpCreateSecurityDescriptors(v5);
            if ( result >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
              ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 0;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              memset_0(v23, 0, 0x48uLL);
              v23[0] = 0x20000;
              v24 = 328LL;
              v25 = 1000000LL;
              result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v23);
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
                  v6 = SmpMaximumNodeCount;
                  for ( i = 0; i < v6; ++i )
                  {
                    if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
                    {
                      RtlSetBits(&SmpNodeBitmap, i, 1u);
                      v6 = SmpMaximumNodeCount;
                    }
                  }
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 64;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v8 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
                  v9 = EventHandle;
                  v10 = v8;
                  if ( v8 < 0 )
                    v9 = 0LL;
                  EventHandle = v9;
                  result = SmpInitializePendingRename();
                  if ( result >= 0 )
                  {
                    DataFromRegistry = SmpLoadDataFromRegistry(EventHandle, v11, v12, v13);
                    if ( v10 >= 0 )
                      NtClose(EventHandle);
                    if ( DataFromRegistry >= 0 )
                      return InitializeWow64OnBoot();
                    return DataFromRegistry;
                  }
                }
              }
            }
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
