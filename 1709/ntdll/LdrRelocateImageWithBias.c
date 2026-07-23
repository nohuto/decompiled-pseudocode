/*
 * XREFs of LdrRelocateImageWithBias @ 0x180086228
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x180086318 (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v6; // ebx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbp
  NTSTATUS v11; // eax
  _DWORD *v12; // rcx
  unsigned int v13; // esi
  int v14; // r8d
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = (__int64)LoaderName;
  v6 = 0;
  v17 = 0;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, (PIMAGE_NT_HEADERS *)&v16) < 0 )
    return -1073741701;
  v8 = v16;
  v9 = *(unsigned __int16 *)(v16 + 24);
  if ( v9 == 267 )
  {
    v10 = *(unsigned int *)(v16 + 52);
  }
  else
  {
    if ( v9 != 523 )
      return -1073741701;
    v10 = *(_QWORD *)(v16 + 48);
  }
  v11 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)NewBase, 1, 5u, &v17, &v16);
  v12 = (_DWORD *)v16;
  if ( v11 < 0 )
    v12 = 0LL;
  if ( !v12 )
    return (*(_BYTE *)(v8 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v13 = v17;
  if ( !v17 )
    return (*(_BYTE *)(v8 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v14 = v12[1];
    v13 -= v14;
    v12 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                      *(unsigned __int16 *)(v8 + 4),
                      (int)NewBase + *v12,
                      (unsigned int)(v14 - 8) >> 1,
                      (int)v12 + 8,
                      (__int64)NewBase - v10);
    if ( !v12 )
      break;
    if ( !v13 )
      return v6;
  }
  return -1073741701;
}
