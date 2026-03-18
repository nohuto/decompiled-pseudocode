/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x140298980
 * Callers:
 *     RtlpHpMetadataCommit @ 0x140295C40 (RtlpHpMetadataCommit.c)
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x140298150 (RtlpHpSegLfhVsCommit.c)
 * Callees:
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x140298B64 (RtlpHpSegPageRangeHandleCommit.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(__int64 a1, __int64 a2, int a3, int a4)
{
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int128 v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  if ( (unsigned int)RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v14, (unsigned int)&v15, 0) )
  {
    v6 = *(_OWORD *)(a1 + 96);
    v7 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (unsigned int)(v14 << 12);
    v11 = (unsigned int)(v15 << 12);
    v8 = *(_QWORD *)(a1 + 112);
    v12 = v7;
    v13 = v6;
    result = RtlpHpAllocVA(&v12, &v11, 0LL, 4096, (*(_DWORD *)(v8 + 20) & 0x40000000) != 0 ? 64 : 4, &v13, 0LL);
    if ( (int)result < 0 )
      return result;
    v10 = RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v14, (unsigned int)&v15, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v10);
    *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~(v10 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
  }
  return 0LL;
}
