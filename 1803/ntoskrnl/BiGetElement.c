/*
 * XREFs of BiGetElement @ 0x1407E20DC
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1407E2D14 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x1407E3A20 (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407E5010 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1407E5BDC (BiUpdateEfiEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, _DWORD *a4)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS ElementDataWithFlags; // ebx
  BCD_FLAGS v10; // r8d
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(
                           BcdObjectHandle,
                           BcdElement,
                           (BCD_FLAGS)a3,
                           0LL,
                           (PULONG)&NumberOfBytes);
  if ( ElementDataWithFlags != -1073741789 )
  {
LABEL_6:
    if ( ElementDataWithFlags >= 0 )
      return (unsigned int)ElementDataWithFlags;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  ElementDataWithFlags = BcdGetElementDataWithFlags(
                           BcdObjectHandle,
                           BcdElement,
                           v10,
                           PoolWithTag,
                           (PULONG)&NumberOfBytes);
  if ( ElementDataWithFlags >= 0 )
  {
    *a4 = NumberOfBytes;
    *a3 = PoolWithTag;
    goto LABEL_6;
  }
LABEL_7:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)ElementDataWithFlags;
}
