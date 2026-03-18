/*
 * XREFs of GetPciAddress @ 0x1C0030EAC
 * Callers:
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 */

__int64 __fastcall GetPciAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  char v12; // al

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x46706341u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v12 = gdwfAMLI;
  *(_QWORD *)v10 = a1;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v12 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v10[12] = -1;
  *((_QWORD *)v10 + 2) = a5;
  *((_QWORD *)v10 + 7) = a2;
  *((_QWORD *)v10 + 8) = a3;
  *((_QWORD *)v10 + 1) = a4;
  return GetPciAddressWorker(a1, 0LL, 0LL, v10);
}
