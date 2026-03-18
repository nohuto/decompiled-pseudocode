/*
 * XREFs of CMFFlushHitsFile @ 0x1405EE9D0
 * Callers:
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14017D940 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x14017D9C0 (ZwWriteFile.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x14017E1C0 (ZwCreateEvent.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     CMFGetFileSizeEx @ 0x1405EEC6C (CMFGetFileSizeEx.c)
 */

__int64 __fastcall CMFFlushHitsFile(void *Src, unsigned __int64 Length)
{
  void *Buffer; // rsi
  NTSTATUS v5; // edi
  ULONG v6; // edi
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-2B0h] BYREF
  _DWORD v11[2]; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-298h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-290h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-288h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-258h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-248h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  EventHandle = 0LL;
  Buffer = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (CMFFlagsCache & 8) != 0
    || (v12 = Src,
        v14 = Length,
        result = MmFlushVirtualMemory(
                   KeGetCurrentThread()->ApcState.Process,
                   (unsigned __int64 *)&v12,
                   &v14,
                   &IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v5 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", CMFCacheIndex);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
      if ( (v5 & 0xC0000000) == 0xC0000000 )
      {
        FileHandle = 0LL;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( (v5 & 0xC0000000) != 0xC0000000 )
        {
          v11[0] = 0;
          v11[1] = 0;
          v5 = CMFGetFileSizeEx(FileHandle, v11);
          if ( (v5 & 0xC0000000) != 0xC0000000 )
          {
            v6 = v11[0];
            if ( Length < v11[0] )
              v6 = Length;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x636D6650u);
            Buffer = PoolWithTag;
            v12 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, v6);
              ByteOffset.QuadPart = 0LL;
              v5 = ZwWriteFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, Buffer, v6, &ByteOffset, 0LL);
              if ( v5 == 259 )
                v5 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            }
            else
            {
              v5 = -1073741801;
            }
          }
        }
      }
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v5;
  }
  return result;
}
