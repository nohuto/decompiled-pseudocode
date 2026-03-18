/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0027CE4
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        struct _VIDSCH_GLOBAL *a4)
{
  __int64 v5; // r12
  union _ULARGE_INTEGER v6; // rbx
  char LowPart; // r10
  __int64 v11; // rsi
  char v12; // r8
  unsigned int v13; // r13d
  _QWORD *PoolWithTag; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx

  v5 = *((unsigned int *)a2 + 29);
  v6 = a3;
  LowPart = -1;
  if ( _BitScanForward((unsigned int *)&a3, *((_DWORD *)a2 + 124) & 0x3FF) )
    LowPart = a3.LowPart;
  v11 = 0LL;
  v12 = 0;
  if ( LowPart != -1 )
    v12 = LowPart;
  v13 = v12;
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a4 + 33) * (48 * *((_DWORD *)a4 + 15) + ((8 * *((_DWORD *)a4 + 15) + 175) & 0xFFFFFFF8))
                + 8 * (*((_DWORD *)a4 + 15) + 68),
                  0x68536956u);
  v17 = WdLogNewEntry5_WdPresentTokenEvent(v16, v15);
  *(_QWORD *)(v17 + 24) = *((_QWORD *)a2 + 13);
  WdLogEvent5_WdPresentTokenEvent(v17);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2D0uLL);
    memmove(PoolWithTag + 4, a2, *((unsigned int *)a2 + 121));
    PoolWithTag[2] = v6.QuadPart;
    PoolWithTag[3] = a1;
    v18 = *(int *)(*((_QWORD *)a4 + v5 + 379) + 216LL * v13 + 140);
    if ( (int)v18 > -1 )
      v11 = *((_QWORD *)a4 + 395) + 136 * v18;
    v19 = *(_QWORD **)(v11 + 128);
    if ( *v19 != v11 + 120 )
      __fastfail(3u);
    *PoolWithTag = v11 + 120;
    PoolWithTag[1] = v19;
    *v19 = PoolWithTag;
    *(_QWORD *)(v11 + 128) = PoolWithTag;
  }
}
