/*
 * XREFs of RtlIdnToUnicode @ 0x180068D10
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIsNormalizedString @ 0x180001EB0 (RtlIsNormalizedString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  LONG v6; // r9d
  wchar_t *v7; // r11
  char v8; // di
  wchar_t v9; // si
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r8
  LONG v19; // ebx
  _BYTE *Heap; // rsi
  __int64 i; // rcx
  __int16 v22; // dx
  __int64 j; // rax
  BOOLEAN Normalized; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[15]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Src[512]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = SourceStringLength;
  v7 = (wchar_t *)SourceString;
  v8 = Flags;
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
    if ( (int)sub_180035D8C(SourceString, 0x203uLL, &v25[7]) < 0 )
      return -1073740010;
    v6 = *(_DWORD *)&v25[7] + 1;
  }
  *(_DWORD *)&v25[3] = 511;
  v9 = v7[v6 - 1];
  result = sub_180068ED0(v7, (v8 & 4) != 0, (v8 & 2) != 0, (__int64)v25, (__int64)&v26);
  if ( result < 0 )
    return result;
  if ( v9 )
  {
    v15 = *(_DWORD *)&v25[3];
  }
  else
  {
    if ( (unsigned __int64)*(int *)&v25[3] >= 0x1FF )
      return -1073740010;
    v15 = *(_DWORD *)&v25[3] + 1;
    v16 = *(int *)&v25[3];
    ++*(_DWORD *)&v25[3];
    if ( v16 >= 511 )
      _report_rangecheckfailure(v12, v11, v13, v14);
    Src[v16] = 0;
  }
  if ( (v8 & 8) != 0 || v25[0] )
    goto LABEL_14;
  v17 = v26;
  if ( (v8 & 4) != 0 && (RtlIsNormalizedString(1u, Src, (v26 - (__int64)Src) >> 1, &Normalized) < 0 || !Normalized) )
    return -1073740010;
  v18 = (v17 - (__int64)Src) >> 1;
  if ( v18 < v15 - (v9 == 0) )
  {
    v19 = v15 - (2 - (v9 != 0)) - v18;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
    if ( !Heap )
      return -1073741801;
    if ( v19 > 0 )
    {
      for ( i = 0LL; i < v19; ++i )
      {
        v22 = *(_WORD *)(v17 + 2 * i + 2);
        if ( (unsigned __int16)(v22 - 65) <= 0x19u )
        {
          *(_WORD *)(v17 + 2 * i + 2) = v22 + 32;
          Heap[i] = 1;
        }
      }
    }
    if ( RtlIsNormalizedString((((v8 & 1) == 0) << 8) + 13, (PCWSTR)(v17 + 2), v19, &Normalized) >= 0 && Normalized )
    {
      if ( v19 > 0 )
      {
        for ( j = 0LL; j < v19; ++j )
        {
          if ( Heap[j] == 1 )
            *(_WORD *)(v17 + 2 * j + 2) -= 32;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      v15 = *(_DWORD *)&v25[3];
      goto LABEL_14;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return -1073740010;
  }
LABEL_14:
  if ( DestinationString && *DestinationStringLength )
  {
    if ( v15 > *DestinationStringLength )
      return -1073741789;
    memmove(DestinationString, Src, 2LL * v15);
  }
  *DestinationStringLength = v15;
  return 0;
}
