/*
 * XREFs of PciConfigSpaceHandler @ 0x1C0032090
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 */

__int64 __fastcall PciConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  char v15; // al
  __int64 v16; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v15 = gdwfAMLI;
  *(_DWORD *)v13 = a1;
  v13[1] = a2;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v15 & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  v13[3] = a5;
  *((_DWORD *)v13 + 8) = a6;
  v13[5] = a7;
  v13[6] = a8;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
  v16 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  v13[7] = v16;
  if ( v16 )
  {
    dword_1C00677B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  }
  *((_DWORD *)v13 + 20) = -1;
  return PciConfigSpaceHandlerWorker(v13[7], 0LL, 0LL, v13);
}
