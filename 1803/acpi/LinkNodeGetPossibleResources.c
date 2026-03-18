/*
 * XREFs of LinkNodeGetPossibleResources @ 0x1C008D2A8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0090E88 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0083C28 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall LinkNodeGetPossibleResources(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int *v3; // rbx
  __int64 v5; // rcx
  int v8; // edi
  SIZE_T v9; // r15
  PVOID PoolWithTag; // rax
  __int64 v11; // rcx
  char v12; // al
  unsigned int *v14; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  *a3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v14 = 0LL;
  v8 = -1073741823;
  if ( v5
    && !InitSafeBootMode
    && (v9 = (unsigned int)(32 * *(_DWORD *)(v5 + 36) + 40),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41706341u),
        v14 = (unsigned int *)PoolWithTag,
        (v3 = (unsigned int *)PoolWithTag) != 0LL) )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 48), (unsigned int)v9);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 552);
    P = 0LL;
    ACPIGet(v11, 0x5352505Fu, 335609864, 0LL, 0, 0LL, 0LL, (__int64)&P, 0LL);
    if ( !P )
      goto LABEL_9;
    v8 = PnpBiosResourcesToNtResources(0LL, (ULONG_PTR)P, 0, &v14);
    ExFreePoolWithTag(P, 0);
    v3 = v14;
    if ( v8 < 0 )
      goto LABEL_9;
  }
  v12 = *((_BYTE *)v3 + 44);
  v14 = 0LL;
  *a3 = *((_BYTE *)v3 + 56) | ((v12 & 1) == 0);
  v8 = PnpIoResourceListToCmResourceList(v3, &v14);
  if ( v8 >= 0 )
  {
    v8 = 0;
    *a2 = v14;
  }
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
