/*
 * XREFs of LdrpGetImageSize @ 0x180029E30
 * Callers:
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180049188 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  int VirtualMemory; // ebx
  unsigned __int64 v5; // rbp
  __int64 FileSizeFromLoadAsDataTable; // rdi
  _BYTE v8[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  VirtualMemory = 0;
  v10 = 0LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  FileSizeFromLoadAsDataTable = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v10);
  if ( !v10 )
    goto LABEL_11;
  if ( (a1 & 1) == 0 )
  {
    if ( *(_WORD *)(v10 + 24) == 267 || *(_WORD *)(v10 + 24) == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v10 + 80);
      goto LABEL_6;
    }
LABEL_11:
    VirtualMemory = -1073741701;
    goto LABEL_6;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v5, 3LL, v8, 32LL, 0LL);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      FileSizeFromLoadAsDataTable = v9;
  }
LABEL_6:
  *a2 = FileSizeFromLoadAsDataTable;
  return (unsigned int)VirtualMemory;
}
