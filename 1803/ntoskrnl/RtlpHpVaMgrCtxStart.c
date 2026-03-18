/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x140296DFC
 * Callers:
 *     RtlHpHeapManagerStart @ 0x140293128 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1402968EC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x14029DB28 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // ebx
  unsigned int v8; // r8d
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  _BitScanForward(&v4, 0x20u);
  v5 = a1 + 16;
  *(_DWORD *)(v5 + 72) = v4;
  result = RtlCSparseBitmapStart(v5, 0x800000000LL, a3, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = 0xFFFF800000000000uLL;
    v7 = 0;
    v9[0] = 0xFFFFFFFFLL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    while ( 1 )
    {
      HIDWORD(v9[0]) = v7;
      v8 = 0x200000;
      if ( v7 == 3 )
        v8 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v9, v8);
      if ( (int)result < 0 )
        break;
      if ( ++v7 >= 4 )
        return 0LL;
    }
  }
  return result;
}
