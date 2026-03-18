/*
 * XREFs of IoPageRead @ 0x140131300
 * Callers:
 *     <none>
 * Callees:
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 */

NTSTATUS __stdcall IoPageRead(
        PFILE_OBJECT FileObject,
        PMDL MemoryDescriptorList,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // al
  char v7; // al

  v5 = 0;
  if ( ((unsigned __int8)FileObject & 3) != 0 )
  {
    v7 = (char)FileObject;
    FileObject = (PFILE_OBJECT)((unsigned __int64)FileObject & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = 2 - ((v7 & 1) != 0LL);
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 1) != 0 )
  {
    v5 |= 4u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFEuLL);
  }
  if ( ((unsigned __int8)MemoryDescriptorList & 2) != 0 )
  {
    v5 |= 8u;
    MemoryDescriptorList = (PMDL)((unsigned __int64)MemoryDescriptorList & 0xFFFFFFFFFFFFFFFDuLL);
  }
  return IoPageReadEx(FileObject, MemoryDescriptorList, StartingOffset, Event, IoStatusBlock, v5, 0LL);
}
