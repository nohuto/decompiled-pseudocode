/*
 * XREFs of RtlpHpVaMgrRegionAllocate @ 0x140297470
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14029668C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140297130 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRegionAllocate(__int64 a1)
{
  _BYTE *v2; // rbx
  _BYTE *v3; // rax
  __int64 v4; // rcx
  _WORD v6[20]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  v7 = 0LL;
  v7 = RtlpHpVaMgrAllocAligned(a1, (int)&v8, v8);
  if ( !v7 )
    return 0LL;
  memset(v6, 0, 0x20uLL);
  v6[12] = *(_WORD *)(a1 + 40);
  v3 = RtlpHpVaMgrRangeCreate(a1, v7, (__int64)v6);
  v4 = v7;
  v2 = v3;
  if ( v3 )
    v4 = 0LL;
  v7 = v4;
  if ( v4 )
    RtlpHpEnvFreeVA(&v7, &v8);
  return v2;
}
