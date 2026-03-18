/*
 * XREFs of CmpTouchFile @ 0x1406950E4
 * Callers:
 *     HvViewMapStart @ 0x1406A02F4 (HvViewMapStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwReadFile @ 0x14017D980 (ZwReadFile.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     CmpCreateEvent @ 0x1404E0BA8 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpTouchFile(HANDLE FileHandle)
{
  NTSTATUS Status; // ebx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-18h] BYREF
  char Buffer; // [rsp+98h] [rbp+28h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Event; // [rsp+A8h] [rbp+38h] BYREF

  Event = 0LL;
  Object = 0LL;
  ByteOffset.QuadPart = 0LL;
  Status = CmpCreateEvent(SynchronizationEvent, &Event, &Object);
  if ( Status >= 0 )
  {
    Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, &Buffer, 1u, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
      Status = 0;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Event )
    ZwClose(Event);
  return (unsigned int)Status;
}
