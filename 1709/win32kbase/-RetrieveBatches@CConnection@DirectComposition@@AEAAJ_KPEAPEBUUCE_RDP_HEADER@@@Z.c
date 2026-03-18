/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C003347C
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0036640 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C013F3C0 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C0032A80 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0037868 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C008193C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C0088D00 (EtwTraceDCompGetBatchEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // r14d
  struct UCE_RDP_HEADER *v4; // rsi
  struct UCE_RDP_HEADER *v5; // r15
  __int64 v7; // r8
  bool v8; // bl
  __int64 v9; // rcx
  char v10; // r13
  unsigned __int64 v11; // rdx
  char v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // r15
  bool v19; // zf
  struct UCE_RDP_HEADER *v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v30; // rcx
  int v31; // eax
  int ChannelRDPHeaders; // eax
  struct _ERESOURCE *v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  bool v37; // [rsp+58h] [rbp-69h]
  struct UCE_RDP_HEADER *v38; // [rsp+60h] [rbp-61h] BYREF
  struct UCE_RDP_HEADER *v39; // [rsp+68h] [rbp-59h] BYREF
  struct UCE_RDP_HEADER *v40; // [rsp+70h] [rbp-51h]
  __int64 v41; // [rsp+78h] [rbp-49h] BYREF
  __int64 v42; // [rsp+80h] [rbp-41h] BYREF
  struct UCE_RDP_HEADER *v43; // [rsp+88h] [rbp-39h]
  __int64 v44; // [rsp+90h] [rbp-31h] BYREF
  __int64 v45; // [rsp+98h] [rbp-29h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-19h] BYREF
  struct UCE_RDP_HEADER *v48; // [rsp+B0h] [rbp-11h]
  __int64 v49; // [rsp+B8h] [rbp-9h]
  __int64 v50; // [rsp+C0h] [rbp-1h]
  __int64 v51; // [rsp+C8h] [rbp+7h]
  DirectComposition::CBatchSharedMemoryPool *v52; // [rsp+D0h] [rbp+Fh] BYREF
  unsigned __int64 v53[8]; // [rsp+D8h] [rbp+17h] BYREF
  char v56; // [rsp+140h] [rbp+7Fh]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v38 = 0LL;
  v7 = 1LL;
  v8 = 0;
  if ( !a2 )
  {
    v34 = *((_QWORD *)this + 14);
    if ( v34 )
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v34 + 8) + 8LL))(
              *(_QWORD *)(v34 + 8),
              0LL,
              1LL);
      v7 = 1LL;
      if ( v35 != 3 )
        v8 = 1;
    }
  }
  v37 = v8;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 14);
    if ( !v9 || v8 )
      break;
    v10 = 0;
    v56 = 0;
    v11 = (unsigned int)(*((_DWORD *)this + 37) - 1);
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v12 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 216),
        v11,
        &v52,
        v53);
      v4 = (struct UCE_RDP_HEADER *)(v53[0] + *((_QWORD *)v52 + 7));
      v38 = v4;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
                               v52,
                               v53[0],
                               (void **)&v39);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_DWORD *)v4 + 1) = 40;
      *(_DWORD *)v4 = 5;
      *((_DWORD *)v4 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v4 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
      *((_QWORD *)v4 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 680LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
      goto LABEL_18;
    }
    if ( *((_DWORD *)this + 37) != 2 )
    {
      v12 = 0;
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
    {
      if ( *(_DWORD *)(v9 + 20) == 6 )
      {
        v10 = 1;
      }
      else
      {
        v56 = 1;
        ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                              *(DirectComposition::CApplicationChannel **)(v9 + 8),
                              &v38,
                              &v39);
        v4 = v38;
        UserModeViewAtOffset = ChannelRDPHeaders;
        if ( ChannelRDPHeaders >= 0 )
        {
          *((_QWORD *)v38 + 1) = 0LL;
          *((_DWORD *)v4 + 1) = 40;
          *(_DWORD *)v4 = 5;
          *((_DWORD *)v4 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
          v11 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL);
          *((_DWORD *)v4 + 5) = *(_DWORD *)(v11 + 688);
          *((_QWORD *)v4 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 680LL);
        }
      }
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      goto LABEL_37;
    }
    v12 = 1;
    v56 = 1;
    v10 = 1;
    if ( *(_DWORD *)(v9 + 20) == 6 )
    {
      UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                               *(DirectComposition::CApplicationChannel **)(v9 + 8),
                               &v38,
                               &v39);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      v4 = v38;
      *((_QWORD *)v38 + 1) = 0LL;
      *((_DWORD *)v4 + 1) = 40;
      *(_DWORD *)v4 = 6;
      *((_DWORD *)v4 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      goto LABEL_18;
    }
    v13 = *(_QWORD **)(v9 + 120);
    v14 = 0LL;
    UserModeViewAtOffset = 0;
    v51 = *(_QWORD *)(v9 + 136);
    v49 = v13[7];
    v50 = *(_QWORD *)(v9 + 128);
    v15 = v50 + 40;
    if ( v13[6] )
      goto LABEL_11;
    v30 = v13[3];
    v44 = 0LL;
    v41 = 0LL;
    v45 = 0LL;
    UserModeViewAtOffset = MmMapViewOfSection(
                             v30,
                             *(_QWORD *)(v13[2] + 16LL),
                             &v41,
                             0LL,
                             4096LL,
                             &v45,
                             &v44,
                             2,
                             0x400000,
                             2);
    if ( UserModeViewAtOffset >= 0 )
    {
      v13[6] = v41;
LABEL_11:
      v14 = v15 + v13[6];
    }
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    v16 = *((_QWORD *)this + 14);
    v17 = *(_QWORD **)(v16 + 120);
    v18 = *(_QWORD *)(v16 + 128);
    v4 = (struct UCE_RDP_HEADER *)(v18 + v17[7]);
    v19 = v17[6] == 0LL;
    v38 = v4;
    if ( v19 )
    {
      v36 = v17[3];
      v46 = 0LL;
      v42 = 0LL;
      v47 = 0LL;
      if ( (int)MmMapViewOfSection(v36, *(_QWORD *)(v17[2] + 16LL), &v42, 0LL, 4096LL, &v47, &v46, 2, 0x400000, 2) < 0 )
      {
        v20 = v48;
        goto LABEL_15;
      }
      v17[6] = v42;
    }
    v20 = (struct UCE_RDP_HEADER *)(v18 + v17[6]);
    v48 = v20;
LABEL_15:
    v39 = v20;
    v21 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
    *((_QWORD *)v4 + 1) = 0LL;
    *(_DWORD *)v4 = v21;
    *((_DWORD *)v4 + 1) = 40;
    v11 = *((_QWORD *)this + 14);
    if ( *(_DWORD *)(v11 + 20) == 7 )
    {
      *(_QWORD *)(v11 + 72) = *((_QWORD *)this + 21);
      *((_DWORD *)v4 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      v31 = v51;
      *((_QWORD *)v4 + 3) = v14;
      *((_DWORD *)v4 + 8) = v31;
      EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14), v11, v7);
      v8 = v37;
LABEL_37:
      v12 = v56;
      goto LABEL_18;
    }
    v8 = v37;
    v12 = 1;
    if ( *(_DWORD *)(v11 + 20) == 8 )
    {
      v22 = v49;
      *((_DWORD *)v4 + 4) = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 28LL);
      *((_QWORD *)v4 + 3) = *(_QWORD *)(v22 + v50 + 40);
    }
LABEL_18:
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( v10 )
    {
      v23 = **((_QWORD **)this + 14);
      if ( !a2 && v23 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(v23 + 8) + 8LL))(
               *(_QWORD *)(v23 + 8),
               v11,
               v7) != 3 )
          v8 = 1;
        v37 = v8;
      }
      v24 = *((_QWORD *)this + 14);
      *(_BYTE *)(v24 + 32) |= 4u;
      v25 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v24 + 20) != 6 && *(_QWORD *)(v25 + 360) )
      {
        v33 = *(struct _ERESOURCE **)(v25 + 368);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v33, 1u);
        v19 = (*(_DWORD *)(v25 + 224))-- == 1;
        if ( v19 )
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v25 + 360) + 8LL), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v25 + 368));
        KeLeaveCriticalRegion();
      }
      v26 = (_QWORD *)*((_QWORD *)this + 16);
      v27 = *((_QWORD *)this + 14);
      if ( v26 )
        *v26 = v27;
      else
        *((_QWORD *)this + 15) = v27;
      v28 = (_QWORD *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 16) = v28;
      *v28 = 0LL;
      *((_QWORD *)this + 14) = v23;
    }
    v8 = v37;
    v7 = 1LL;
    v5 = v40;
    if ( v12 )
    {
      if ( v43 )
      {
        *((_QWORD *)v43 + 1) = v39;
      }
      else
      {
        v5 = v39;
        v40 = v39;
      }
      v8 = v37;
      v43 = v4;
    }
  }
  *a3 = v5;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
