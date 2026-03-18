/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0001E34 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C000658C (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0066C54 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00B30EC (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v1; // r13
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
  __int64 v21; // rsi
  UINT v22; // ebx
  UINT v23; // r12d
  __int64 v24; // rax
  struct VIDMM_PROCESS *v25; // r15
  _QWORD *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rcx
  UINT64 v30; // r14
  __int64 v31; // rax
  struct _KEVENT *v32; // rcx
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  ADAPTER_RENDER *v37; // rcx
  int v38; // eax
  void (__fastcall *v39)(_QWORD); // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+20h] [rbp-108h]
  _DWORD v42[40]; // [rsp+30h] [rbp-F8h] BYREF
  struct _DXGKARG_SETROOTPAGETABLE v43; // [rsp+D0h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2860) & 1) == 0
    && !VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    && !*(_BYTE *)(v3 + 164)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), 0, 0) )
  {
    v6 = *(_QWORD *)(v5 + 8LL * *(unsigned __int16 *)(v4 + 4) + 424);
    v41 = ++*(_QWORD *)(v6 + 48);
    *((_QWORD *)this + 15) = v41;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v42, 20LL) )
    {
      *(_QWORD *)(i + 1616) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1576));
      v8 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1896), (_QWORD **)(v4 + 5912), 0LL);
      if ( v8 )
        break;
      memset(v42, 0, sizeof(v42));
      v38 = *(unsigned __int16 *)(v4 + 4);
      v42[8] |= 0x11u;
      v42[12] = v38;
      v42[4] = 0;
      v42[5] = 1;
    }
    v9 = (__int64)(v8 - 2);
    memset(v8 - 2, 0, 0xE0uLL);
    *(_QWORD *)(v9 + 56) = this;
    *(_DWORD *)v9 = 1953189956;
    *(_QWORD *)(v9 + 48) = v1;
    *(_QWORD *)(v9 + 64) = *((_QWORD *)this + 37);
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
    *(_QWORD *)(v9 + 104) = v41;
    v16 = v14 & 0xFFFFBFFF | (v15 ? 0x4000 : 0);
    *(_DWORD *)(v9 + 88) = 0;
    v17 = *(_QWORD *)(v9 + 64);
    *(_DWORD *)(v9 + 92) = v16;
    *(_DWORD *)(v9 + 96) = *((_DWORD *)this + 28);
    if ( v17 )
    {
      v34 = v16 | 2;
      *(_DWORD *)(v9 + 92) = v34;
      *(_DWORD *)(v9 + 92) = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v9 + 112) = *(_QWORD *)(v17 + 160);
    }
    *(_QWORD *)(v9 + 176) = *(_QWORD *)(v10 + 328);
    if ( (*(_DWORD *)(v10 + 288) & 0x8000000) != 0 )
    {
      v18 = *(_QWORD *)(v10 + 304);
      if ( v18 )
      {
        v19 = v18 + 8;
      }
      else
      {
        v35 = *(_QWORD *)(v10 + 296);
        if ( v35 )
          v19 = *(_QWORD *)(v35 + 128);
        else
          v19 = 0LL;
      }
      *(_QWORD *)(v9 + 192) = v19;
      *(_DWORD *)(v9 + 184) = *(_DWORD *)(v10 + 368);
    }
    else
    {
      *(_QWORD *)(v9 + 192) = 0LL;
    }
    *(_DWORD *)(v9 + 152) = 0;
    *(_DWORD *)(v9 + 156) = *(_DWORD *)(v10 + 364);
    *(_DWORD *)(v9 + 144) = 0;
    *(_DWORD *)(v9 + 148) = *(_DWORD *)(v10 + 340);
    v20 = *((_DWORD *)this + 18);
    if ( (v20 & 1) != 0 )
    {
      v36 = *((unsigned int *)this + 101);
      if ( (_DWORD)v36 != -1 && (v20 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v36 + 3008) + 23648LL) != -1 )
        {
          v39 = *(void (__fastcall **)(_QWORD))(v5 + 2864);
          if ( v39 )
            v39(*(_QWORD *)(v5 + 2928));
        }
        *(_DWORD *)(v9 + 92) |= 0x800u;
      }
    }
    v21 = 0LL;
    v22 = 0;
    v23 = 0;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 104LL) + 40LL) + 8LL) + 64LL);
    if ( !v24 )
      goto LABEL_24;
    v25 = *(struct VIDMM_PROCESS **)(v24 + 8);
    if ( !v25 )
      goto LABEL_24;
    v26 = *(_QWORD **)(*((_QWORD *)v25 + 2) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 200LL));
    if ( v26 )
    {
      v27 = v26[62];
      if ( v27 )
      {
        v28 = *(unsigned __int16 *)(v4 + 6);
        v29 = *(_QWORD *)(v27 + 112) + 32LL * (unsigned int)v28;
        if ( v29 )
        {
          if ( *(_QWORD *)v29 )
          {
            v26 = *(_QWORD **)(*(_QWORD *)v29 + 8LL);
            if ( v26 )
            {
              if ( v26[17] )
              {
                v21 = *(_QWORD *)(v29 + 8);
                v23 = *(_DWORD *)(v29 + 16);
                v30 = v26[18];
                v22 = *(_DWORD *)(v29 + 24);
                goto LABEL_23;
              }
            }
          }
        }
        v40 = WdLogNewEntry5_WdAssertion(v29, v26);
        *(_QWORD *)(v40 + 24) = v27;
        *(_QWORD *)(v40 + 32) = v28;
        WdLogEvent5_WdAssertion(v40);
      }
      v22 = 0;
    }
    v30 = 0LL;
LABEL_23:
    v31 = *(_QWORD *)(v9 + 48);
    if ( *(_QWORD *)(v31 + 800) != v21 )
    {
      if ( v23 )
      {
        *(_QWORD *)(v31 + 800) = v21;
        memset(&v43, 0, sizeof(v43));
        v43.hContext = *(HANDLE *)(*(_QWORD *)(v9 + 48) + 64LL);
        v37 = *(ADAPTER_RENDER **)(v5 + 8);
        v43.Address.SegmentId = v22;
        v43.Address.SegmentOffset = v30;
        v43.NumEntries = v23;
        ADAPTER_RENDER::DdiSetRootPageTable(v37, &v43);
        *(_QWORD *)(v1 + 808) = v43.Address.SegmentOffset;
        VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
          *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 536LL),
          v25,
          &v43,
          (struct _VIDSCH_CONTEXT *)v1);
      }
    }
LABEL_24:
    v32 = *(struct _KEVENT **)(*(_QWORD *)(v9 + 48) + 96LL);
    *(_QWORD *)(v9 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v9 + 72) = 8;
    v32[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v32 + 10);
    VidSchiSendToExecutionQueue(v9, 1);
    return 0LL;
  }
  VidSchiDiscardQueuePacket(this);
  return 3221225473LL;
}
