/*
 * XREFs of GetOpRegionScope @ 0x1C0030CC8
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     GetOpRegionScopeWorker @ 0x1C0030D90 (GetOpRegionScopeWorker.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  char v10; // al
  __int64 v11; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x46706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x38uLL);
  v10 = gdwfAMLI;
  *(_QWORD *)v8 = a1;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v10 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v11 = AMLIGetParent(a1);
  v8[6] = -1;
  *((_QWORD *)v8 + 1) = v11;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 4) = &PciConfigSpaceHandlerWorker;
  *((_QWORD *)v8 + 6) = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
