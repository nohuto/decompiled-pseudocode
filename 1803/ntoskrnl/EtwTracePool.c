/*
 * XREFs of EtwTracePool @ 0x1401A6EE0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     ExPoolCleanupExpansionTable @ 0x1400A3494 (ExPoolCleanupExpansionTable.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExpResizeBigPageTable @ 0x14014A110 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTracker @ 0x140153B90 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x1402BCFE4 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     MmIsNonPagedPoolNx @ 0x14015AE40 (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x1401A70B0 (ExCheckSingleFilter.c)
 */

void __fastcall EtwTracePool(
        unsigned __int16 a1,
        __int16 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v8; // si
  unsigned int v9; // r15d
  int SessionId; // eax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // rcx
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  unsigned __int16 *v18; // r10
  int v19; // r9d
  __int64 v20; // r10
  int v21; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]
  _DWORD *v25; // [rsp+50h] [rbp-30h] BYREF
  int v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+5Ch] [rbp-24h]
  int *v28; // [rsp+60h] [rbp-20h]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]

  v5 = a2 & 0x26D;
  v8 = a1;
  if ( a5 <= 0xFE0 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return;
  }
  else
  {
    v5 |= 0x10000000u;
  }
  if ( a1 == 3618 && (v5 & 1) == 0 && MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  v9 = 1;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v30 = 0;
    v9 = 2;
    v21 = SessionId;
    ++v8;
    v29 = 4;
    v28 = &v21;
  }
  v27 = 0;
  v25 = v22;
  v22[0] = v5;
  v22[1] = a3;
  v23 = a5;
  v24 = a4;
  v26 = 24;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4188);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v14 = (unsigned int)v13;
    v11 &= v11 - 1;
    v15 = EtwpHostSiloState + 32 * (v13 + 132);
    if ( v15 && (*(_DWORD *)(v15 + 4) & 0x40) != 0 && (v16 = 0LL, (v17 = EtwpPoolTagFilter[10 * v13]) != 0) )
    {
      v18 = &EtwpPoolTagFilter[10 * v13 + 2];
      while ( !(unsigned int)ExCheckSingleFilter(a3, *(unsigned int *)v18, v15, v16) )
      {
        v16 = (unsigned int)(v19 + 1);
        v18 = (unsigned __int16 *)(v20 + 4);
        if ( (unsigned int)v16 >= v17 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( !v15 || (*(_DWORD *)(v15 + 4) & 1) == 0 || a5 <= 0xFE0 )
        continue;
    }
    EtwpLogKernelEvent(
      (__int64)&v25,
      EtwpHostSiloState,
      *(unsigned __int8 *)(EtwpHostSiloState + 2 * v14 + 4172),
      v9,
      v8,
      0x1401B02u);
  }
}
