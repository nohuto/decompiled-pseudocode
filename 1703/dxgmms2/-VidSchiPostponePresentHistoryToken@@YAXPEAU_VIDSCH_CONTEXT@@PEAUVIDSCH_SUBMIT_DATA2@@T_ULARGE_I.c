/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0022CDC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00280C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3)
{
  __int64 v4; // r14
  bool v7; // zf
  int v8; // eax
  char v9; // r9
  char v10; // r8
  unsigned int v11; // r15d
  __int64 v12; // rdx
  union _ULARGE_INTEGER *PoolWithTag; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  union _ULARGE_INTEGER **v18; // rax

  v4 = *((unsigned int *)a2 + 29);
  v7 = !_BitScanForward((unsigned int *)&v8, (unsigned __int8)*((_DWORD *)a2 + 108));
  v9 = -1;
  if ( !v7 )
    v9 = v8;
  v10 = 0;
  if ( v9 != -1 )
    v10 = v9;
  v11 = v10;
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL);
  PoolWithTag = (union _ULARGE_INTEGER *)ExAllocatePoolWithTag(
                                           (POOL_TYPE)512,
                                           *(_DWORD *)(v12 + 128)
                                         * (48 * *(_DWORD *)(v12 + 56) + ((8 * *(_DWORD *)(v12 + 56) + 167) & 0xFFFFFFF8))
                                         + 8 * (*(_DWORD *)(v12 + 56) + 60),
                                           0x68536956u);
  v16 = WdLogNewEntry5_WdPresentTokenEvent(v15, v14);
  *(_QWORD *)(v16 + 24) = *((_QWORD *)a2 + 13);
  WdLogEvent5_WdPresentTokenEvent(v16);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x288uLL);
    memmove(&PoolWithTag[4], a2, *((unsigned int *)a2 + 105));
    PoolWithTag[2] = a3;
    PoolWithTag[3].QuadPart = (ULONGLONG)a1;
    v17 = 272LL * v11 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 32LL) + 8 * v4 + 2992) + 176LL;
    v18 = *(union _ULARGE_INTEGER ***)(v17 + 8);
    if ( *v18 != (union _ULARGE_INTEGER *)v17 )
      __fastfail(3u);
    PoolWithTag->QuadPart = v17;
    PoolWithTag[1].QuadPart = (ULONGLONG)v18;
    *v18 = PoolWithTag;
    *(_QWORD *)(v17 + 8) = PoolWithTag;
  }
}
