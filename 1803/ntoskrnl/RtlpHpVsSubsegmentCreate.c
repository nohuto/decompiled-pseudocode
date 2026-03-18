/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x1400AB17C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x1400ABD80 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentInitialize @ 0x1400AC7D8 (RtlpHpVsSubsegmentInitialize.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2 + 72 + a2;
  v6 = (a2 + 4167) & 0xFFFFF000;
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v4 = 1 << (v7 + 1);
  }
  if ( v4 <= 0x10000 )
    v4 = 0x10000;
  if ( v4 >= 0x40000 )
    v4 = 0x40000;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)(a1 + 72) ^ a1 ^ RtlpHpHeapGlobals))(
           *(_QWORD *)(a1 + 64) ^ a1,
           v4,
           &v11,
           a3);
    if ( v9 )
      break;
    if ( v11 < v6 )
      goto LABEL_14;
    v4 = v11;
  }
  if ( ((int (__fastcall *)(__int64, __int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 88)))(
         *(_QWORD *)(a1 + 64) ^ a1,
         v9,
         4096LL) >= 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
    RtlpHpVsSubsegmentInitialize(v9, v4, *(unsigned int *)(a1 + 8));
    return v9;
  }
LABEL_14:
  if ( v9 )
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 80)))(
      *(_QWORD *)(a1 + 64) ^ a1,
      v9,
      v4,
      a3);
  return v8;
}
