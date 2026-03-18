/*
 * XREFs of IopCommitConfiguration @ 0x14061B098
 * Callers:
 *     PnpAllocateResources @ 0x1405DB260 (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14073A6C4 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopCommitConfiguration(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // ebp
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  int v7; // eax

  v1 = *a1;
  for ( i = 0; v1 != a1; v4[7] = v4 + 7 )
  {
    v4 = v1 - 11;
    v5 = *(v1 - 8);
    v6 = v1;
    v1 = (_QWORD *)*v1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v5 + 32))(*(_QWORD *)(v5 + 8), 2LL);
    if ( v7 < 0 )
      i = v7;
    *((_WORD *)v4 + 52) = 0;
    v6[1] = v6;
    *v6 = v6;
    v4[10] = v4 + 9;
    v4[9] = v4 + 9;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
    v4[8] = v4 + 7;
  }
  return i;
}
