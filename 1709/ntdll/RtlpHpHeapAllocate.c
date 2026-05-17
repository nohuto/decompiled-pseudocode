/*
 * XREFs of RtlpHpHeapAllocate @ 0x180003B70
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18004944C (RtlpHeapGenerateRandomValue64.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpHeapAllocate(int a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // ebx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0LL;
  v2 = 64LL;
  v12 = 0LL;
  if ( a2 <= 0x40 )
    v2 = a2;
  v16 = 129 * (((v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 72 * v2) + 15144;
  v11 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
  v13 = v16 + v11;
  if ( v16 + v11 < v16 )
  {
    v11 = 0LL;
    v13 = v16;
  }
  v4 = (a1 & 0x40000000) != 0 ? 64 : 4;
  v5 = ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v13, 0x2000, v4);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x2000LL, v13, v12);
  if ( v5 < 0 )
  {
    result = 0LL;
    v15 = 0LL;
    goto LABEL_19;
  }
  v15 = v12;
  v16 = v13;
  if ( v11 )
  {
    ZwFreeVirtualMemory(-1LL, &v12, &v11, 0x8000LL);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, v11, v12);
    v16 = v13 - v11;
    v15 = v11 + v12;
  }
  v14 = 1728LL;
  v8 = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v14, 4096, v4);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(4096LL, v14, v15);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7, v6) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(v15, v15, v14, 11LL);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 24), v16 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 32), v14 >> 12);
    *(_QWORD *)(v15 + 336) = v15 + 1728;
    *(_QWORD *)(v15 + 344) = v15 + v14;
    v5 = 0;
    *(_QWORD *)(v15 + 352) = v15 + v16;
    result = v15;
LABEL_19:
    if ( v5 >= 0 )
      return result;
    goto LABEL_26;
  }
  result = v15;
LABEL_26:
  if ( result )
  {
    v16 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v15, &v16, 0x8000LL);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, v16, v15);
    return 0LL;
  }
  return result;
}
