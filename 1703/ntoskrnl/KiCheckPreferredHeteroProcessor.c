/*
 * XREFs of KiCheckPreferredHeteroProcessor @ 0x1400427D0
 * Callers:
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140204470 (KiSendHeteroRescheduleIntRequestHelper.c)
 * Callees:
 *     KiGetHeteroCpuPolicyThread @ 0x14001AF38 (KiGetHeteroCpuPolicyThread.c)
 *     KiGenerateHeteroSets @ 0x140203F48 (KiGenerateHeteroSets.c)
 */

__int64 __fastcall KiCheckPreferredHeteroProcessor(__int64 a1, __int64 a2, int a3)
{
  int HeteroCpuPolicyThread; // eax
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  if ( KeHeteroSystem == 1 || !*(_BYTE *)(a1 + 125) )
    return 0LL;
  HeteroCpuPolicyThread = KiGetHeteroCpuPolicyThread(a1, a2);
  v8 = *(__int64 **)(a2 + 192);
  KiGenerateHeteroSets(
    (_DWORD)v8,
    *(_QWORD *)(a1 + 576),
    HeteroCpuPolicyThread,
    (unsigned int)&v16,
    (__int64)&v15,
    (__int64)&v14);
  v9 = *(_QWORD *)(a2 + 200);
  if ( (v9 & v14) == 0 )
    return 1LL;
  if ( (v9 & v16) != 0 )
    return 0LL;
  if ( a3 )
  {
    v10 = *v8;
    if ( *(_QWORD *)(a2 + 200) != *(_QWORD *)(a2 + 25176) && (v10 & v8[1]) != 0 )
      v10 &= v8[1];
    if ( (v10 & v16) == 0 )
    {
      v11 = v15 & v10 & ~v16;
      if ( v11 )
      {
        while ( 1 )
        {
          _BitScanReverse64(&v12, v11);
          v13 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)v8 + 72) + (int)v12]];
          if ( *(_BYTE *)(v13 + 23987) > *(_BYTE *)(a2 + 23987) )
            break;
          v11 &= ~*(_QWORD *)(v13 + 200);
          if ( !v11 )
            return 0LL;
        }
        return 1LL;
      }
      return 0LL;
    }
  }
  return 1LL;
}
