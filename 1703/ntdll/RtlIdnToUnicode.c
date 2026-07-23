/*
 * XREFs of RtlIdnToUnicode @ 0x18006A930
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIsNormalizedString @ 0x180002AB0 (RtlIsNormalizedString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180045280 @ 0x180045280 (sub_180045280.c)
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  wchar_t *v6; // r11
  __int16 v7; // di
  wchar_t v8; // si
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r8
  LONG v18; // ebx
  _BYTE *Heap; // rsi
  __int64 i; // rcx
  __int16 v21; // dx
  __int64 j; // rax
  BOOLEAN Normalized; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[15]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Src[512]; // [rsp+60h] [rbp-A0h] BYREF

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
    if ( (int)sub_180045280(SourceString, 0x203uLL, &v24[7]) < 0 )
      return -1073740010;
    SourceStringLength = *(_DWORD *)&v24[7] + 1;
  }
  *(_DWORD *)&v24[3] = 511;
  v8 = v6[SourceStringLength - 1];
  result = sub_18006AAE8(v6, (v7 & 4) != 0, (v7 & 2) != 0, (__int64)v24, (__int64)&v25);
  if ( result < 0 )
    return result;
  if ( v8 )
  {
    v14 = *(_DWORD *)&v24[3];
  }
  else
  {
    if ( (unsigned __int64)*(int *)&v24[3] >= 0x1FF )
      return -1073740010;
    v14 = *(_DWORD *)&v24[3] + 1;
    v15 = *(int *)&v24[3];
    ++*(_DWORD *)&v24[3];
    if ( v15 >= 511 )
      _report_rangecheckfailure(v11, v10, v12, v13);
    Src[v15] = 0;
  }
  if ( (v7 & 8) == 0 && !v24[0] )
  {
    v16 = v25;
    if ( (v7 & 4) != 0 && (RtlIsNormalizedString(1u, Src, (v25 - (__int64)Src) >> 1, &Normalized) < 0 || !Normalized) )
      return -1073740010;
    v17 = (v16 - (__int64)Src) >> 1;
    if ( v17 < v14 - (v8 == 0) )
    {
      v18 = v14 - (2 - (v8 != 0)) - v17;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
      if ( !Heap )
        return -1073741801;
      for ( i = 0LL; i < v18; ++i )
      {
        v21 = *(_WORD *)(v16 + 2 * i + 2);
        if ( (unsigned __int16)(v21 - 65) <= 0x19u )
        {
          *(_WORD *)(v16 + 2 * i + 2) = v21 + 32;
          Heap[i] = 1;
        }
      }
      if ( RtlIsNormalizedString(~(v7 << 8) & 0x100 | 0xD, (PCWSTR)(v16 + 2), v18, &Normalized) >= 0 && Normalized )
      {
        for ( j = 0LL; j < v18; ++j )
        {
          if ( Heap[j] == 1 )
            *(_WORD *)(v16 + 2 * j + 2) -= 32;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v14 = *(_DWORD *)&v24[3];
        goto LABEL_17;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return -1073740010;
    }
  }
LABEL_17:
  if ( DestinationString && *DestinationStringLength )
  {
    if ( v14 > *DestinationStringLength )
      return -1073741789;
    memmove(DestinationString, Src, 2LL * v14);
  }
  *DestinationStringLength = v14;
  return 0;
}
