/*
 * XREFs of AlpcpAllocateBlob @ 0x14047C4C0
 * Callers:
 *     AlpcpCreateRegion @ 0x140436554 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     AlpcpAllocateMessage @ 0x140479EA0 (AlpcpAllocateMessage.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140516F18 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x14003F4BC (ExAllocateFromPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  char *result; // rax
  char v6; // si
  _QWORD *v7; // rbx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 40) < v3 )
  {
    if ( *(_QWORD *)(a1 + 40) )
      result = (char *)(*((__int64 (__fastcall **)(__int64, SIZE_T, _QWORD))&AlpcpLookasides
                        + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                        + 6))(
                         1LL,
                         v3,
                         *(unsigned int *)(a1 + 4));
    else
      result = (char *)ExAllocatePoolWithTag(PagedPool, v3, *(_DWORD *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (char *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 1;
  }
  v7 = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    v7[4] = 0LL;
    *((_BYTE *)v7 + 17) = *(_BYTE *)a1;
    v7[1] = v7;
    *v7 = v7;
    v8 = v7[2] & 0xFD;
    v7[3] = 1LL;
    *((_BYTE *)v7 + 16) = (2 * v6) | v8;
    return (char *)(v7 + 6);
  }
  return result;
}
