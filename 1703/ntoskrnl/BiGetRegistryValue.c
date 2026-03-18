/*
 * XREFs of BiGetRegistryValue @ 0x14058B2D0
 * Callers:
 *     BiWasFirmwareModified @ 0x140265E9C (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x14057B97C (BiUnloadHiveByHandle.c)
 *     BiGetObjectDescription @ 0x1405898C0 (BiGetObjectDescription.c)
 *     BiMarkTreatAsSystemStore @ 0x14058A118 (BiMarkTreatAsSystemStore.c)
 *     BiIsWinPEBoot @ 0x14058A2A0 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14058A854 (BiIsSystemStore.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407355F4 (BiIsPortableWorkspaceBoot.c)
 *     BiGetSavedBootEntry @ 0x140737EC8 (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013C160 (BiSanitizeHandle.c)
 *     BiZwQueryValueKey @ 0x14014CF0C (BiZwQueryValueKey.c)
 *     BiZwClose @ 0x14014CF3C (BiZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 */

__int64 __fastcall BiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  const WCHAR *v8; // rax
  unsigned int i; // r15d
  _DWORD *PoolWithTag; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  HANDLE v15; // rdi
  __int64 v16; // r8
  PVOID v17; // rax
  ULONG NumberOfBytes; // [rsp+34h] [rbp-64h] BYREF
  ULONG NumberOfBytes_4; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    Handle = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = BiSanitizeHandle(a1);
    a1 = v12;
    if ( a3 )
    {
      v14 = BiOpenKey(v12, a3, 131097LL, &Handle);
      v15 = Handle;
      if ( v14 < 0 )
        goto LABEL_10;
    }
    else
    {
      v15 = (HANDLE)v12;
    }
    v14 = BiZwQueryValueKey(v15, &DestinationString, v13, 0LL, 0, &NumberOfBytes);
    if ( v14 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_18;
      v14 = BiZwQueryValueKey(v15, &DestinationString, v16, PoolWithTag, NumberOfBytes, &NumberOfBytes_4);
      if ( v14 >= 0 )
      {
        if ( PoolWithTag[1] != a4 )
        {
          v14 = -1073741788;
          goto LABEL_10;
        }
        NumberOfBytes -= 12;
        v17 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
        *a5 = v17;
        if ( !v17 )
        {
LABEL_18:
          v14 = -1073741670;
          goto LABEL_10;
        }
        memmove(v17, PoolWithTag + 3, NumberOfBytes);
        *a6 = NumberOfBytes;
        v14 = 0;
      }
    }
LABEL_10:
    if ( v15 != (HANDLE)a1 && v15 )
      BiZwClose(v15);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v14 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v8 = a2;
  }
  return (unsigned int)v14;
}
