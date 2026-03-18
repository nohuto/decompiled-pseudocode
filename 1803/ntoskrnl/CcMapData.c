/*
 * XREFs of CcMapData @ 0x1405B6DB0
 * Callers:
 *     <none>
 * Callees:
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14011E210 (CcMapAndRead.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  ULONG v8; // r9d
  unsigned int v9; // eax
  void *VirtualAddress; // rax
  __int64 *v11; // rdi
  BOOLEAN result; // al
  _QWORD v13[3]; // [rsp+50h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v8 = Flags & 1;
  if ( v8 )
    v9 = 24080;
  else
    v9 = 24076;
  __incgsdword(v9);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  if ( v8 )
  {
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)FileObject->SectionObjectPointer->SharedCacheMap,
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
    result = CcPinFileData((__int64)FileObject, FileOffset, Length, 1, 0, Flags, (ULONG_PTR *)&v14, Buffer, v13);
    if ( !result )
    {
      __incgsdword(0x5E4Cu);
      return result;
    }
  }
  if ( (Flags & 0x10) == 0 )
    CcMapAndRead(Length, 0, 1, *v11);
  __addgsdword(0x5E50u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  *Bcb = (char *)v14 + 1;
  return 1;
}
