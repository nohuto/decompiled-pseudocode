/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x14009ADF4
 * Callers:
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x140050C80 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14009AF9C (CcUpdateSharedCacheMapFlag.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  int v4; // r9d
  __int64 v5; // r13
  BOOLEAN v6; // bl
  __int64 result; // rax
  LONGLONG QuadPart; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rdx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  char v13; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-70h] BYREF
  void *VirtualAddress; // [rsp+48h] [rbp-60h]
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  int v17[20]; // [rsp+58h] [rbp-50h] BYREF

  v2 = a2;
  if ( (*(_DWORD *)(a1 + 152) & 0x2000) != 0 )
  {
    if ( ((unsigned __int8)a2 & 1) == 0 )
      return 3221226549LL;
    v2 = (LARGE_INTEGER *)((unsigned __int64)a2 ^ 1);
  }
  v5 = CcReferenceSharedCacheMapFileObject();
  v14[1] = v5;
  if ( (v2->LowPart & 0xFFF) == 0 )
    goto LABEL_3;
  QuadPart = v2->QuadPart;
  v14[0] = v2->QuadPart;
  v2 = (LARGE_INTEGER *)v14;
  if ( *(_QWORD *)(a1 + 168) && *(_QWORD *)(a1 + 88) )
  {
    v9 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress(a1, QuadPart, (unsigned int)&v16, (unsigned int)&v13, 1, 0);
    memset(VirtualAddress, 0, v9);
    if ( QuadPart > *(_QWORD *)(a1 + 48) )
    {
      MmSetAddressRangeModifiedEx(VirtualAddress, 1LL);
      LOBYTE(v12) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v12);
    }
    else
    {
      CcSetDirtyInMask(a1, v14, v9, 0LL);
    }
    v14[0] = v9 + QuadPart;
    v10 = *(_QWORD *)(v16 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v16 + 16)) )
    {
      v11 = *(struct _KEVENT **)(v10 + 184);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    goto LABEL_3;
  }
  MmFlushSection(*(_QWORD *)(v5 + 40), (unsigned int)v14, 1, v4, (__int64)v17, 0);
  result = (unsigned int)v17[0];
  if ( v17[0] >= 0 )
  {
LABEL_3:
    v6 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v5 + 40), v2, 0, 0);
    CcDereferenceSharedCacheMapFileObject(a1, v5);
    return v6 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
