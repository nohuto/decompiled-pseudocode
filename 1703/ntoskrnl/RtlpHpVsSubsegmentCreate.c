/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x1402460E8
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140245810 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 + 72 + a2);
  v6 = (a2 + 4167) & 0xFFFFF000;
  if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v4 = (unsigned int)(1 << (v7 + 1));
  }
  if ( (unsigned int)v4 <= 0x10000 )
    v4 = 0x10000LL;
  if ( (unsigned int)v4 >= 0x40000 )
    v4 = 0x40000LL;
  while ( 1 )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 64)))(
           *(_QWORD *)(a1 + 56),
           (unsigned int)v4,
           &v13,
           a3);
    v9 = v8;
    if ( v8 )
      break;
    v4 = v13;
    if ( v13 < v6 )
      goto LABEL_11;
  }
  if ( ((int (__fastcall *)(_QWORD, __int64, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(
         *(_QWORD *)(a1 + 56),
         v8,
         4096LL) >= 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v11 = (unsigned __int64)(v4 - 48) >> 4;
    memset((void *)v9, 0, 0x28uLL);
    *(_WORD *)(v9 + 32) = v11;
    *(_QWORD *)(v9 + 16) = 1LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_WORD *)(v9 + 34) = v11 ^ 0xABED;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_WORD *)(v9 + 50) = v11;
    v10 = v9;
    *(_WORD *)(v9 + 52) = 0;
    *(_QWORD *)(v9 + 48) ^= (v9 + 48) ^ RtlpHeapKey;
    return v10;
  }
LABEL_11:
  v10 = 0LL;
  if ( v9 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v9,
      a3);
  return v10;
}
