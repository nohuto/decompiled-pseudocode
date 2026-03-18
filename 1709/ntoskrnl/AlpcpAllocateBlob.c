/*
 * XREFs of AlpcpAllocateBlob @ 0x1404A0EE0
 * Callers:
 *     AlpcpCreateSection @ 0x140460E08 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1404611C8 (AlpcpCreateRegion.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpAllocateMessage @ 0x140466410 (AlpcpAllocateMessage.c)
 *     AlpcpCreateConnectionPort @ 0x140468BE4 (AlpcpCreateConnectionPort.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140506768 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  void (__fastcall **v5)(ULONG_PTR); // rsi
  _QWORD *PoolWithTag; // rbx
  char v7; // si
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 40) < v3 )
  {
    if ( *(_QWORD *)(a1 + 40) )
      PoolWithTag = (_QWORD *)((__int64 (__fastcall *)(__int64, SIZE_T, _QWORD))AlpcpLookasides[16
                                                                                              * (unsigned __int64)*(unsigned int *)(a1 + 8)
                                                                                              + 6])(
                                1LL,
                                v3,
                                *(unsigned int *)(a1 + 4));
    else
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, *(_DWORD *)(a1 + 4));
    v7 = 0;
  }
  else
  {
    v5 = &AlpcpLookasides[16 * (unsigned __int64)*(unsigned int *)(a1 + 8)];
    ++*((_DWORD *)v5 + 5);
    PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v5);
    if ( !PoolWithTag )
    {
      ++*((_DWORD *)v5 + 6);
      PoolWithTag = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v5[6])(
                                *((unsigned int *)v5 + 9),
                                *((unsigned int *)v5 + 11),
                                *((unsigned int *)v5 + 10));
    }
    v7 = 2;
  }
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x30uLL);
  PoolWithTag[4] = 0LL;
  *((_BYTE *)PoolWithTag + 17) = *(_BYTE *)a1;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  v8 = PoolWithTag[2] & 0xFD;
  PoolWithTag[3] = 1LL;
  *((_BYTE *)PoolWithTag + 16) = v7 | v8;
  return PoolWithTag + 6;
}
