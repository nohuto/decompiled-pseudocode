/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006C8FC @ 0x18006C8FC (sub_18006C8FC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     wcsnlen @ 0x18009BBD0 (wcsnlen.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, unsigned __int64 *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r14d
  __int16 v5; // bx
  unsigned int v6; // edi
  __int64 Heap; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // r15
  _DWORD *v10; // r12
  int v11; // ecx
  unsigned __int64 v12; // rbx
  int *v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  void *Src; // [rsp+38h] [rbp-C8h]
  __int64 v18; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v20[6]; // [rsp+58h] [rbp-A8h] BYREF
  char v21; // [rsp+70h] [rbp-90h] BYREF

  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !a2 || !SourceString || *a2 || (int)sub_18006C8FC(SourceString, (__int64)a2, &v14) < 0 )
    return 3221225485LL;
  LODWORD(v14) = 2 * (_DWORD)v14;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 680LL);
  v8 = (unsigned int)v14;
  v9 = Heap;
  v15 = (unsigned int)v14;
  v10 = (_DWORD *)Heap;
  while ( 1 )
  {
    if ( !*v3 || !v8 )
    {
LABEL_21:
      *v10 = 0;
      goto LABEL_22;
    }
    if ( v4 >= 4 )
      break;
    v18 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v8 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    v14 = &v20[v4];
    if ( (int)sub_1800EC1D8(&DestinationString.Length, v14) < 0 )
      break;
    v16 = 11141120;
    Src = &v21;
    LODWORD(v14) = *v14;
    if ( !RtlLCIDToCultureName((unsigned int)v14, (__int64)&v16) )
      break;
    v11 = 0;
    if ( v4 )
    {
      while ( (_DWORD)v14 != v20[v11] )
      {
        if ( ++v11 >= v4 )
          goto LABEL_14;
      }
      break;
    }
LABEL_14:
    LOWORD(v14) = v16 + 2 + v5;
    if ( (unsigned __int16)v14 >= 0x2A7u )
    {
      v6 = -1073741595;
      goto LABEL_19;
    }
    v12 = (unsigned __int16)v16;
    memmove(v10, Src, (unsigned __int16)v16 + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v18 + 2);
    v8 = -2 - v18 + v15;
    v15 = v8;
    v10 = (_DWORD *)((char *)v10 + 2 * (v12 >> 1) + 2);
    if ( !v3 )
      goto LABEL_21;
    v5 = (__int16)v14;
  }
  v6 = -1073741811;
LABEL_19:
  if ( v9 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return v6;
  }
LABEL_22:
  *a2 = v9;
  return v6;
}
