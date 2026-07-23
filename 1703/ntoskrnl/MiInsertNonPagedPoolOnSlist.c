/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x1400DD2E0
 * Callers:
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiLockNonPagedPoolPte @ 0x1400A7D10 (MiLockNonPagedPoolPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  int v5; // r9d
  char v6; // al
  unsigned __int64 v7; // r10
  int v8; // r11d
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r9d
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // r15
  _SLIST_HEADER *v28; // r15
  int v29; // r12d
  unsigned __int64 v30; // r14
  int v31; // r10d
  unsigned __int64 v32; // r11
  char v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // edx
  int v38; // ecx
  _SLIST_ENTRY *v40; // rcx
  unsigned __int8 v41[8]; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-41h] BYREF
  int v43; // [rsp+40h] [rbp-39h]
  int v44; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-31h]
  __int64 v46; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 *v47; // [rsp+58h] [rbp-21h]
  unsigned __int64 v48; // [rsp+60h] [rbp-19h]
  unsigned __int64 v49; // [rsp+68h] [rbp-11h]
  __int64 v50; // [rsp+70h] [rbp-9h]
  unsigned __int64 v51; // [rsp+78h] [rbp-1h]
  unsigned __int64 v52; // [rsp+80h] [rbp+7h]
  unsigned __int64 v53; // [rsp+88h] [rbp+Fh]
  __int64 v54; // [rsp+90h] [rbp+17h]

  v45 = a2;
  v47 = a1;
  v3 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = v3;
  v48 = (((unsigned __int64)a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 3;
  v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v6 = MI_READ_PTE_LOCK_FREE(*(&v48 + (unsigned int)(v5 - 1)));
    if ( ((unsigned __int8)v6 & (unsigned __int8)v7) == 0 )
      goto LABEL_5;
    if ( v6 < 0 )
      break;
    if ( !v5 )
      goto LABEL_5;
  }
  if ( !v8 )
    goto LABEL_5;
  do
  {
    v7 <<= 9;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  if ( v7 <= 1 )
  {
LABEL_5:
    v9 = MiLockNonPagedPoolPte(v3, v41);
    v10 = MI_READ_PTE_LOCK_FREE(v3);
    v42 = v10;
    v12 = v10;
    if ( (v10 & 0x200) != 0 )
    {
      v42 = v10 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE(v3, v10 & 0xFFFFFFFFFFFFFDFFuLL, v11);
    }
    goto LABEL_7;
  }
  v42 = MI_READ_PTE_LOCK_FREE(v4);
  v51 = v3;
  v52 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 4;
  v54 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v15 = MI_READ_PTE_LOCK_FREE(*(&v51 + (unsigned int)(v14 - 1)));
    v46 = v15;
  }
  while ( v14 && (v15 & 0x80u) == 0LL );
  v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v46) >> 12) & 0xFFFFFFFFFLL;
  if ( v16 )
  {
    v18 = 1LL;
    v19 = (unsigned __int64)a1 >> 12;
    do
    {
      v20 = v19;
      v19 >>= 9;
      v21 = v18 * (v20 & 0x1FF);
      v18 <<= 9;
      v17 += v21;
      --v16;
    }
    while ( v16 );
  }
  v9 = 48 * v17 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v44 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v44);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  v12 = v42;
  v41[0] = CurrentIrql;
LABEL_7:
  BugCheckParameter4 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 1 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (__int64)(v9 + 0x58000000000LL) / 48, *(_BYTE *)(v9 + 34) & 7, BugCheckParameter4);
  v23 = *(_WORD *)(v9 + 32);
  if ( v23 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(v9 + 0x58000000000LL) / 48, *(_BYTE *)(v9 + 34) & 7, v23);
  v24 = v12 >> 63;
  v25 = v24 != 0 ? 0x200 : 0;
  v26 = *(_QWORD *)(v9 + 40) >> 58;
  v43 = (unsigned __int16)v26;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v41[0]);
  if ( v45 > 3 )
    return v25;
  v27 = v24 ? 25LL * (unsigned __int16)v26 + v45 + 3 : v45 + 25LL * (unsigned __int16)v26;
  v28 = &qword_14036C1C8[v27];
  if ( LOWORD(v28->Alignment) >= (unsigned int)dword_14036BD08[v45 - 1] )
    return v25;
  v29 = 1;
  v30 = 1LL;
  if ( v45 > 1 )
  {
    do
    {
      v3 += 8LL;
      if ( (v3 & 0xFFF) != 0 )
      {
        v34 = MI_READ_PTE_LOCK_FREE(v4);
        v33 = v34;
        v42 = v34;
      }
      else
      {
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v42 = MI_READ_PTE_LOCK_FREE(v4);
        v33 = v42;
        if ( (v42 & 0x80u) != 0LL )
          v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v42) - 0x58000000030LL;
      }
      if ( v33 >= 0 )
      {
        v9 = MiLockNonPagedPoolPte(v3, v41);
        v35 = MI_READ_PTE_LOCK_FREE(v3);
        v42 = v35;
        if ( (v35 & 0x200) != 0 )
        {
          v42 = v35 & 0xFFFFFFFFFFFFFDFFuLL;
          MI_INTERLOCKED_EXCHANGE_PTE(v3, v35 & 0xFFFFFFFFFFFFFDFFuLL, v36);
        }
        v32 = v45;
        v31 = v43;
      }
      else
      {
        v41[0] = 17;
        v9 += 48LL;
      }
      if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (__int64)(v9 + 0x58000000000LL) / 48,
          *(_BYTE *)(v9 + 34) & 7,
          *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      if ( *(_WORD *)(v9 + 32) != 1 )
        KeBugCheckEx(
          0x4Eu,
          0x9AuLL,
          (__int64)(v9 + 0x58000000000LL) / 48,
          *(_BYTE *)(v9 + 34) & 7,
          *(unsigned __int16 *)(v9 + 32));
      v37 = *(_QWORD *)(v9 + 40) >> 58;
      if ( v41[0] != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v41[0]);
      }
      v38 = 0;
      if ( v37 == v31 )
        v38 = v29;
      ++v30;
      v29 = v38;
    }
    while ( v30 < v32 );
    if ( !v38 )
      return v25;
  }
  v40 = (_SLIST_ENTRY *)v47;
  *v47 = qword_14036CFC0 ^ (unsigned __int64)v47;
  RtlpInterlockedPushEntrySList(v28, v40 + 1);
  return 1LL;
}
