/*
 * XREFs of RtlCompareMemory @ 0x1800A4640
 * Callers:
 *     RtlpFindGuidInSection @ 0x1800352CC (RtlpFindGuidInSection.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlIsCapabilitySid @ 0x180057520 (RtlIsCapabilitySid.c)
 *     EtwpTrackDebugIdForSession @ 0x18006761C (EtwpTrackDebugIdForSession.c)
 *     RtlGetAppContainerSidType @ 0x18007D2B0 (RtlGetAppContainerSidType.c)
 *     RtlIsPackageSid @ 0x1800866F0 (RtlIsPackageSid.c)
 *     CompareNamesCaseSensitive @ 0x1800E4590 (CompareNamesCaseSensitive.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F2B78 (RtlpCheckBusyBlockTail.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F7D6C (RtlpHeapTrkTrackStack.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FA8E8 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x1801021EC (RtlpRegisterStackTrace.c)
 *     RtlpValidateHeapHeaders @ 0x180105204 (RtlpValidateHeapHeaders.c)
 *     EtwpTrackBinaryForSession @ 0x18010A50C (EtwpTrackBinaryForSession.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
