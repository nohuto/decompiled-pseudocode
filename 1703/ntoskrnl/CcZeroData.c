/*
 * XREFs of CcZeroData @ 0x14044A710
 * Callers:
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     CcZeroDataOnDisk @ 0x14002FEC0 (CcZeroDataOnDisk.c)
 *     CcFlushCache @ 0x140034710 (CcFlushCache.c)
 *     MmGetAvailablePages @ 0x140085174 (MmGetAvailablePages.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rdi
  BOOLEAN v5; // si
  ULONG Flags; // eax
  char v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned __int64 AvailablePages; // rax
  unsigned __int16 v13; // cx
  int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  LONGLONG v18; // rax
  unsigned int v19; // ebx
  ULONG v20; // ebx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp+50h] BYREF
  LONGLONG *v23; // [rsp+90h] [rbp+58h] BYREF
  BOOLEAN v24; // [rsp+98h] [rbp+60h]

  v24 = Wait;
  v23 = (LONGLONG *)EndOffset;
  QuadPart = StartOffset->QuadPart;
  v5 = 0;
  Flags = FileObject->Flags;
  v22 = StartOffset->QuadPart;
  if ( (Flags & 0x10) != 0 || (v9 = 0, !FileObject->PrivateCacheMap) )
    v9 = 1;
  v10 = EndOffset->QuadPart - QuadPart;
  if ( !v9 && v10 <= 0x200000 && ((unsigned __int64)MmGetAvailablePages(0) >= 0x800 || v10 <= 0x2000) || Wait )
  {
    if ( IoGetRelatedDeviceObject(FileObject)->SectorSize )
      v11 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v11 = 0;
    if ( v9 )
    {
      if ( (v11 & (unsigned int)v22) != 0 )
      {
        v22 = (~v11 | 0xFFFFFFFF00000000uLL) & (v11 + QuadPart);
        v20 = (~v11 & (v11 + QuadPart)) - StartOffset->LowPart;
        if ( !CcZeroDataInCache((__int64)FileObject, (__int64 *)StartOffset, v22 - StartOffset->LowPart, v24) )
          return v5;
        CcFlushCache(FileObject->SectionObjectPointer, StartOffset, v20, &IoStatus);
        if ( IoStatus.Status < 0 )
          RtlRaiseStatus(IoStatus.Status);
        QuadPart = v22;
      }
      goto LABEL_15;
    }
    AvailablePages = MmGetAvailablePages(0);
    v14 = v22;
    if ( AvailablePages < 0x800 && v10 > 0x2000 && ((unsigned int)v22 & v11) != 0 )
    {
      v19 = v22 + v11;
    }
    else
    {
      v15 = MmGetAvailablePages(v13);
      if ( v15 < v16 && v10 > 0x2000 )
      {
        LODWORD(v10) = 0;
LABEL_14:
        QuadPart += (unsigned int)v10;
        v22 = QuadPart;
LABEL_15:
        if ( QuadPart < *v23 )
        {
          v18 = *v23 + v11;
          v23 = (LONGLONG *)((~v11 | 0xFFFFFFFF00000000uLL) & v18);
          CcZeroDataOnDisk((__int64)FileObject, (__int64 *)&v22, &v23);
        }
        return 1;
      }
      if ( v10 <= 0x200000 )
      {
LABEL_12:
        if ( (_DWORD)v10 && !CcZeroDataInCache((__int64)FileObject, (__int64 *)&v22, v10, v24) )
          return v5;
        goto LABEL_14;
      }
      v19 = v11 + v14 + 0x200000;
    }
    LODWORD(v10) = (~v11 & v19) - v14;
    goto LABEL_12;
  }
  return v5;
}
