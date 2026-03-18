/*
 * XREFs of RtlIdnToUnicode @ 0x1406EBDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     __report_rangecheckfailure @ 0x1401DD43C (__report_rangecheckfailure.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     punycode_decode @ 0x1406EC640 (punycode_decode.c)
 *     RtlIsNormalizedString @ 0x1406EEA10 (RtlIsNormalizedString.c)
 */

NTSTATUS __stdcall RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  PWSTR v5; // r14
  wchar_t *v6; // r11
  __int16 v7; // di
  NTSTATUS result; // eax
  wchar_t v9; // si
  LONG v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rdx
  LONG v13; // r13d
  _BYTE *PoolWithTag; // rax
  _BYTE *v15; // rsi
  __int64 i; // rcx
  __int16 v17; // dx
  __int64 j; // rax
  BOOLEAN Normalized[8]; // [rsp+40h] [rbp-C0h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  PWSTR v22; // [rsp+58h] [rbp-A8h]
  WCHAR SourceStringa[512]; // [rsp+60h] [rbp-A0h] BYREF

  v22 = DestinationString;
  v5 = DestinationString;
  v6 = (wchar_t *)SourceString;
  v7 = Flags;
  if ( !SourceString
    || !DestinationStringLength
    || *DestinationStringLength < 0
    || SourceStringLength < -1
    || *DestinationStringLength > 0 && !DestinationString
    || (Flags & 0xFFFFFFF0) != 0 )
  {
    return -1073741811;
  }
  if ( SourceStringLength == -1 )
  {
    if ( RtlStringCchLengthW(SourceString, 0x203uLL, &pcchLength) < 0 )
      return -1073740010;
    SourceStringLength = pcchLength + 1;
  }
  LODWORD(pcchLength) = 511;
  v9 = v6[SourceStringLength - 1];
  result = punycode_decode(v6, (v7 & 4) != 0, (v7 & 2) != 0, (__int64)Normalized, (__int64)&v21);
  if ( result >= 0 )
  {
    if ( v9 )
    {
      v10 = pcchLength;
    }
    else
    {
      if ( (unsigned __int64)(int)pcchLength >= 0x1FF )
        return -1073740010;
      v10 = pcchLength + 1;
      if ( (unsigned __int64)(2LL * (int)pcchLength) >= 0x3FE )
        _report_rangecheckfailure();
      SourceStringa[(int)pcchLength] = 0;
    }
    if ( (v7 & 8) == 0 && !Normalized[0] )
    {
      v11 = v21;
      if ( (v7 & 4) != 0
        && (RtlIsNormalizedString(1u, SourceStringa, (v21 - (__int64)SourceStringa) >> 1, Normalized) < 0
         || !Normalized[0]) )
      {
        return -1073740010;
      }
      v12 = (v11 - (__int64)SourceStringa) >> 1;
      if ( v12 < v10 - (v9 == 0) )
      {
        v13 = v10 - (2 - (v9 != 0)) - v12;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x456E6449u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          return -1073741801;
        memset(PoolWithTag, 0, v13);
        for ( i = 0LL; i < v13; ++i )
        {
          v17 = *(_WORD *)(v11 + 2 * i + 2);
          if ( (unsigned __int16)(v17 - 65) <= 0x19u )
          {
            *(_WORD *)(v11 + 2 * i + 2) = v17 + 32;
            v15[i] = 1;
          }
        }
        if ( RtlIsNormalizedString(~(v7 << 8) & 0x100 | 0xD, (PCWSTR)(v11 + 2), v13, Normalized) < 0 || !Normalized[0] )
        {
          ExFreePoolWithTag(v15, 0);
          return -1073740010;
        }
        for ( j = 0LL; j < v13; ++j )
        {
          if ( v15[j] == 1 )
            *(_WORD *)(v11 + 2 * j + 2) -= 32;
        }
        ExFreePoolWithTag(v15, 0);
        v5 = v22;
      }
    }
    if ( v5 && *DestinationStringLength )
    {
      if ( v10 > *DestinationStringLength )
        return -1073741789;
      memmove(v5, SourceStringa, 2LL * v10);
    }
    *DestinationStringLength = v10;
    return 0;
  }
  return result;
}
