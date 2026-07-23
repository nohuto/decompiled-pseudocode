/*
 * XREFs of MmDeleteKernelStack @ 0x140110020
 * Callers:
 *     MiAdjustCachedStacks @ 0x140084230 (MiAdjustCachedStacks.c)
 *     PspDeleteKernelStack @ 0x14010F0C0 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x140404A30 (KeInitThread.c)
 *     KeUserModeCallback @ 0x14053FD20 (KeUserModeCallback.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     KeAllocateCalloutStackEx @ 0x1405C1E00 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeFreeCalloutStack @ 0x1406ACFA0 (KeFreeCalloutStack.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x140023CD4 (MiDeleteKernelStack.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x14021BA2C (MiLogKernelStackEvent.c)
 *     MI_GET_NODE_FROM_VALID_PTE @ 0x14021EDAC (MI_GET_NODE_FROM_VALID_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, int a2)
{
  bool v3; // zf
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r15
  char v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // rsi
  __int64 v12; // r12
  int v13; // r14d
  char v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int8 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  _SLIST_HEADER *v27; // r13
  __int64 v28; // rbp
  int v29; // esi
  __int64 v30; // rdi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // r10d
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+28h] [rbp-70h] BYREF
  _SLIST_HEADER *v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  int v47; // [rsp+A0h] [rbp+8h] BYREF
  int v48; // [rsp+A8h] [rbp+10h]
  __int64 v49; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v50; // [rsp+B8h] [rbp+20h] BYREF

  v48 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v3 = (a2 & 1) == 0;
    v4 = 18LL;
    if ( v3 )
      v4 = (unsigned __int8)byte_14036CD9C;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v4 << 12), v4, 0LL);
  }
  v5 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v6 = v5 - 0x98000000008LL;
  v45 = v5 - 0x98000000008LL;
  v43 = MI_READ_PTE_LOCK_FREE(v5 - 0x98000000008LL);
  if ( *(ULONG_PTR **)(qword_14036C8F8
                     + 8 * ((*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v43) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL)) == &MiSystemPartition
    && (v7 & 1) == 0 )
  {
    v8 = MI_GET_NODE_FROM_VALID_PTE(v5 - 0x98000000008LL);
    v10 = 0LL;
    v11 = v8;
    v12 = 0LL;
    v13 = 1;
    if ( (v14 & 4) != 0 )
    {
      v49 = MI_READ_PTE_LOCK_FREE(v5 - 0x98000000008LL);
      v15 = v49;
      v19 = MI_GET_PFN_FROM_PTE(&v49, v16, v17, v18);
      MiLockPageInline(v19);
      if ( v15 != MI_READ_PTE_LOCK_FREE(v6) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v20);
          v49 = MI_READ_PTE_LOCK_FREE(v6);
          v21 = v49;
          v19 = MI_GET_PFN_FROM_PTE(&v49, v22, v23, v24);
          MiLockPageInline(v19);
        }
        while ( v21 != MI_READ_PTE_LOCK_FREE(v6) );
      }
      v25 = *(_QWORD *)v19;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v20);
      v10 = 0LL;
      v9 = 0xFFFFF68000000000uLL;
      if ( v25 == -5 )
        v12 = 1LL;
    }
    v26 = 400 * v11;
    v46 = 400 * v11;
    while ( 1 )
    {
      v27 = (_SLIST_HEADER *)((char *)&qword_14036C1C8[2 * v12 + 7] + v26);
      v44 = v27;
      if ( LOWORD(v27->Alignment) < SLODWORD(v27[1].Alignment) )
      {
        v28 = (__int64)((v6 << 25) - (v9 << 25)) >> 16;
        *(_QWORD *)(v28 + 0xFE0) = v28 ^ qword_14036CFC0;
        if ( v12 == 1 )
          return (__int64)RtlpInterlockedPushEntrySList(v27, (PSLIST_ENTRY)(v28 + 4080));
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v29 = -1;
        v30 = v6 - 8LL * (unsigned __int8)byte_14036CD9C;
        v31 = v6 + 8;
        v32 = v30 + 8;
        if ( v32 >= v31 )
          goto LABEL_34;
        do
        {
          v50 = MI_READ_PTE_LOCK_FREE(v32);
          if ( (v50 & 1) != 0 )
          {
            v36 = MI_GET_PFN_FROM_PTE(&v50, v33, v34, v35);
            v47 = v37;
            v38 = v36;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v47);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
            v39 = MI_READ_PTE_LOCK_FREE(v32);
            if ( v50 == v39 )
            {
              v40 = *(_QWORD *)(v38 + 40) >> 58;
              if ( v29 == -1 )
              {
                v29 = (unsigned __int16)v40;
              }
              else if ( v29 != (unsigned __int16)v40 )
              {
                v13 = v10;
              }
              *(_QWORD *)v38 = v10;
              v32 += 8LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v32 += 8LL;
          }
        }
        while ( v32 < v31 );
        v27 = v44;
        if ( v13 == 1 )
        {
LABEL_34:
          RtlpInterlockedPushEntrySList(v27, (PSLIST_ENTRY)(v28 + 4080));
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          return result;
        }
        __writecr8(CurrentIrql);
        v6 = v45;
        v13 = 1;
      }
      if ( v12 != 1 )
        return MiDeleteKernelStack(v6, v48);
      v26 = v46;
      v12 = v10;
      v9 = 0xFFFFF68000000000uLL;
    }
  }
  return MiDeleteKernelStack(v6, v48);
}
