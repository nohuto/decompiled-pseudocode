/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x140118940
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcUpdateSharedCacheMapFlag @ 0x14002933C (CcUpdateSharedCacheMapFlag.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2, __int64 a3)
{
  LARGE_INTEGER *v3; // rsi
  __int64 v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-70h] BYREF
  void *VirtualAddress; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h] BYREF
  int v16; // [rsp+58h] [rbp-50h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v3 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject(a1, a2, a3);
  v13[1] = v5;
  if ( (v3->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v3->QuadPart;
  v13[0] = v3->QuadPart;
  v3 = (LARGE_INTEGER *)v13;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, &v15, &v12, 1, 0);
    memset(VirtualAddress, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress);
      CcUpdateSharedCacheMapFlag(a1, 0x20000, 1);
    }
    else
    {
      CcSetDirtyInMask(a1, v13, v9, 0LL);
    }
    v13[0] = v9 + QuadPart;
    v10 = *(_QWORD *)(v15 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v15 + 16)) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), (va_list)v13, 1LL);
  result = (unsigned int)v16;
  if ( v16 >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v3, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
