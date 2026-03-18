/*
 * XREFs of MiClearNonPagedPtes @ 0x1400BC1C0
 * Callers:
 *     MiFreePoolPages @ 0x140032824 (MiFreePoolPages.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1402213A4 (MiLogNonPagedPoolReleaseEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r14
  int v4; // esi
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 PteShadow; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 updated; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  signed __int32 v27[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v28; // [rsp+20h] [rbp-138h] BYREF
  int v29; // [rsp+28h] [rbp-130h]
  int v30; // [rsp+2Ch] [rbp-12Ch] BYREF
  int v31; // [rsp+30h] [rbp-128h]
  unsigned __int64 v32; // [rsp+38h] [rbp-120h]
  __int64 v33; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-110h]
  int v35; // [rsp+50h] [rbp-108h] BYREF
  __int16 v36; // [rsp+54h] [rbp-104h]
  __int64 v37; // [rsp+58h] [rbp-100h]
  __int64 v38; // [rsp+60h] [rbp-F8h]
  __int64 v39; // [rsp+68h] [rbp-F0h]

  v2 = a2;
  v34 = a2;
  v37 = 20LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = 0;
  v4 = 1;
  v31 = MmProtectFreedNonPagedPool;
  v5 = 0LL;
  v36 = 0;
  v6 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v29 = 1;
  v32 = 0LL;
  if ( a2 )
  {
    v7 = 0xFFFFF6FB7DBED000uLL;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      if ( v4 != 1 && (v3 & 0xFFF) != 0 )
        goto LABEL_12;
      v29 = 0;
      v4 = 0;
      v9 = 1LL;
      v10 = MI_IS_PHYSICAL_ADDRESS((__int64)(v3 << 25) >> 16);
      if ( !v10 )
        break;
      do
      {
        v9 <<= 9;
        --v10;
      }
      while ( v10 );
      if ( v9 <= 1 )
        break;
      v11 = v2 - v6;
      v12 = v9 - ((v3 >> 3) & 0x1FF);
      if ( v12 + v6 <= v2 )
        v11 = v12;
      v3 += 8 * v11;
LABEL_45:
      v6 += v11;
      v8 = 0xFFFFF6FB7DBED7F8uLL;
      v32 = v6;
      v7 = 0xFFFFF6FB7DBED000uLL;
      if ( v6 >= v2 )
        goto LABEL_46;
    }
    v7 = 0xFFFFF6FB7DBED000uLL;
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
LABEL_12:
      PteShadow = *(_QWORD *)v3;
      if ( v3 >= v7 && v3 <= v8 )
        PteShadow = MiReadPteShadow(v3, *(_QWORD *)v3);
      v33 = PteShadow;
      v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v33);
      v16 = v15 + 48 * v14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v30 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v30);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
        v7 = 0xFFFFF6FB7DBED000uLL;
      }
      v18 = *(_QWORD *)v3;
      v8 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v3 >= v7 && v3 <= 0xFFFFF6FB7DBED7F8uLL )
        v18 = MiReadPteShadow(v3, *(_QWORD *)v3);
      if ( PteShadow == v18 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    v19 = *(_QWORD *)v3;
    v6 = v32;
    v2 = v34;
    if ( v3 >= v7 && v3 <= v8 )
      v19 = MiReadPteShadow(v3, *(_QWORD *)v3);
    v28 = v19;
    v20 = *(_BYTE *)(v16 + 34);
    *(_QWORD *)v16 = v5;
    v5 = v16;
    *(_BYTE *)(v16 + 34) = v20 & 0xF8 | 5;
    *(_QWORD *)v3 = 0LL;
    if ( v3 >= v7 && v3 <= v8 )
      MiWritePteShadow(v3, 0LL);
    if ( CurrentIrql != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    v21 = 0LL;
    v28 = 0LL;
    if ( !v31 )
    {
      v22 = 0LL;
      if ( (unsigned __int64)&v28 >= v7 && (unsigned __int64)&v28 <= v8 )
        v22 = MiReadPteShadow(&v28, 0LL);
      _InterlockedOr(v27, 0);
      updated = MiUpdatePageFileHighInPte(v22, (unsigned int)KiTbFlushTimeStamp);
      v28 = updated;
      if ( (unsigned __int64)&v28 >= v25 && (unsigned __int64)&v28 <= v24 )
        MiWritePteShadow(&v28, updated);
      v21 = v28;
      *(_QWORD *)v3 = v28;
      if ( v3 >= v25 && v3 <= v24 )
        MiWritePteShadow(v3, v21);
    }
    if ( !MiGetPteTimeStamp(v21) )
      MiInsertTbFlushEntry(&v35, (__int64)(v3 << 25) >> 16, 1LL, 0);
    v4 = v29;
    v3 += 8LL;
    v11 = 1LL;
    goto LABEL_45;
  }
LABEL_46:
  MiFlushTbList((__int64)&v35, (_KPROCESS *)0xFFFFF68000000000LL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && v5 )
    MiLogNonPagedPoolReleaseEvent(v5);
  return v5;
}
