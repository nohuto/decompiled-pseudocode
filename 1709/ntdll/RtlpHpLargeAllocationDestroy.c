/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x180107570
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(unsigned __int64 a1, __int64 a2)
{
  const GUID *v4; // r9
  __int64 v5; // rcx
  const GUID *v7; // [rsp+30h] [rbp+8h] BYREF
  const GUID *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = (const GUID *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  v7 = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v8, (PSIZE_T)&v7, 0x8000u);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x8000, v7, v8, v4);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v5 = 2147353480LL;
  if ( *(_BYTE *)v5 )
    RtlpHeapLogRangeRelease(a2, (__int64)v8, (__int64)v7);
  return RtlpHpMetadataFree(a1);
}
