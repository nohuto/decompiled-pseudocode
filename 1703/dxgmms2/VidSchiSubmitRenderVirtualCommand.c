/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C006A150
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C00027E0 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0005AF0 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0006B50 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0063790 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGKARG_SETROOTPAG.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v1; // r13
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 i; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // cf
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rsi
  UINT v24; // r12d
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rcx
  UINT64 v32; // r14
  UINT v33; // ebx
  __int64 v34; // rax
  struct _KEVENT *v35; // rcx
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // rcx
  ADAPTER_RENDER *v40; // rcx
  int v41; // eax
  void (__fastcall *v42)(_QWORD); // rax
  __int64 v43; // rax
  _DWORD v44[40]; // [rsp+30h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v45; // [rsp+D0h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2844) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    && !*(_BYTE *)(v3 + 164)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), 0, 0) )
  {
    v6 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 416);
    v7 = *((_QWORD *)this + 11);
    v8 = ++*(_QWORD *)(v6 + 48);
    *(_QWORD *)(v7 + 432) = v8;
    *((_QWORD *)this + 14) = v8;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v44, 20LL) )
    {
      *(_QWORD *)(i + 1608) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1568));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1888), (__int64 **)(v4 + 2800), 0LL);
      if ( v10 )
        break;
      memset(v44, 0, sizeof(v44));
      v41 = *(unsigned __int16 *)(v4 + 4);
      v44[8] |= 0x11u;
      v44[12] = v41;
      v44[4] = 0;
      v44[5] = 1;
    }
    v11 = (__int64)(v10 - 2);
    memset(v10 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v11 + 56) = this;
    *(_DWORD *)v11 = 1953189956;
    *(_QWORD *)(v11 + 48) = v1;
    *(_QWORD *)(v11 + 64) = *((_QWORD *)this + 34);
    v12 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 7;
    v13 = *(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *(_DWORD *)(v11 + 92) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *(_DWORD *)(v11 + 92) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *(_DWORD *)(v11 + 92) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *(_DWORD *)(v11 + 92) = v16;
    v17 = *((_DWORD *)this + 30) != 0;
    *(_QWORD *)(v11 + 104) = v8;
    v18 = v16 & 0xFFFFBFFF | (v17 ? 0x4000 : 0);
    *(_DWORD *)(v11 + 88) = 0;
    v19 = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(v11 + 92) = v18;
    *(_DWORD *)(v11 + 96) = *((_DWORD *)this + 26);
    if ( v19 )
    {
      v37 = v18 | 2;
      *(_DWORD *)(v11 + 92) = v37;
      *(_DWORD *)(v11 + 92) = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v19 + 160);
    }
    *(_QWORD *)(v11 + 176) = *(_QWORD *)(v12 + 304);
    if ( (*(_DWORD *)(v12 + 264) & 0x8000000) != 0 )
    {
      v20 = *(_QWORD *)(v12 + 280);
      if ( v20 )
      {
        v21 = v20 + 8;
      }
      else
      {
        v38 = *(_QWORD *)(v12 + 272);
        if ( v38 )
          v21 = *(_QWORD *)(v38 + 128);
        else
          v21 = 0LL;
      }
      *(_QWORD *)(v11 + 192) = v21;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(v12 + 344);
    }
    else
    {
      *(_QWORD *)(v11 + 192) = 0LL;
    }
    *(_DWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 156) = *(_DWORD *)(v12 + 340);
    *(_DWORD *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(v12 + 316);
    v22 = *((_DWORD *)this + 18);
    if ( (v22 & 1) != 0 )
    {
      v39 = *((unsigned int *)this + 95);
      if ( (_DWORD)v39 != -1 && (v22 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v39 + 2992) + 18896LL) != -1 )
        {
          v42 = *(void (__fastcall **)(_QWORD))(v5 + 2848);
          if ( v42 )
            v42(*(_QWORD *)(v5 + 2912));
        }
        *(_DWORD *)(v11 + 92) |= 0x800u;
      }
    }
    v23 = 0LL;
    v24 = 0;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 104LL) + 40LL) + 8LL) + 64LL);
    if ( !v25 )
      goto LABEL_24;
    v26 = *(_QWORD *)(v25 + 8);
    if ( !v26 )
      goto LABEL_24;
    v27 = *(unsigned __int16 *)(v4 + 6);
    v28 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 200LL));
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 464);
      if ( v29 )
      {
        v30 = *(unsigned __int16 *)(v4 + 6);
        v31 = *(_QWORD *)(v29 + 112) + 32LL * (unsigned int)v27;
        if ( v31 )
        {
          if ( *(_QWORD *)v31 )
          {
            v27 = *(_QWORD *)(*(_QWORD *)v31 + 8LL);
            if ( v27 )
            {
              if ( *(_QWORD *)(v27 + 136) )
              {
                v23 = *(_QWORD *)(v31 + 8);
                v24 = *(_DWORD *)(v31 + 16);
                v32 = *(_QWORD *)(v27 + 144);
                v33 = *(_DWORD *)(v31 + 24);
                goto LABEL_23;
              }
            }
          }
        }
        v43 = WdLogNewEntry5_WdAssertion(v31, v27);
        *(_QWORD *)(v43 + 24) = v29;
        *(_QWORD *)(v43 + 32) = v30;
        WdLogEvent5_WdAssertion(v43);
      }
    }
    v33 = 0;
    v32 = 0LL;
LABEL_23:
    v34 = *(_QWORD *)(v11 + 48);
    if ( *(_QWORD *)(v34 + 824) != v23 )
    {
      if ( v24 )
      {
        *(_QWORD *)(v34 + 824) = v23;
        memset(&v45, 0, sizeof(v45));
        v45.hContext = *(HANDLE *)(*(_QWORD *)(v11 + 48) + 64LL);
        v40 = *(ADAPTER_RENDER **)(v5 + 8);
        v45.Address.SegmentId = v33;
        v45.Address.SegmentOffset = v32;
        v45.NumEntries = v24;
        ADAPTER_RENDER::DdiSetRootPageTable(v40, &v45);
        *(_QWORD *)(v1 + 832) = v45.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 440LL),
          *(struct _EPROCESS **)v26,
          &v45,
          (struct _VIDSCH_CONTEXT *)v1);
      }
    }
LABEL_24:
    v35 = *(struct _KEVENT **)(*(_QWORD *)(v11 + 48) + 96LL);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 8;
    v35[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v35 + 10);
    VidSchiSendToExecutionQueue(v11, 1);
    return 0LL;
  }
  VidSchiDiscardQueuePacket(this);
  return 3221225473LL;
}
