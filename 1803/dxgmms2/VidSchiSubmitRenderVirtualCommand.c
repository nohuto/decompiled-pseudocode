/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C00050DC (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006908 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C006B548 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00BBAC8 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  _QWORD *v1; // r13
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 i; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // cf
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  UINT v23; // ebx
  UINT v24; // r12d
  __int64 v25; // rcx
  struct VIDMM_PROCESS *v26; // r15
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rax
  UINT64 v32; // r14
  struct _KEVENT *v33; // rcx
  int v35; // r8d
  __int64 v36; // rax
  ADAPTER_RENDER *v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  void (__fastcall *v40)(_QWORD); // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-108h]
  _DWORD v43[40]; // [rsp+30h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v44; // [rsp+D0h] [rbp-58h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = v1[13];
  v4 = v1[12];
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2884) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    && !*(_BYTE *)(v3 + 188)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 184), 0, 0) )
  {
    v6 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 440);
    v42 = ++*(_QWORD *)(v6 + 48);
    *((_QWORD *)this + 15) = v42;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v43, 20LL) )
    {
      *(_QWORD *)(i + 1632) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1592));
      v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1912), (_QWORD **)(v4 + 6264), 0LL);
      if ( v8 )
        break;
      memset(v43, 0, sizeof(v43));
      v38 = *(unsigned __int16 *)(v4 + 4);
      v43[8] |= 0x41u;
      v43[12] = v38;
      v43[4] = 0;
      v43[5] = 1;
    }
    v9 = (__int64)(v8 - 2);
    memset(v8 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v9 + 56) = this;
    *(_DWORD *)v9 = 1953189956;
    *(_QWORD *)(v9 + 48) = v1;
    *(_QWORD *)(v9 + 64) = *((_QWORD *)this + 35);
    v10 = *(_QWORD *)(v9 + 56);
    *(_QWORD *)(v9 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v9 + 72) = 7;
    v11 = *(_DWORD *)(v9 + 92) ^ (*(_DWORD *)(v9 + 92) ^ (*(_DWORD *)(v10 + 72) >> 3)) & 4;
    *(_DWORD *)(v9 + 92) = v11;
    v12 = ((unsigned __int8)v11 ^ (unsigned __int8)(*(_DWORD *)(v10 + 72) >> 4)) & 8 ^ v11;
    *(_DWORD *)(v9 + 92) = v12;
    v13 = ((unsigned __int16)v12 ^ (unsigned __int16)(*(_DWORD *)(v10 + 72) >> 8)) & 0x100 ^ v12;
    *(_DWORD *)(v9 + 92) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(4 * *(_DWORD *)(v10 + 72))) & 0x10 ^ v13 | 0x2000;
    *(_DWORD *)(v9 + 92) = v14;
    v15 = *((_DWORD *)this + 32) != 0;
    *(_QWORD *)(v9 + 104) = v42;
    v16 = v14 & 0xFFFFBFFF | (v15 ? 0x4000 : 0);
    *(_DWORD *)(v9 + 88) = 0;
    v17 = *(_QWORD *)(v9 + 64);
    *(_DWORD *)(v9 + 92) = v16;
    *(_DWORD *)(v9 + 96) = *((_DWORD *)this + 28);
    if ( v17 )
    {
      v35 = v16 | 2;
      *(_DWORD *)(v9 + 92) = v35;
      *(_DWORD *)(v9 + 92) = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v9 + 112) = *(_QWORD *)(v17 + 160);
    }
    *(_QWORD *)(v9 + 176) = *(_QWORD *)(v10 + 312);
    if ( (*(_DWORD *)(v10 + 272) & 0x8000000) != 0 )
    {
      v18 = *(_QWORD *)(v10 + 288);
      if ( v18 )
      {
        v19 = v18 + 8;
      }
      else
      {
        v36 = *(_QWORD *)(v10 + 280);
        if ( v36 )
          v19 = *(_QWORD *)(v36 + 128);
        else
          v19 = 0LL;
      }
      *(_QWORD *)(v9 + 192) = v19;
      *(_DWORD *)(v9 + 184) = *(_DWORD *)(v10 + 352);
    }
    else
    {
      *(_QWORD *)(v9 + 192) = 0LL;
    }
    *(_DWORD *)(v9 + 152) = 0;
    *(_DWORD *)(v9 + 156) = *(_DWORD *)(v10 + 348);
    *(_DWORD *)(v9 + 144) = 0;
    *(_DWORD *)(v9 + 148) = *(_DWORD *)(v10 + 324);
    v20 = *((_DWORD *)this + 18);
    if ( (v20 & 1) != 0 )
    {
      v39 = *((unsigned int *)this + 97);
      if ( (_DWORD)v39 != -1 && (v20 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v39 + 3032) + 28128LL) != -1 )
        {
          v40 = *(void (__fastcall **)(_QWORD))(v5 + 2888);
          if ( v40 )
            v40(*(_QWORD *)(v5 + 2952));
        }
        *(_DWORD *)(v9 + 92) |= 0x800u;
      }
    }
    v21 = *(_QWORD **)(v9 + 48);
    v22 = 0LL;
    v23 = 0;
    v24 = 0;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21[13] + 40LL) + 8LL) + 72LL);
    if ( v25 )
      v26 = *(struct VIDMM_PROCESS **)(v25 + 8);
    else
      v26 = 0LL;
    if ( !v26 )
      goto LABEL_25;
    v27 = *(unsigned int *)(*(_QWORD *)(v5 + 16) + 200LL);
    v28 = *(_QWORD *)(*((_QWORD *)v26 + 2) + 8 * v27);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 496);
      if ( v29 )
      {
        v30 = *(unsigned __int16 *)(v4 + 6);
        v31 = *(_QWORD *)(v29 + 112) + 32LL * (unsigned int)v30;
        if ( v31 )
        {
          v27 = *(_QWORD *)v31;
          if ( *(_QWORD *)v31 )
          {
            v27 = *(_QWORD *)(v27 + 8);
            if ( v27 )
            {
              if ( *(_QWORD *)(v27 + 136) )
              {
                v22 = *(_QWORD *)(v31 + 8);
                v24 = *(_DWORD *)(v31 + 16);
                v32 = *(_QWORD *)(v27 + 144);
                v23 = *(_DWORD *)(v31 + 24);
                goto LABEL_24;
              }
            }
          }
        }
        v41 = WdLogNewEntry5_WdAssertion(v27, v28);
        *(_QWORD *)(v41 + 24) = v29;
        *(_QWORD *)(v41 + 32) = v30;
        WdLogEvent5_WdAssertion(v41);
      }
      v23 = 0;
    }
    v32 = 0LL;
LABEL_24:
    v21 = *(_QWORD **)(v9 + 48);
    if ( v21[101] != v22 )
    {
      if ( v24 )
      {
        v21[101] = v22;
        memset(&v44, 0, sizeof(v44));
        v44.hContext = *(HANDLE *)(*(_QWORD *)(v9 + 48) + 64LL);
        v37 = *(ADAPTER_RENDER **)(v5 + 8);
        v44.Address.SegmentId = v23;
        v44.Address.SegmentOffset = v32;
        v44.NumEntries = v24;
        ADAPTER_RENDER::DdiSetRootPageTable(v37, &v44);
        v1[102] = v44.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 552LL),
          v26,
          &v44,
          v1);
        v21 = *(_QWORD **)(v9 + 48);
      }
    }
LABEL_25:
    v33 = (struct _KEVENT *)v21[12];
    *(_QWORD *)(v9 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v9 + 72) = 8;
    v33[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v33 + 10);
    VidSchiSendToExecutionQueue(v9, 1);
    return 0LL;
  }
  VidSchiDiscardQueuePacket(this);
  return 3221225473LL;
}
