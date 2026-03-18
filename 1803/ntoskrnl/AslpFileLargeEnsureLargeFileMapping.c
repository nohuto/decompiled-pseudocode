/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1407DEB48
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407DC024 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslpFileMappingGetFileKind @ 0x140644284 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1407DED88 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1407DF060 (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1407DF2D0 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rdx
  int i; // ecx
  int FileKind; // ebx
  _QWORD *v8; // rbx
  int ChecksumAttributes; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-18h]
  _QWORD *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v13 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; i < 33; ++i )
  {
    if ( i < 0 || i > 19 && i != 22 && i != 24 && (unsigned int)(i - 26) > 5 )
      *v5 |= 2u;
    v5 += 8;
  }
  FileKind = AslpFileLargeMapCreate(&v13, a2 + 8);
  if ( FileKind >= 0 )
  {
    v8 = v13;
    ChecksumAttributes = AslpFileLargeGetChecksumAttributes(a1, v13);
    if ( ChecksumAttributes < 0 )
    {
      v12 = ChecksumAttributes;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileLargeEnsureLargeFileMapping",
        248,
        (unsigned int)"AslpFileLargeGetChecksumAttributes failed to get checksum attributes [%x]",
        v12);
    }
    if ( v8 )
    {
      *(_QWORD *)(a2 + 16) = v8[1];
      *(_BYTE *)(a2 + 57) = 1;
      v10 = v8[5];
      v8[1] = 0LL;
      *(_QWORD *)(a2 + 48) = v10;
      v11 = v8[2];
      v8[5] = 0LL;
      *(_QWORD *)(a2 + 32) = v11;
      *(_QWORD *)(a2 + 40) = v8[3];
      *(_WORD *)(a2 + 58) = 1;
      *(_DWORD *)(a2 + 84) = 1;
      v8[2] = 0LL;
      v8[3] = 0LL;
      AslpFileLargeMapDelete(&v13);
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a2 + 8), (int *)(a2 + 64));
    }
    else
    {
      FileKind = -1073741584;
    }
  }
  AslpFileLargeMapDelete(&v13);
  return (unsigned int)FileKind;
}
