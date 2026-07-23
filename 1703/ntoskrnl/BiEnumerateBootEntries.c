/*
 * XREFs of BiEnumerateBootEntries @ 0x14073747C
 * Callers:
 *     BiBuildIdentifierList @ 0x14073655C (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x14017F9E0 (ZwEnumerateBootEntries.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, _DWORD *a2)
{
  PVOID PoolWithTag; // rbx
  NTSTATUS v5; // edi
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v8);
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
        PoolWithTag = 0LL;
      }
      if ( (_DWORD)NumberOfBytes )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
        if ( !PoolWithTag )
          break;
      }
      v5 = ZwEnumerateBootEntries(PoolWithTag, (PULONG)&NumberOfBytes);
      if ( v5 != -1073741789 )
        goto LABEL_9;
    }
    v5 = -1073741670;
LABEL_9:
    if ( v5 < 0 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    }
    else
    {
      *a2 = NumberOfBytes;
      *a1 = PoolWithTag;
    }
    BiReleasePrivilege(&v8);
  }
  return (unsigned int)v5;
}
