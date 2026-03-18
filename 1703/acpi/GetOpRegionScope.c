/*
 * XREFs of GetOpRegionScope @ 0x1C001F650
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     GetOpRegionScopeWorker @ 0x1C001F710 (GetOpRegionScopeWorker.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  char v9; // al
  __int64 v10; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x46706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x38uLL);
  v9 = gdwfAMLI;
  *(_QWORD *)v8 = a1;
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (v9 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v10 = AMLIGetParent(a1);
  v8[6] = -1;
  *((_QWORD *)v8 + 1) = v10;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 4) = PciConfigSpaceHandlerWorker;
  *((_QWORD *)v8 + 6) = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
