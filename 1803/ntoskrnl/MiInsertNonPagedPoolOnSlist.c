/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x1400DBD80
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400E1834 (MiFreePoolPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLockNonPagedPoolPte @ 0x1400DC2A0 (MiLockNonPagedPoolPte.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(_SLIST_ENTRY *a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  int v3; // r11d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r15
  int v6; // r10d
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v21; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // r14
  unsigned __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rdi
  _SLIST_HEADER *v30; // rdi
  unsigned __int64 v31; // rsi
  int v32; // r12d
  ULONG_PTR v33; // r10
  __int64 v34; // r9
  ULONG_PTR v35; // rcx
  unsigned __int16 v36; // ax
  __int64 v37; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  char v42; // r8
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR v58; // [rsp+38h] [rbp-41h]
  _QWORD v59[2]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-29h]
  unsigned __int64 v61; // [rsp+58h] [rbp-21h]
  _QWORD v62[2]; // [rsp+60h] [rbp-19h]
  unsigned __int64 v63; // [rsp+70h] [rbp-9h]
  unsigned __int64 v64; // [rsp+78h] [rbp-1h]
  __int64 v65; // [rsp+80h] [rbp+7h]
  unsigned __int8 v68; // [rsp+F0h] [rbp+77h]
  int v69; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 4;
  v58 = v2;
  v4 = 1LL;
  v59[1] = v2;
  v5 = v2;
  v6 = 4;
  v60 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v61 = ((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62[0] = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 4LL;
  do
  {
    v8 = v59[v7--];
    --v6;
    v9 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 8 * ((v8 >> 3) & 0x1FF));
        v42 = v9 | 0x20;
        if ( (v41 & 0x20) == 0 )
          v42 = v9;
        LOBYTE(v9) = v42;
        if ( (v41 & 0x42) != 0 )
          LOBYTE(v9) = v42 | 0x42;
      }
    }
    if ( (v9 & 1) == 0 )
      break;
    if ( (v9 & 0x80u) != 0LL )
      goto LABEL_8;
  }
  while ( v7 != 1 );
  v6 = 0;
LABEL_8:
  if ( !v6 )
    goto LABEL_49;
  do
  {
    v4 <<= 9;
    v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  if ( v4 > 1 )
  {
    v10 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v43 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v43 )
      {
        v44 = *(_QWORD *)(v43 + 8 * ((v5 >> 3) & 0x1FF));
        v45 = v10 | 0x20;
        if ( (v44 & 0x20) == 0 )
          v45 = *(_QWORD *)v5;
        v10 = v45;
        if ( (v44 & 0x42) != 0 )
          v10 = v45 | 0x42;
      }
    }
    v57 = v10;
    v62[1] = v2;
    v63 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v64 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = 4LL;
    v65 = ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v12 = v62[v11--];
      --v3;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v13 & 1) != 0
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v46 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 8 * ((v12 >> 3) & 0x1FF));
          v48 = v13 | 0x20;
          if ( (v47 & 0x20) == 0 )
            v48 = v13;
          v13 = v48;
          if ( (v47 & 0x42) != 0 )
            v13 = v48 | 0x42;
        }
      }
      v59[0] = v13;
    }
    while ( v11 && (v13 & 0x80u) == 0LL );
    if ( (unsigned __int64)v59 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v59 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v49 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 8 * (((unsigned __int64)v59 >> 3) & 0x1FF));
        v51 = v13 | 0x20;
        if ( (v50 & 0x20) == 0 )
          v51 = v13;
        v13 = v51;
        if ( (v50 & 0x42) != 0 )
          v13 = v51 | 0x42;
      }
    }
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    if ( v3 )
    {
      v15 = 1LL;
      v16 = (unsigned __int64)a1 >> 12;
      do
      {
        v17 = v16;
        v16 >>= 9;
        v18 = v15 * (v17 & 0x1FF);
        v15 <<= 9;
        v14 += v18;
        --v3;
      }
      while ( v3 );
    }
    v19 = 48 * v14 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v69 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v69);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    v21 = v57;
    v68 = CurrentIrql;
  }
  else
  {
LABEL_49:
    v19 = MiLockNonPagedPoolPte(v2);
    if ( MiPteInShadowRange(v2)
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      v52 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 8 * ((v2 >> 3) & 0x1FF));
        v54 = v21 | 0x20;
        if ( (v53 & 0x20) == 0 )
          v54 = v21;
        v21 = v54;
        if ( (v53 & 0x42) != 0 )
          v21 = v54 | 0x42;
      }
    }
    v57 = v21;
    if ( (v21 & 0x200) != 0 )
    {
      v57 = v21 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v2, v21 & 0xFFFFFFFFFFFFFDFFuLL);
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 1 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v19 + 0x58000000000LL) / 48, *(_BYTE *)(v19 + 34) & 7, BugCheckParameter4);
  v23 = *(_WORD *)(v19 + 32);
  if ( v23 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v19 + 0x58000000000LL) / 48, *(_BYTE *)(v19 + 34) & 7, v23);
  v24 = v21 >> 63;
  v25 = v24 != 0 ? 0x200 : 0;
  v26 = *(_QWORD *)(v19 + 40) >> 58;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v68);
  v27 = a2;
  if ( a2 > 3 )
    return v25;
  v28 = 25LL * (unsigned __int16)v26;
  v29 = v24 ? v28 + a2 + 3 : v28 + a2;
  v30 = &qword_1403CB6A8[v29];
  if ( LOWORD(v30->Alignment) >= (unsigned int)dword_1403CB108[a2 - 1] )
    return v25;
  v31 = 1LL;
  v32 = 1;
  if ( a2 > 1 )
  {
    v33 = v58;
    do
    {
      v33 += 8LL;
      v58 = v33;
      if ( (v33 & 0xFFF) != 0 )
      {
        v34 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL
          && v5 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v34 & 1) != 0
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8 * ((v5 >> 3) & 0x1FF));
            LOBYTE(v55) = v34 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v55 = *(_QWORD *)v5;
            LOBYTE(v34) = v55;
            if ( (v56 & 0x42) != 0 )
              LOBYTE(v34) = v55 | 0x42;
          }
        }
      }
      else
      {
        v5 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v57 = MI_READ_PTE_LOCK_FREE(v5);
        LOBYTE(v34) = v57;
        if ( (v57 & 0x80u) != 0LL )
          v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000030LL;
      }
      if ( (v34 & 0x80u) == 0LL )
      {
        v19 = MiLockNonPagedPoolPte(v33);
        v39 = MI_READ_PTE_LOCK_FREE(v58);
        if ( (v39 & 0x200) != 0 )
        {
          v57 = v39 & 0xFFFFFFFFFFFFFDFFuLL;
          MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v33, v39 & 0xFFFFFFFFFFFFFDFFuLL);
          v33 = v58;
        }
        v27 = a2;
      }
      else
      {
        v68 = 17;
        v19 += 48LL;
      }
      v35 = *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v35 != 1 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v19 + 0x58000000000LL) / 48, *(_BYTE *)(v19 + 34) & 7, v35);
      v36 = *(_WORD *)(v19 + 32);
      if ( v36 != 1 )
        KeBugCheckEx(0x4Eu, 0x9AuLL, (v19 + 0x58000000000LL) / 48, *(_BYTE *)(v19 + 34) & 7, v36);
      v37 = *(_QWORD *)(v19 + 40) >> 58;
      if ( v68 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v68);
      }
      if ( (_WORD)v37 != (_WORD)v26 )
        v32 = 0;
      ++v31;
    }
    while ( v31 < v27 );
    if ( !v32 )
      return v25;
  }
  a1->Next = (_SLIST_ENTRY *)((unsigned __int64)a1 ^ qword_1403CC500);
  RtlpInterlockedPushEntrySList(v30, a1 + 1);
  return 1LL;
}
