/*
 * XREFs of LdrRelocateImageWithBias @ 0x180086228
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x180086318 (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImageWithBias(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // esi
  int v11; // r8d
  unsigned __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  v3 = 0;
  v14 = 0;
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v13) < 0 )
    return (unsigned int)-1073741701;
  v5 = v13;
  v6 = *(unsigned __int16 *)(v13 + 24);
  if ( v6 == 267 )
  {
    v7 = *(unsigned int *)(v13 + 52);
  }
  else
  {
    if ( v6 != 523 )
      return (unsigned int)-1073741701;
    v7 = *(_QWORD *)(v13 + 48);
  }
  v8 = RtlpImageDirectoryEntryToDataEx(a1, 1, 5u, &v14, &v13);
  v9 = (_DWORD *)v13;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v10 = v14;
  if ( !v14 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v11 = v9[1];
    v10 -= v11;
    v9 = (_DWORD *)LdrProcessRelocationBlockLongLong(
                     *(unsigned __int16 *)(v5 + 4),
                     (int)a1 + *v9,
                     (unsigned int)(v11 - 8) >> 1,
                     (int)v9 + 8,
                     a1 - v7);
    if ( !v9 )
      break;
    if ( !v10 )
      return v3;
  }
  return (unsigned int)-1073741701;
}
