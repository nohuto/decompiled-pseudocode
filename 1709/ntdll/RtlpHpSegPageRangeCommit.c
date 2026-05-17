/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180048360
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsCommit @ 0x180048300 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeHandleCommit @ 0x1800484A0 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edi
  int v9; // edi
  _DWORD *SharedData; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  if ( !(unsigned int)RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v15, (unsigned int)&v16, 0) )
    return 0;
  v6 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (unsigned int)(v15 << 12);
  v13 = (unsigned int)(v16 << 12);
  v14 = v6;
  v7 = RtlpHpHeapValidateProtection(
         *(_QWORD *)(a1 + 96),
         (*(_DWORD *)(*(_QWORD *)(a1 + 96) + 20LL) & 0x40000000) != 0 ? 64 : 4);
  v8 = ZwAllocateVirtualMemory(-1LL, &v14, 0LL, &v13, 4096, v7);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, v13, v14);
  if ( v8 >= 0 )
  {
    v9 = RtlpHpSegPageRangeHandleCommit(a1, a2, (unsigned int)&v15, (unsigned int)&v16, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v9);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
    *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~(v9 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_QWORD *)(a1 + 96), v14, v13, 10LL);
    return 0;
  }
  return (unsigned int)v8;
}
