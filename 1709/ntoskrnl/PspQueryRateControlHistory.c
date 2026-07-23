/*
 * XREFs of PspQueryRateControlHistory @ 0x14051041C
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140510310 (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     PspJobIoRateQueryHistory @ 0x1400D4988 (PspJobIoRateQueryHistory.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     KeQuerySchedulingGroupHistory @ 0x1400D4D34 (KeQuerySchedulingGroupHistory.c)
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspNetRateControlDispatch @ 0x140717A94 (PspNetRateControlDispatch.c)
 */

void __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  char v6; // r15
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // ecx
  __int64 v11; // r12
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  void *v15; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // ebx
  void *v18; // rcx
  __int64 *v19; // rdx
  ULONG v20; // eax
  PVOID PoolWithTag; // rax
  __int64 v22; // rcx
  ULONG TargetBit; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v25; // [rsp+28h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  int v28; // [rsp+48h] [rbp-28h]
  __int64 v29; // [rsp+50h] [rbp-20h]
  unsigned int v30; // [rsp+58h] [rbp-18h]
  unsigned int v31; // [rsp+5Ch] [rbp-14h]

  *a4 = 0;
  v6 = a3;
  if ( a5 == 1 )
    v8 = a1 + 1344;
  else
    v8 = *(_QWORD *)((-(__int64)(a5 != 0) & 0xFFFFFFFFFFFFFEE0uLL) + a1 + 1296);
  if ( v8 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( (int)PspJobIoRateQueryHistory(a1, &BitMapHeader, &v25, &TargetBit) < 0 )
          return;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v8 + 128, &BitMapHeader, &v25, &TargetBit);
      }
      v9 = TargetBit;
      v10 = v25;
      v11 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    }
    else
    {
      v28 = 1;
      v27 = *(_QWORD *)(v8 + 56);
      if ( (int)PspNetRateControlDispatch(&v27) < 0 )
        return;
      v11 = v29;
      v10 = v30;
      v9 = v31;
    }
    v12 = a2 - 2;
    if ( v12 )
    {
      if ( v12 == 1 )
        v13 = 600000;
      else
        v13 = 10000;
    }
    else
    {
      v13 = 60000;
    }
    v14 = (v10 + v13 - 1) / v10;
    v15 = *(void **)(v8 + 24);
    v16 = v14;
    v17 = (v14 + 7) >> 3;
    if ( v17 < 8 )
      v17 = 8;
    if ( v15 && *(_QWORD *)(v8 + 32) < (unsigned __int64)v17 )
    {
      ExFreePoolWithTag(v15, 0x624A7350u);
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    v18 = *(void **)(v8 + 24);
    if ( v18 )
    {
      if ( v9 >= 8 * v17 )
      {
        memset(v18, 0, v17);
      }
      else if ( v9 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v8 + 8), (PRTL_BITMAP)(v8 + 8), v9);
        RtlClearBits((PRTL_BITMAP)(v8 + 8), 0, v9);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x624A7350u);
      *(_QWORD *)(v8 + 24) = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, v17);
      v22 = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 8) = 8 * v17;
      *(_QWORD *)(v8 + 16) = v22;
      *(_QWORD *)(v8 + 32) = v17;
      v6 = a3;
    }
    v19 = *(__int64 **)(v8 + 24);
    BitMapHeader.SizeOfBitMap = v16;
    if ( v9 > 0x40 )
      LOBYTE(v9) = 64;
    *v19 = v11 & ((1LL << v9) - 1) | *v19 & ~((1LL << v9) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v8 + 24);
    v20 = 100 * RtlNumberOfSetBits(&BitMapHeader) / v16;
    if ( v20 >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( v20 >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( v20 >= 0x14 )
    {
      *a4 = 1;
    }
    if ( v6 )
      memset(*(void **)(v8 + 24), 0, *(_QWORD *)(v8 + 32));
  }
}
