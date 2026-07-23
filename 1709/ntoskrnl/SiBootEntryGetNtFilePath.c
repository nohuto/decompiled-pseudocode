/*
 * XREFs of SiBootEntryGetNtFilePath @ 0x14077D748
 * Callers:
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 * Callees:
 *     ZwTranslateFilePath @ 0x140181000 (ZwTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SiBootEntryGetNtFilePath(__int64 a1, _FILE_PATH **a2)
{
  __int64 v2; // rax
  _FILE_PATH *v3; // rdi
  NTSTATUS v5; // ebx
  _FILE_PATH *v6; // rsi
  _FILE_PATH *PoolWithTag; // rax
  _FILE_PATH *v8; // rcx
  ULONG OutputFilePathLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 20);
  v3 = 0LL;
  if ( (_DWORD)v2 )
  {
    OutputFilePathLength = 0;
    v6 = (_FILE_PATH *)(a1 + v2);
    v5 = ZwTranslateFilePath((PFILE_PATH)(a1 + v2), 3u, 0LL, (ULONG)&OutputFilePathLength);
    if ( v5 == -1073741789 )
    {
      PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, OutputFilePathLength, 0x4B505953u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v5 = ZwTranslateFilePath(v6, 3u, PoolWithTag, (ULONG)&OutputFilePathLength);
    }
    if ( v5 >= 0 )
      *a2 = v3;
    v8 = 0LL;
    if ( v5 < 0 )
      v8 = v3;
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v5;
}
