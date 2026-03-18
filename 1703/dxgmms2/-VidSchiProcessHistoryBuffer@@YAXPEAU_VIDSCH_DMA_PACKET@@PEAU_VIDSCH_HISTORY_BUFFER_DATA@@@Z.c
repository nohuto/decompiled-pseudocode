/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0022E18
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqCR4 @ 0x1C0024BA0 (Template_pqqqqCR4.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, struct _VIDSCH_HISTORY_BUFFER_DATA *a2)
{
  struct _VIDSCH_DMA_PACKET *v2; // r9
  __int64 v3; // rsi
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // r12d
  unsigned __int64 v16; // rdi
  int v17; // r15d
  unsigned int v18; // esi
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __m128i v31; // [rsp+58h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  __int64 v33; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-1h]
  __int64 v35; // [rsp+90h] [rbp+7h]
  int v36; // [rsp+98h] [rbp+Fh]
  unsigned int v37; // [rsp+9Ch] [rbp+13h]
  unsigned int v38; // [rsp+A0h] [rbp+17h]
  int v39; // [rsp+A4h] [rbp+1Bh]
  unsigned int v41; // [rsp+100h] [rbp+77h]
  int v42; // [rsp+100h] [rbp+77h]
  __int64 v43; // [rsp+108h] [rbp+7Fh]

  v2 = a1;
  if ( (qword_1C003C050 & 0x188ED7) != 0
    && (qword_1C003C058 & 0xFFFFFFFFFFE77128uLL) == 0
    && (qword_1C003C050 & 0x4000) != 0 )
  {
    v3 = *(_QWORD *)a2;
    v4 = *((_QWORD *)a1 + 6);
    v43 = v4;
    v5 = *(_QWORD *)(v4 + 96);
    v41 = *((_DWORD *)a2 + 2);
    v6 = *(_QWORD *)a2 + v41;
    v31 = *(__m128i *)*(_QWORD *)a2;
    v7 = *(_QWORD *)(v5 + 24);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
    v9 = *(_QWORD *)a2 + v8 + 16;
    if ( v9 < *(_QWORD *)a2 || v9 > v6 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, a2);
      v20[3] = v8;
LABEL_39:
      WdLogEvent5_WdAssertion(v20);
      return;
    }
    v10 = *(_QWORD *)(v7 + 8);
    v11 = *(_QWORD *)(v7 + 8LL * *(unsigned __int16 *)(v5 + 4) + 416);
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 2192LL)
                                + 48LL * *(unsigned __int16 *)(v11 + 6)
                                + 32)
                    + 4LL * *(unsigned __int16 *)(v11 + 8));
    if ( v12 )
    {
      v13 = **(_QWORD **)a2;
      v14 = 8;
      if ( v12 <= 0x20 )
        v14 = 4;
      v15 = 8064;
      if ( v12 <= 0x20 )
        v15 = 16128;
      v42 = v14;
      v16 = HIDWORD(v31.m128i_i64[0]);
      while ( 1 )
      {
        v17 = v16;
        if ( v15 < (unsigned int)v16 )
          v17 = v15;
        v18 = v17 * v14;
        v19 = (unsigned int)(v17 * v14);
        if ( v19 > v6 - v9 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          Template_pqqqqCR4(v19, v13, v10, *(_QWORD *)(v4 + 56), v13, *((_DWORD *)v2 + 24), v12, v18, v9);
          v19 = v18;
          v13 = v31.m128i_i64[0];
          v2 = a1;
          v4 = v43;
        }
        v9 += v19;
        LODWORD(v16) = v16 - v17;
        if ( !(_DWORD)v16 )
          return;
        v14 = v42;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v13);
      v20[3] = v9;
      v20[4] = v6;
      v20[5] = v18;
      goto LABEL_39;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 888), &LockHandle);
    v21 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 880LL);
    if ( v21 )
    {
      v39 = 0;
      while ( 1 )
      {
        v37 = 0;
        v38 = 0;
        v22 = *(_QWORD *)(v7 + 8);
        v34 = v41;
        v33 = v3;
        v35 = v21;
        v36 = 64512;
        v23 = DxgCoreInterface[35](v22, *(_QWORD **)(v43 + 64), (__int64)&v33);
        v27 = v23;
        if ( v23 < 0 )
          break;
        if ( v37 )
        {
          if ( v38 == 32 )
          {
            v28 = 4;
          }
          else
          {
            if ( v38 != 64 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v38);
              v30[3] = v38;
              goto LABEL_36;
            }
            v28 = 8;
          }
          v29 = v37 * v28;
          if ( (unsigned int)v29 > 0xFC00 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v38);
            v30[3] = v37;
            v30[4] = v38;
            v30[5] = 64512LL;
            goto LABEL_36;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_pqqqqCR4(
              v29,
              v38,
              v26,
              *(_QWORD *)(v43 + 56),
              v31.m128i_i8[0],
              *((_DWORD *)a1 + 24),
              v38,
              v29,
              v21);
        }
        if ( !v39 )
          goto LABEL_37;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24);
      v30[3] = v27;
LABEL_36:
      WdLogEvent5_WdAssertion(v30);
    }
LABEL_37:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
