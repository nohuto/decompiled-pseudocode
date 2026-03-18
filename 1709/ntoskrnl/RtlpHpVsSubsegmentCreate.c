/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x14025D5E8
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14025CCEC (RtlpHpVsContextAllocate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbp
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
  v8 = 0LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 64)))(
           *(_QWORD *)(a1 + 56),
           (unsigned int)v4,
           &v13,
           a3);
    v10 = v9;
    if ( v9 )
      break;
    if ( v13 < v6 )
      goto LABEL_13;
    v4 = v13;
  }
  if ( ((int (__fastcall *)(_QWORD, __int64, __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(
         *(_QWORD *)(a1 + 56),
         v9,
         4096LL) >= 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v11 = (unsigned __int64)(v4 - 48) >> 4;
    memset((void *)v10, 0, 0x28uLL);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 16) = 1LL;
    *(_WORD *)(v10 + 32) = v11;
    *(_WORD *)(v10 + 34) = v11 ^ 0xABED;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_WORD *)(v10 + 52) = 0;
    v8 = v10;
    *(_WORD *)(v10 + 50) = v11;
    *(_QWORD *)(v10 + 48) ^= (v10 + 48) ^ RtlpHeapKey;
    return v8;
  }
LABEL_13:
  if ( v10 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v10,
      (unsigned int)v4,
      a3);
  return v8;
}
