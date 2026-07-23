/*
 * XREFs of BiCreateEfiEntry @ 0x14077B3C8
 * Callers:
 *     BiBindEfiEntries @ 0x14077A784 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14077BB1C (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiAddBootEntry @ 0x14077A2D0 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x14077B040 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x14077C538 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x14077D100 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14077D278 (BiUpdateObjectReferenceInEfiEntry.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  wchar_t *Buffer; // rdi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int BootEntry; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax
  UNICODE_STRING EntryValue; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+78h] [rbp+48h] BYREF

  Buffer = 0LL;
  EntryValue.Buffer = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  BootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_15;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    BootEntry = BiCreateBootEntry(BcdObjectHandle, &EntryValue.Buffer);
    if ( BootEntry >= 0 )
    {
      Buffer = EntryValue.Buffer;
      BootEntry = BiAddBootEntry((PUNICODE_STRING)EntryValue.Buffer, &EntryValue);
      if ( BootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", *(unsigned int *)&EntryValue.Length);
        *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
        v9 = *(_DWORD *)&EntryValue.Length;
        a2[3].Data1 |= 0x21u;
        a2[2].Data1 = v9;
        *(_QWORD *)a2[2].Data4 = Buffer;
        BootEntry = BiSetRegistryValue(
                      (__int64)v6,
                      L"FirmwareVariable",
                      L"Description",
                      3u,
                      Buffer,
                      *((_DWORD *)Buffer + 1));
        if ( BootEntry >= 0 )
          a2[3].Data1 |= 2u;
      }
      goto LABEL_15;
    }
LABEL_14:
    Buffer = EntryValue.Buffer;
    goto LABEL_15;
  }
  BootEntry = BiGetSavedBootEntry(BcdObjectHandle, &EntryValue.Buffer);
  if ( BootEntry < 0 )
    goto LABEL_14;
  Buffer = EntryValue.Buffer;
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BootEntry = BiUpdateObjectReferenceInEfiEntry(EntryValue.Buffer, v6);
    if ( BootEntry < 0 )
      goto LABEL_15;
    a2[3].Data1 |= 0x20u;
  }
  BootEntry = BiAddBootEntry((PUNICODE_STRING)Buffer, &EntryValue);
  if ( BootEntry >= 0 )
  {
    BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", *(unsigned int *)&EntryValue.Length);
    *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
    v8 = *(_DWORD *)&EntryValue.Length;
    a2[3].Data1 |= 1u;
    a2[2].Data1 = v8;
    *(_QWORD *)a2[2].Data4 = Buffer;
    BootEntry = BiSetRegistryValue(
                  (__int64)v6,
                  L"FirmwareVariable",
                  L"Description",
                  3u,
                  Buffer,
                  *((_DWORD *)Buffer + 1));
    if ( BootEntry >= 0 )
      BootEntry = BiUpdateEfiEntry(a1, a2);
  }
LABEL_15:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (a2[3].Data1 & 1) == 0 && Buffer )
    ExFreePoolWithTag(Buffer, 0x4B444342u);
  return (unsigned int)BootEntry;
}
