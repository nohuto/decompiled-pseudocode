/*
 * XREFs of AslpFileGetChecksumAttributes @ 0x1407DC6B4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407DC024 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x1401618FC (RtlFileMapFree.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1407D9770 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksum @ 0x1407DC5BC (AslpFileGetChecksum.c)
 *     AslpFileGetCrcChecksum @ 0x1407DCBCC (AslpFileGetCrcChecksum.c)
 */

__int64 __fastcall AslpFileGetChecksumAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  int v6; // eax
  int Checksum; // eax
  __int64 v8; // rax
  int CrcChecksum; // eax
  __int64 v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-50h]
  int v13; // [rsp+20h] [rbp-50h]
  int v14; // [rsp+20h] [rbp-50h]
  int v15; // [rsp+20h] [rbp-50h]
  _QWORD v16[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+28h] BYREF

  memset(v16, 0, 0x38uLL);
  if ( *(_DWORD *)(a2 + 84) )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetChecksumAttributes",
      3585,
      (unsigned int)"AslpFileGetChecksumAttributes called with a partial view which is not supported");
    *(_DWORD *)(a1 + 88) |= 2u;
    v4 = -1073741823;
    *(_DWORD *)(a1 + 856) |= 2u;
  }
  else
  {
    v4 = AslFileMappingEnsureMappedAs(a2);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741554 )
    {
      v12 = v4;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetChecksumAttributes",
        3599,
        (unsigned int)"AslFileMappingEnsureMappedAs failed [%x]",
        v12);
      goto LABEL_16;
    }
    v5 = (_QWORD *)(a2 + 8);
    if ( v4 == -1073741554 )
    {
      memset(v16, 0, 0x38uLL);
      v16[0] = *v5;
      LOBYTE(v16[6]) = 0;
      v6 = RtlFileMapMapView((__int64)v16, 0);
      v4 = v6;
      if ( v6 < 0 )
      {
        v13 = v6;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGetChecksumAttributes",
          3617,
          (unsigned int)"RtlFileMapMapView failed [%x]",
          v13);
        goto LABEL_16;
      }
      v5 = v16;
    }
    v17 = 0;
    Checksum = AslpFileGetChecksum(&v17, (__int64)v5);
    v4 = Checksum;
    if ( Checksum >= 0 )
    {
      v8 = v17;
      *(_DWORD *)(a1 + 88) |= 1u;
      v17 = 0;
      *(_QWORD *)(a1 + 72) = 4LL;
      *(_QWORD *)(a1 + 80) = v8;
      *(_DWORD *)(a1 + 64) = 2;
      CrcChecksum = AslpFileGetCrcChecksum(&v17, v5);
      v4 = CrcChecksum;
      if ( CrcChecksum >= 0 )
      {
        v10 = v17;
        *(_DWORD *)(a1 + 856) |= 1u;
        *(_QWORD *)(a1 + 848) = v10;
        v4 = 0;
        *(_DWORD *)(a1 + 832) = 2;
        *(_QWORD *)(a1 + 840) = 4LL;
      }
      else
      {
        v15 = CrcChecksum;
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslpFileGetChecksumAttributes",
          3650,
          (unsigned int)"AslpFileGetCrcChecksum failed [%x]",
          v15);
      }
    }
    else
    {
      v14 = Checksum;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetChecksumAttributes",
        3633,
        (unsigned int)"AslpFileGetChecksum failed [%x]",
        v14);
    }
  }
LABEL_16:
  RtlFileMapFree(v16);
  return v4;
}
