/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x18007894C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlpHpSegLfhVsCommit @ 0x180048300 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegVsAllocate @ 0x180078A90 (RtlpHpSegVsAllocate.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, _QWORD, unsigned int *, _QWORD); // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, unsigned int); // rax
  int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v4 = (unsigned int)(a2 + 72 + a2);
  v6 = (a2 + 4167) & 0xFFFFF000;
  if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v19 = v7 + 1;
    v4 = (unsigned int)(1 << (v7 + 1));
  }
  if ( (unsigned int)v4 <= 0x10000 )
    v4 = 0x10000LL;
  if ( (unsigned int)v4 >= 0x40000 )
    v4 = 0x40000LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 64));
    v11 = (char *)v10 == (char *)RtlpHpSegVsAllocate
        ? RtlpHpSegVsAllocate(v9, (unsigned int)v4, &v18, a3)
        : v10(v9, (unsigned int)v4, &v18, a3);
    v12 = v11;
    if ( v11 )
      break;
    if ( v18 < v6 )
      goto LABEL_20;
    v4 = v18;
  }
  v13 = *(_QWORD *)(a1 + 56);
  v14 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  if ( v14 == RtlpHpSegLfhVsCommit )
    v15 = RtlpHpSegLfhVsCommit(v13, v12, 0x1000u);
  else
    v15 = v14(v13, v12, 4096u);
  if ( v15 >= 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
    v16 = (unsigned __int64)(v4 - 48) >> 4;
    memset((void *)v12, 0, 0x28uLL);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 16) = 1LL;
    *(_WORD *)(v12 + 32) = v16;
    *(_WORD *)(v12 + 34) = v16 ^ 0xABED;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 56) = 0LL;
    *(_WORD *)(v12 + 52) = 0;
    v8 = v12;
    *(_WORD *)(v12 + 50) = v16;
    *(_QWORD *)(v12 + 48) ^= (v12 + 48) ^ RtlpHeapKey;
    return v8;
  }
LABEL_20:
  if ( v12 )
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72)))(
      *(_QWORD *)(a1 + 56),
      v12,
      (unsigned int)v4,
      a3);
  return v8;
}
