/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00251B0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        struct _VIDSCH_GLOBAL *a4)
{
  __int64 v5; // r15
  union _ULARGE_INTEGER v6; // rbx
  char LowPart; // r10
  char v11; // r8
  unsigned int v12; // r12d
  _QWORD *PoolWithTag; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax

  v5 = *((unsigned int *)a2 + 29);
  v6 = a3;
  LowPart = -1;
  if ( _BitScanForward((unsigned int *)&a3, *((_DWORD *)a2 + 110) & 0x3FF) )
    LowPart = a3.LowPart;
  v11 = 0;
  if ( LowPart != -1 )
    v11 = LowPart;
  v12 = v11;
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a4 + 32) * (48 * *((_DWORD *)a4 + 14) + ((8 * *((_DWORD *)a4 + 14) + 175) & 0xFFFFFFF8))
                + 8 * (*((_DWORD *)a4 + 14) + 61),
                  0x68536956u);
  v16 = WdLogNewEntry5_WdPresentTokenEvent(v15, v14);
  *(_QWORD *)(v16 + 24) = *((_QWORD *)a2 + 13);
  WdLogEvent5_WdPresentTokenEvent(v16);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x298uLL);
    memmove(PoolWithTag + 4, a2, *((unsigned int *)a2 + 107));
    PoolWithTag[2] = v6.QuadPart;
    PoolWithTag[3] = a1;
    v17 = 280LL * v12 + *((_QWORD *)a4 + v5 + 376) + 200LL;
    v18 = *(_QWORD **)(v17 + 8);
    if ( *v18 != v17 )
      __fastfail(3u);
    *PoolWithTag = v17;
    PoolWithTag[1] = v18;
    *v18 = PoolWithTag;
    *(_QWORD *)(v17 + 8) = PoolWithTag;
  }
}
