/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x1400F5A50
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x14082D7A8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int16 v5; // r9
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 result; // rax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 CurrentIrql; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = 48 * a2 - 0x58000000000LL;
  v4 = MI_GET_PAGE_FRAME_FROM_PTE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = v4 & 0xFFFFFFFFFLL;
  v7 = 512LL - (v5 & 0x1FF);
  do
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    *(_QWORD *)(v3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    v8 = *(_QWORD *)(v3 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(v3 + 8) = v2;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(v3 + 24) = v8 | 1;
    LOBYTE(v8) = *(_BYTE *)(v3 + 34) & 0xFE;
    *(_WORD *)(v3 + 32) = 1;
    *(_BYTE *)(v3 + 34) = v8 | 6;
    *(_QWORD *)(v3 + 40) = v6 | *(_QWORD *)(v3 + 40) & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 += 48LL;
    v2 += 8LL;
    --v7;
  }
  while ( v7 );
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
