/*
 * XREFs of RaidAllocateAddressMapping @ 0x1C001A28C
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C001A1D0 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidAllocateAddressMapping(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  _DWORD *Pool; // rax
  _DWORD *v11; // rdi
  __int64 result; // rax

  Pool = RaidAllocatePool(NonPagedPoolNx, 0x28uLL, 0x4D416152u, a6);
  v11 = Pool;
  if ( !Pool )
    return 3221225495LL;
  memset(Pool, 0, 0x28uLL);
  *(_QWORD *)v11 = *a1;
  *a1 = v11;
  v11[8] = a5;
  result = 0LL;
  *((_QWORD *)v11 + 3) = a2;
  *((_QWORD *)v11 + 1) = a3;
  v11[4] = a4;
  return result;
}
