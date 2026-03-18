/*
 * XREFs of BiCreateEfiEntry @ 0x140736E78
 * Callers:
 *     BiBindEfiEntries @ 0x140736328 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x14073753C (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiAddBootEntry @ 0x140735E8C (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140736AF0 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x140737EC8 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140738988 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 */

__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rdi
  int v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  int v8; // eax
  int v9; // eax
  UNICODE_STRING EntryValue; // [rsp+68h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  Buffer = 0LL;
  EntryValue.Buffer = 0LL;
  v5 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &Handle);
  v6 = Handle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    SavedBootEntry = BiGetSavedBootEntry(Handle, &EntryValue.Buffer);
    if ( SavedBootEntry >= 0 )
    {
      Buffer = EntryValue.Buffer;
      if ( (*(_DWORD *)(a2 + 48) & 8) != 0
        || (SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(EntryValue.Buffer, v6), SavedBootEntry >= 0) )
      {
        SavedBootEntry = BiAddBootEntry((PUNICODE_STRING)Buffer, &EntryValue);
        if ( SavedBootEntry >= 0 )
        {
          *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
          v8 = *(_DWORD *)&EntryValue.Length;
          *(_DWORD *)(a2 + 48) |= 1u;
          *(_DWORD *)(a2 + 32) = v8;
          *(_QWORD *)(a2 + 40) = Buffer;
          SavedBootEntry = BiSetRegistryValue(
                             v6,
                             L"FirmwareVariable",
                             L"Description",
                             3u,
                             Buffer,
                             *((_DWORD *)Buffer + 1));
          if ( SavedBootEntry >= 0 )
            SavedBootEntry = BiUpdateEfiEntry(a1, a2);
        }
      }
      goto LABEL_14;
    }
LABEL_13:
    Buffer = EntryValue.Buffer;
    goto LABEL_14;
  }
  SavedBootEntry = BiCreateBootEntry(Handle, &EntryValue.Buffer);
  if ( SavedBootEntry < 0 )
    goto LABEL_13;
  Buffer = EntryValue.Buffer;
  SavedBootEntry = BiAddBootEntry((PUNICODE_STRING)EntryValue.Buffer, &EntryValue);
  if ( SavedBootEntry >= 0 )
  {
    *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
    v9 = *(_DWORD *)&EntryValue.Length;
    *(_DWORD *)(a2 + 48) |= 1u;
    *(_DWORD *)(a2 + 32) = v9;
    *(_QWORD *)(a2 + 40) = Buffer;
    SavedBootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, Buffer, *((_DWORD *)Buffer + 1));
    if ( SavedBootEntry >= 0 )
      *(_DWORD *)(a2 + 48) |= 2u;
  }
LABEL_14:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && Buffer )
    ExFreePoolWithTag(Buffer, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
