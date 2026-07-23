/*
 * XREFs of PspQueryRateControlHistory @ 0x140479030
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPreCallback @ 0x140478F20 (PspEnforceLimitsJobPreCallback.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14001E390 (RtlCopyBitMap.c)
 *     KeQuerySchedulingGroupHistory @ 0x140025FB0 (KeQuerySchedulingGroupHistory.c)
 *     PspJobIoRateQueryHistory @ 0x14003F6A0 (PspJobIoRateQueryHistory.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspNetRateControlDispatch @ 0x1406E1760 (PspNetRateControlDispatch.c)
 */

void __fastcall PspQueryRateControlHistory(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  char v6; // r15
  __int64 *v8; // rdi
  __int64 v9; // rdi
  unsigned int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // eax
  void *v16; // rcx
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  void *v19; // rcx
  __int64 *v20; // rdx
  ULONG v21; // eax
  PVOID PoolWithTag; // rax
  __int64 v23; // rcx
  ULONG TargetBit; // [rsp+24h] [rbp-4Ch] BYREF
  unsigned int v26; // [rsp+28h] [rbp-48h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  int v29; // [rsp+48h] [rbp-28h]
  __int64 v30; // [rsp+50h] [rbp-20h]
  unsigned int v31; // [rsp+58h] [rbp-18h]
  unsigned int v32; // [rsp+5Ch] [rbp-14h]

  *a4 = 0;
  v6 = a3;
  if ( a5 == 1 )
  {
    v9 = a1 + 1344;
  }
  else
  {
    v8 = (__int64 *)(a1 + 1008);
    if ( !a5 )
      v8 = (__int64 *)(a1 + 1296);
    v9 = *v8;
  }
  if ( v9 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( (int)PspJobIoRateQueryHistory(a1, &BitMapHeader, &v26, &TargetBit) < 0 )
          return;
      }
      else
      {
        KeQuerySchedulingGroupHistory(v9 + 128, &BitMapHeader, &v26, &TargetBit);
      }
      v10 = TargetBit;
      v11 = v26;
      v12 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    }
    else
    {
      v29 = 1;
      v28 = *(_QWORD *)(v9 + 56);
      if ( (int)PspNetRateControlDispatch(&v28) < 0 )
        return;
      v12 = v30;
      v11 = v31;
      v10 = v32;
    }
    v13 = a2 - 2;
    if ( v13 )
    {
      if ( v13 == 1 )
        v14 = 600000;
      else
        v14 = 10000;
    }
    else
    {
      v14 = 60000;
    }
    v15 = (v11 + v14 - 1) / v11;
    v16 = *(void **)(v9 + 24);
    v17 = v15;
    v18 = (v15 + 7) >> 3;
    if ( v18 < 8 )
      v18 = 8;
    if ( v16 && *(_QWORD *)(v9 + 32) < (unsigned __int64)v18 )
    {
      ExFreePoolWithTag(v16, 0x624A7350u);
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    v19 = *(void **)(v9 + 24);
    if ( v19 )
    {
      if ( v10 >= 8 * v18 )
      {
        memset(v19, 0, v18);
      }
      else if ( v10 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v9 + 8), (PRTL_BITMAP)(v9 + 8), v10);
        RtlClearBits((PRTL_BITMAP)(v9 + 8), 0, v10);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x624A7350u);
      *(_QWORD *)(v9 + 24) = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, v18);
      v23 = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 8) = 8 * v18;
      *(_QWORD *)(v9 + 16) = v23;
      *(_QWORD *)(v9 + 32) = v18;
      v6 = a3;
    }
    v20 = *(__int64 **)(v9 + 24);
    BitMapHeader.SizeOfBitMap = v17;
    if ( v10 > 0x40 )
      LOBYTE(v10) = 64;
    *v20 = v12 & ((1LL << v10) - 1) | *v20 & ~((1LL << v10) - 1);
    BitMapHeader.Buffer = *(unsigned int **)(v9 + 24);
    v21 = 100 * RtlNumberOfSetBits(&BitMapHeader) / v17;
    if ( v21 >= 0x3C )
    {
      *a4 = 3;
    }
    else if ( v21 >= 0x28 )
    {
      *a4 = 2;
    }
    else if ( v21 >= 0x14 )
    {
      *a4 = 1;
    }
    if ( v6 )
      memset(*(void **)(v9 + 24), 0, *(_QWORD *)(v9 + 32));
  }
}
