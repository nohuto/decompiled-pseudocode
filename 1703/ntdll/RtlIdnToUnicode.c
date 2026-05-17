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

__int64 __fastcall RtlIdnToUnicode(int a1, wchar_t *a2, int a3, void *a4, int *a5)
{
  wchar_t *v6; // r11
  __int16 v7; // di
  wchar_t v8; // si
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r8
  int v18; // ebx
  unsigned __int64 Heap; // rsi
  __int64 i; // rcx
  __int16 v21; // dx
  __int64 j; // rax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[15]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  _WORD Src[512]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  v7 = a1;
  if ( !a2 || !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 || (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    if ( (int)sub_180045280(a2, 0x203uLL, &v24[7]) < 0 )
      return 3221227286LL;
    a3 = *(_DWORD *)&v24[7] + 1;
  }
  *(_DWORD *)&v24[3] = 511;
  v8 = v6[a3 - 1];
  result = sub_18006AAE8(v6, (v7 & 4) != 0, (v7 & 2) != 0, (__int64)v24, (__int64)&v25);
  if ( (int)result < 0 )
    return result;
  if ( v8 )
  {
    v14 = *(_DWORD *)&v24[3];
  }
  else
  {
    if ( (unsigned __int64)*(int *)&v24[3] >= 0x1FF )
      return 3221227286LL;
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
    if ( (v7 & 4) != 0
      && ((int)RtlIsNormalizedString(1LL, (__int64)Src, (v25 - (__int64)Src) >> 1, (__int64)&v23) < 0 || !v23) )
    {
      return 3221227286LL;
    }
    v17 = (v16 - (__int64)Src) >> 1;
    if ( v17 < v14 - (v8 == 0) )
    {
      v18 = v14 - (2 - (v8 != 0)) - v17;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v18);
      if ( !Heap )
        return 3221225495LL;
      for ( i = 0LL; i < v18; ++i )
      {
        v21 = *(_WORD *)(v16 + 2 * i + 2);
        if ( (unsigned __int16)(v21 - 65) <= 0x19u )
        {
          *(_WORD *)(v16 + 2 * i + 2) = v21 + 32;
          *(_BYTE *)(i + Heap) = 1;
        }
      }
      if ( (int)RtlIsNormalizedString(~(v7 << 8) & 0x100 | 0xDu, v16 + 2, v18, (__int64)&v23) >= 0 && v23 )
      {
        for ( j = 0LL; j < v18; ++j )
        {
          if ( *(_BYTE *)(j + Heap) == 1 )
            *(_WORD *)(v16 + 2 * j + 2) -= 32;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        v14 = *(_DWORD *)&v24[3];
        goto LABEL_17;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 3221227286LL;
    }
  }
LABEL_17:
  if ( a4 && *a5 )
  {
    if ( v14 > *a5 )
      return 3221225507LL;
    memmove(a4, Src, 2LL * v14);
  }
  *a5 = v14;
  return 0LL;
}
