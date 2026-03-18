/*
 * XREFs of IopSafebootDriverLoad @ 0x1406B5A20
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

bool __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source)
{
  const WCHAR *v3; // rdx
  char v4; // di
  __int16 v5; // ax
  NTSTATUS v6; // ebx
  ULONG v7; // [rsp+20h] [rbp-30h]
  ULONG v8; // [rsp+20h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF
  HANDLE v12; // [rsp+70h] [rbp+20h] BYREF

  if ( InitSafeBootMode == 1 )
  {
    v3 = L"MINIMAL";
    goto LABEL_8;
  }
  if ( InitSafeBootMode == 2 )
  {
    v3 = L"NETWORK";
LABEL_8:
    RtlInitUnicodeString(&DestinationString, v3);
    v4 = 0;
    v5 = Source->Length + 8;
    Destination.Length = 0;
    Destination.MaximumLength = DestinationString.Length + v5;
    Destination.Buffer = (wchar_t *)IopVerifierExAllocatePool(
                                      PagedPool,
                                      (unsigned __int16)(DestinationString.Length + v5));
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
      LOBYTE(v7) = 0;
      if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, v7) >= 0 )
      {
        LOBYTE(v8) = 0;
        v6 = IopOpenRegistryKey(&v12, Handle, &Destination, 0xF003Fu, v8);
        ObCloseHandle(Handle, 0);
        if ( v6 >= 0 )
        {
          ObCloseHandle(v12, 0);
          v4 = 1;
        }
      }
    }
    ExFreePoolWithTag(Destination.Buffer, 0);
    return v4;
  }
  return InitSafeBootMode == 3;
}
