/*
 * XREFs of SiGetBiosSystemDisk @ 0x1407396C8
 * Callers:
 *     SiGetSystemDisk @ 0x1405986E0 (SiGetSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x140180960 (ZwQuerySymbolicLinkObject.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140739930 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     SiOpenArcNameObject @ 0x140739A54 (SiOpenArcNameObject.c)
 */

__int64 __fastcall SiGetBiosSystemDisk(wchar_t **a1)
{
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG ReturnedLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+30h]

  LinkHandle = 0LL;
  PoolWithTag = 0LL;
  if ( !(unsigned __int8)SiIsWinPeHardDiskZeroUfdBoot()
    || (v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v3 == -1073740718) )
  {
    v3 = SiOpenArcNameObject(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  }
  if ( v3 >= 0 )
  {
    ReturnedLength = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v4 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, ReturnedLength + 2LL, 0x4B505953u);
      if ( PoolWithTag )
      {
        DestinationString.MaximumLength = ReturnedLength;
        DestinationString.Buffer = PoolWithTag;
        v3 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v3 >= 0 )
        {
          PoolWithTag[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = PoolWithTag;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v3 < 0 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v3;
}
