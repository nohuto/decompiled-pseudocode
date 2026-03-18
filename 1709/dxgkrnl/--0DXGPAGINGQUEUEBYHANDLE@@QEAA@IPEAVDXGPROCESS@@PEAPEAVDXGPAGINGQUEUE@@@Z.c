/*
 * XREFs of ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkReclaimAllocations2 @ 0x1C00EA1E0 (DxgkReclaimAllocations2.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00EBAF0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkUpdateAllocationProperty @ 0x1C01B2B50 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGPAGINGQUEUEBYHANDLE *__fastcall DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
        DXGPAGINGQUEUEBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGPAGINGQUEUE **a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)a3 + 60)
    && (v9 = *((_QWORD *)a3 + 28),
        v10 = *(_DWORD *)(v9 + 16 * v8 + 8),
        ((a2 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60))
    && (v10 & 0x2000) == 0
    && (v10 & 0x1F) != 0
    && (*(_BYTE *)(v9 + 16LL * (unsigned int)v8 + 8) & 0x1F) == 0xA )
  {
    v11 = *(_QWORD *)(v9 + 16LL * (unsigned int)v8);
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    _m_prefetchw((const void *)(v11 + 48));
    v12 = *(_QWORD *)(v11 + 48);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 48), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_11;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_11:
  *a4 = *(struct DXGPAGINGQUEUE **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return this;
}
