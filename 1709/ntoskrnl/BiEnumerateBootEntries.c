/*
 * XREFs of BiEnumerateBootEntries @ 0x14077BA34
 * Callers:
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14017F380 (ZwEnumerateBootEntries.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x1405B16E8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, _DWORD *a2)
{
  NTSTATUS v4; // edi
  PVOID PoolWithTag; // rax
  void *v6; // rbx
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v4 >= 0 )
  {
    LODWORD(NumberOfBytes) = 0x2000;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x4B444342u);
    v6 = PoolWithTag;
    LODWORD(NumberOfBytes) = PoolWithTag != 0LL ? NumberOfBytes : 0;
    while ( 1 )
    {
      v4 = ZwEnumerateBootEntries(PoolWithTag, (PULONG)&NumberOfBytes);
      if ( v4 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        break;
      }
    }
    if ( v4 < 0 )
    {
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    else
    {
      *a2 = NumberOfBytes;
      *a1 = v6;
    }
    BiReleasePrivilege(&v9);
  }
  return (unsigned int)v4;
}
