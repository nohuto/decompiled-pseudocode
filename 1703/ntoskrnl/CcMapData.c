/*
 * XREFs of CcMapData @ 0x140514420
 * Callers:
 *     HvpViewMapViewOfPrimaryFile @ 0x140676330 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140676464 (HvpViewRemapViewOfPrimaryFile.c)
 * Callees:
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14009E170 (CcMapAndRead.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // bl
  PVOID SharedCacheMap; // rcx
  void *VirtualAddress; // rax
  __int64 *v11; // rdi
  BOOLEAN result; // al
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = Flags;
  if ( (Flags & 1) != 0 )
    __incgsdword(0x5E90u);
  else
    __incgsdword(0x5E8Cu);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( (Flags & 1) != 0 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)SharedCacheMap,
                               FileOffset->QuadPart,
                               &v14,
                               &v15,
                               (Flags >> 6) & 1,
                               0);
    v11 = (__int64 *)Buffer;
    *Buffer = VirtualAddress;
  }
  else
  {
    v11 = (__int64 *)Buffer;
    result = CcPinFileData((__int64)FileObject, FileOffset, Length, 1u, 0, Flags, (ULONG_PTR *)&v14, Buffer, v13);
    if ( !result )
    {
      __incgsdword(0x5ECCu);
      return result;
    }
  }
  if ( (v6 & 0x10) == 0 )
    CcMapAndRead(Length, 0, 1, *v11);
  __addgsdword(0x5ED0u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  *Bcb = (PVOID)(v14 + 1);
  return 1;
}
