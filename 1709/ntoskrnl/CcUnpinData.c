/*
 * XREFs of CcUnpinData @ 0x14049CF60
 * Callers:
 *     CcUnpinData @ 0x14049CF60 (CcUnpinData.c)
 *     CcPinMappedData @ 0x1404A6710 (CcPinMappedData.c)
 *     CcPinRead @ 0x14056CB10 (CcPinRead.c)
 *     CcPreparePinWrite @ 0x140570280 (CcPreparePinWrite.c)
 *     CcUnpinDataForThread @ 0x140687650 (CcUnpinDataForThread.c)
 *     HvViewMapFlush @ 0x1406A0080 (HvViewMapFlush.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1406A09A4 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1406A0BAC (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CcUnpinData @ 0x14049CF60 (CcUnpinData.c)
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
    CcUnpinFileDataEx((char *)Bcb, v2, 0);
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
