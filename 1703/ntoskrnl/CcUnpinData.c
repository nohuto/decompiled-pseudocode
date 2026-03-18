/*
 * XREFs of CcUnpinData @ 0x14054B080
 * Callers:
 *     CcPinRead @ 0x140436EB0 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140440510 (CcPreparePinWrite.c)
 *     CcPinMappedData @ 0x140513FF0 (CcPinMappedData.c)
 *     CcUnpinData @ 0x14054B080 (CcUnpinData.c)
 *     CcUnpinDataForThread @ 0x14065E6B0 (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140676464 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14067666C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x14054B080 (CcUnpinData.c)
 */

void __stdcall CcUnpinData(PVOID Bcb)
{
  PVOID v1; // rbx
  char v2; // dl
  void *v3; // rax
  char *i; // rdi

  v1 = Bcb;
  if ( ((unsigned __int8)Bcb & 1) != 0 )
  {
    v2 = 1;
    Bcb = (PVOID)((unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL);
LABEL_3:
    CcUnpinFileDataEx((__int64)Bcb, v2, 0);
    return;
  }
  if ( *(_WORD *)Bcb != 762 )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v3 = (void *)*((_QWORD *)Bcb + 2);
  for ( i = (char *)Bcb + 16; v3; i += 8 )
  {
    CcUnpinData(v3);
    v3 = (void *)*((_QWORD *)i + 1);
  }
  ExFreePoolWithTag(v1, 0);
}
