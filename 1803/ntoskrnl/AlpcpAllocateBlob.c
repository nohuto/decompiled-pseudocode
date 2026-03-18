/*
 * XREFs of AlpcpAllocateBlob @ 0x1404D44F8
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpCreateConnectionPort @ 0x1404E0524 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCreateRegion @ 0x140556858 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140560554 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  char *result; // rax
  char v6; // si
  _QWORD *v7; // rbx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
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
    result = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
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
    *((_BYTE *)v7 + 16) = v6 | v8;
    return (char *)(v7 + 6);
  }
  return result;
}
