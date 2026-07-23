/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x14002EE40
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 * Callees:
 *     MiLockNonPagedPoolPte @ 0x14002F5F4 (MiLockNonPagedPoolPte.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  int v7; // r11d
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 PteShadow; // rdx
  __int64 v12; // rbx
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int16 v26; // ax
  unsigned __int64 v27; // rdx
  unsigned int v28; // r13d
  __int64 v29; // r10
  unsigned __int64 v30; // r11
  __int64 v31; // r15
  _SLIST_HEADER *v32; // r15
  int v33; // r12d
  unsigned __int64 v34; // r14
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // rax
  ULONG_PTR v38; // rcx
  unsigned __int16 v39; // ax
  __int64 v40; // rcx
  int v41; // eax
  _SLIST_ENTRY *v43; // rcx
  unsigned __int8 v44[8]; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-51h] BYREF
  int v46; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-41h]
  __int64 v48; // [rsp+50h] [rbp-39h]
  __int64 v49; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 *v50; // [rsp+60h] [rbp-29h]
  unsigned __int64 v51; // [rsp+68h] [rbp-21h]
  unsigned __int64 v52; // [rsp+70h] [rbp-19h]
  __int64 v53; // [rsp+78h] [rbp-11h]
  unsigned __int64 v54; // [rsp+80h] [rbp-9h]
  unsigned __int64 v55; // [rsp+88h] [rbp-1h]
  unsigned __int64 v56; // [rsp+90h] [rbp+7h]
  unsigned __int64 v57; // [rsp+98h] [rbp+Fh]

  v47 = a2;
  v50 = a1;
  v3 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = v3;
  v5 = 1LL;
  v51 = (((unsigned __int64)a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v6) = 3;
  while ( 1 )
  {
    v7 = v6;
    v6 = (unsigned int)(v6 - 1);
    v8 = (_QWORD *)*(&v51 + v6);
    v9 = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v9) = MiReadPteShadow(v8, *v8);
    if ( ((unsigned __int8)v9 & (unsigned __int8)v5) == 0 )
      goto LABEL_8;
    if ( (v9 & 0x80u) != 0LL )
      break;
    if ( !(_DWORD)v6 )
      goto LABEL_8;
  }
  if ( !v7 )
    goto LABEL_8;
  v14 = 0x7FFFFFFFF8LL;
  do
  {
    v5 <<= 9;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  if ( v5 <= 1 )
  {
LABEL_8:
    v10 = MiLockNonPagedPoolPte(v3, v44);
    PteShadow = *(_QWORD *)v3;
    v12 = v10;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v3, PteShadow);
    v45 = PteShadow;
    if ( (PteShadow & 0x200) != 0 )
    {
      v45 = PteShadow & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE(v3);
    }
    goto LABEL_13;
  }
  v15 = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    v15 = MiReadPteShadow(v4, *(_QWORD *)v4);
  v45 = v15;
  v54 = v3;
  v55 = (v14 & (v3 >> 9)) - 0x98000000000LL;
  v56 = (v14 & (v55 >> 9)) - 0x98000000000LL;
  v16 = v14 & (v56 >> 9);
  LODWORD(v14) = 4;
  v57 = v16 - 0x98000000000LL;
  do
  {
    v14 = (unsigned int)(v14 - 1);
    v17 = (__int64 *)*(&v54 + v14);
    v18 = *v17;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      v18 = MiReadPteShadow(v17, *v17);
    v49 = v18;
  }
  while ( (_DWORD)v14 && (v18 & 0x80u) == 0LL );
  v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v49);
  if ( v19 )
  {
    v21 = 1LL;
    v22 = (unsigned __int64)a1 >> 12;
    do
    {
      v23 = v22;
      v22 >>= 9;
      v24 = v21 * (v23 & 0x1FF);
      v21 <<= 9;
      v20 += v24;
      --v19;
    }
    while ( v19 );
  }
  v12 = 48 * v20 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v46 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v46);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  PteShadow = v45;
  v44[0] = CurrentIrql;
LABEL_13:
  BugCheckParameter4 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 1 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v12 + 0x58000000000LL) / 48, *(_BYTE *)(v12 + 34) & 7, BugCheckParameter4);
  v26 = *(_WORD *)(v12 + 32);
  if ( v26 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v12 + 0x58000000000LL) / 48, *(_BYTE *)(v12 + 34) & 7, v26);
  v27 = PteShadow >> 63;
  v28 = v27 != 0 ? 0x200 : 0;
  v29 = *(_QWORD *)(v12 + 40) >> 58;
  v48 = v29;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v44[0]);
  v30 = v47;
  if ( v47 > 3 )
    return v28;
  v31 = v27 ? 25LL * (unsigned __int16)v29 + v47 + 3 : v47 + 25LL * (unsigned __int16)v29;
  v32 = &qword_140388510[v31];
  if ( LOWORD(v32->Alignment) >= (unsigned int)dword_140388008[v47 - 1] )
    return v28;
  v33 = 1;
  v34 = 1LL;
  if ( v47 <= 1 )
    goto LABEL_69;
  do
  {
    v3 += 8LL;
    if ( (v3 & 0xFFF) != 0 )
    {
      v36 = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        v36 = MiReadPteShadow(v4, *(_QWORD *)v4);
      v45 = v36;
    }
    else
    {
      v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v35 = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        v35 = MiReadPteShadow(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v4);
      v45 = v35;
      if ( (v35 & 0x80u) == 0LL )
        goto LABEL_54;
      v12 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v45) - 0x58000000030LL;
    }
    if ( (v36 & 0x80u) != 0LL )
    {
      v44[0] = 17;
      v12 += 48LL;
      goto LABEL_60;
    }
LABEL_54:
    v12 = MiLockNonPagedPoolPte(v3, v44);
    v37 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
      v37 = MiReadPteShadow(v3, *(_QWORD *)v3);
    if ( (v37 & 0x200) != 0 )
    {
      v45 = v37 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE(v3);
    }
    v30 = v47;
    LOWORD(v29) = v48;
LABEL_60:
    v38 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v38 != 1 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v12 + 0x58000000000LL) / 48, *(_BYTE *)(v12 + 34) & 7, v38);
    v39 = *(_WORD *)(v12 + 32);
    if ( v39 != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v12 + 0x58000000000LL) / 48, *(_BYTE *)(v12 + 34) & 7, v39);
    v40 = *(_QWORD *)(v12 + 40) >> 58;
    if ( v44[0] != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v44[0]);
    }
    v41 = 0;
    if ( (_WORD)v40 == (_WORD)v29 )
      v41 = v33;
    ++v34;
    v33 = v41;
  }
  while ( v34 < v30 );
  if ( !v41 )
    return v28;
LABEL_69:
  v43 = (_SLIST_ENTRY *)v50;
  *v50 = qword_140389280 ^ (unsigned __int64)v50;
  RtlpInterlockedPushEntrySList(v32, v43 + 1);
  return 1LL;
}
