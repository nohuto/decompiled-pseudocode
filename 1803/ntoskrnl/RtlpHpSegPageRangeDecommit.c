/*
 * XREFs of RtlpHpSegPageRangeDecommit @ 0x140298A98
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1402981C0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140298508 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x140298B64 (RtlpHpSegPageRangeHandleCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeDecommit(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int128 v8; // xmm0
  __int64 v9; // r8
  unsigned __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a3;
  v6 = RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v14, (unsigned int)&v15, 2);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_OWORD *)(a1 + 96);
    v9 = a2 & *(_QWORD *)a1;
    v11 = (unsigned int)(v15 << 12);
    v12 = v9 + ((a2 - v9) >> 5 << *(_BYTE *)(a1 + 8)) + (unsigned int)(v14 << 12);
    v13 = v8;
    RtlpHpFreeVA((unsigned __int64 *)&v12, &v11, 0x4000LL, &v13);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v7);
    *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~((_DWORD)v7 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
  }
  return (unsigned int)-(int)v7;
}
