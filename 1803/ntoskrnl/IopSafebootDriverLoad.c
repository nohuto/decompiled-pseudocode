/*
 * XREFs of IopSafebootDriverLoad @ 0x14071A6D0
 * Callers:
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x1405F6BA8 (IopOpenRegistryKey.c)
 */

bool __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source, _BYTE *a2)
{
  char v2; // di
  const WCHAR *v6; // rdx
  __int16 v7; // ax
  NTSTATUS v8; // ebx
  PVOID v9; // rcx
  ULONG v10; // [rsp+20h] [rbp-30h]
  ULONG v11; // [rsp+20h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( InitSafeBootMode == 1 )
  {
    v6 = L"MINIMAL";
    goto LABEL_10;
  }
  if ( InitSafeBootMode == 2 )
  {
    v6 = L"NETWORK";
LABEL_10:
    RtlInitUnicodeString(&DestinationString, v6);
    v7 = Source->Length + 8;
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + v7;
    Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + v7));
    if ( !Destination.Buffer )
      return 0;
    RtlCopyUnicodeString(&Destination, &DestinationString);
    if ( RtlAppendUnicodeToString(&Destination, L"\\") < 0 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      return 0;
    }
    if ( RtlAppendUnicodeStringToString(&Destination, Source) >= 0 )
    {
      LOBYTE(v10) = 0;
      if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, v10) >= 0 )
      {
        LOBYTE(v11) = 0;
        v8 = IopOpenRegistryKey(&KeyHandle, Handle, &Destination, 0xF003Fu, v11);
        ObCloseHandle(Handle, 0);
        if ( v8 >= 0 )
        {
          if ( a2 && IopGetRegistryValue(KeyHandle, L"SafeBootDrivers", 0, &P) >= 0 )
          {
            v9 = P;
            if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            {
              if ( *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                *a2 = 1;
            }
            ExFreePoolWithTag(v9, 0);
          }
          ObCloseHandle(KeyHandle, 0);
          v2 = 1;
        }
      }
    }
    ExFreePoolWithTag(Destination.Buffer, 0);
    return v2;
  }
  return InitSafeBootMode == 3;
}
