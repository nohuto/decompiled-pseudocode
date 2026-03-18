/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x1407DEE7C
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x1407DED88 (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x1407D92F4 (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _BYTE *v7; // rcx
  __int64 v8; // rsi
  _BYTE *v10; // rbx
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // [rsp+20h] [rbp-28h]

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  v5 = a2[6];
  if ( !v5 )
    return 3221225485LL;
  v6 = a2[7];
  if ( v6 < 0x1000 )
    return 3221225485LL;
  v7 = (_BYTE *)a2[2];
  if ( !v7 || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  v8 = v4 - a2[8] - 4096;
  if ( v4 - a2[8] <= v6 )
  {
    v10 = (_BYTE *)(v5 + v8);
    v11 = AslComputeCrc32(0, v7, 0x1000u);
    *a1 = AslComputeCrc32(v11, v10, v12);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 886, (unsigned int)"FileSize      : %I64u", v4);
    AslLogCallPrintf(
      0LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      887,
      (unsigned int)"CrcFileStart  : %I64u",
      *(_QWORD *)(*a2 + 16LL) - 4096LL);
    AslLogCallPrintf(
      0LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      888,
      (unsigned int)"ViewFileOffset: %I64u",
      a2[8]);
    LODWORD(v13) = *((_DWORD *)a2 + 14);
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 889, (unsigned int)"ViewFileSize  : %u", v13);
    AslLogCallPrintf(0LL, (unsigned int)"AslpFileLargeGetCrcChecksum", 890, (unsigned int)"CrcViewOffset : %I64u", v8);
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileLargeGetCrcChecksum",
      894,
      (unsigned int)"Alignment error in the end of file view for CRC checksum");
    return 3221226016LL;
  }
}
