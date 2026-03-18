/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0014B78
 * Callers:
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0015DC0 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C013FF90 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C0014568 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C001D3C0 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C007F358 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C0081770 (EtwTraceDCompGetBatchEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int UserModeViewAtOffset; // r15d
  struct UCE_RDP_HEADER *v4; // rbx
  struct UCE_RDP_HEADER *v5; // rsi
  bool v7; // r14
  __int64 v8; // rcx
  char v9; // bl
  char v10; // r12
  __int64 v11; // r12
  __int64 v12; // r13
  DirectComposition::CBatchSharedMemoryPool *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  DirectComposition::CBatchSharedMemoryPool *v17; // rcx
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  int ChannelRDPHeaders; // eax
  struct _ERESOURCE *v28; // rbx
  __int64 v30; // rcx
  bool v31; // [rsp+20h] [rbp-50h]
  struct UCE_RDP_HEADER *v32; // [rsp+28h] [rbp-48h] BYREF
  struct UCE_RDP_HEADER *v33; // [rsp+30h] [rbp-40h] BYREF
  struct UCE_RDP_HEADER *v34; // [rsp+38h] [rbp-38h]
  void *v35; // [rsp+40h] [rbp-30h] BYREF
  struct UCE_RDP_HEADER *v36; // [rsp+48h] [rbp-28h]
  void *v37; // [rsp+50h] [rbp-20h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v38; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-10h] BYREF
  char v42; // [rsp+C8h] [rbp+58h]

  UserModeViewAtOffset = 0;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
    v30 = *((_QWORD *)this + 14);
    if ( v30 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 8) + 8LL))(*(_QWORD *)(v30 + 8)) != 3 )
        v7 = 1;
    }
  }
  v31 = v7;
  while ( 1 )
  {
    v8 = *((_QWORD *)this + 14);
    if ( !v8 || v7 )
      break;
    v9 = 0;
    v42 = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      v10 = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 216),
        (unsigned int)(*((_DWORD *)this + 37) - 1),
        &v38,
        &v39);
      v5 = (struct UCE_RDP_HEADER *)(v39 + *((_QWORD *)v38 + 7));
      v32 = v5;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v38, v39, (void **)&v33);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_DWORD *)v5 + 1) = 40;
      *(_DWORD *)v5 = 5;
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 712LL);
      *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 704LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else if ( *((_DWORD *)this + 37) == 2 )
    {
      if ( (*(_BYTE *)(v8 + 32) & 1) != 0 )
      {
        if ( *(_DWORD *)(v8 + 20) == 6 )
        {
          v9 = 1;
        }
        else
        {
          v42 = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v8 + 8),
                                &v32,
                                &v33);
          v5 = v32;
          UserModeViewAtOffset = ChannelRDPHeaders;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_QWORD *)v32 + 1) = 0LL;
            *((_DWORD *)v5 + 1) = 40;
            *(_DWORD *)v5 = 5;
            *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v5 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 712LL);
            *((_QWORD *)v5 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 704LL);
          }
        }
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
LABEL_15:
        v10 = v42;
        goto LABEL_16;
      }
      v10 = 1;
      v42 = 1;
      v9 = 1;
      if ( *(_DWORD *)(v8 + 20) != 6 )
      {
        v11 = *(_QWORD *)(v8 + 128);
        v12 = *(_QWORD *)(v8 + 136);
        v13 = *(DirectComposition::CBatchSharedMemoryPool **)(v8 + 120);
        v35 = 0LL;
        v14 = *((_QWORD *)v13 + 7);
        UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v13, v11 + 40, &v35);
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        v15 = *((_QWORD *)this + 14);
        v16 = *(_QWORD *)(v15 + 128);
        v5 = (struct UCE_RDP_HEADER *)(v16 + *(_QWORD *)(*(_QWORD *)(v15 + 120) + 56LL));
        v17 = *(DirectComposition::CBatchSharedMemoryPool **)(v15 + 120);
        v32 = v5;
        DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(v17, v16, &v37);
        v33 = (struct UCE_RDP_HEADER *)v37;
        v18 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
        *((_QWORD *)v5 + 1) = 0LL;
        *(_DWORD *)v5 = v18;
        *((_DWORD *)v5 + 1) = 40;
        v19 = *((_QWORD *)this + 14);
        if ( *(_DWORD *)(v19 + 20) == 7 )
        {
          *(_QWORD *)(v19 + 72) = *((_QWORD *)this + 21);
          *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
          *((_QWORD *)v5 + 3) = v35;
          *((_DWORD *)v5 + 8) = v12;
          EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14));
        }
        else if ( *(_DWORD *)(v19 + 20) == 8 )
        {
          *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(v19 + 8) + 28LL);
          *((_QWORD *)v5 + 3) = *(_QWORD *)(v14 + v11 + 40);
        }
        v7 = v31;
        goto LABEL_15;
      }
      UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                               *(DirectComposition::CApplicationChannel **)(v8 + 8),
                               &v32,
                               &v33);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      v5 = v32;
      *((_QWORD *)v32 + 1) = 0LL;
      *((_DWORD *)v5 + 1) = 40;
      *(_DWORD *)v5 = 6;
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
    }
    else
    {
      v10 = 0;
    }
LABEL_16:
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( v9 )
    {
      v20 = **((_QWORD **)this + 14);
      if ( !a2 && v20 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 8) + 8LL))(*(_QWORD *)(v20 + 8)) != 3 )
          v7 = 1;
        v31 = v7;
      }
      v21 = *((_QWORD *)this + 14);
      *(_BYTE *)(v21 + 32) |= 4u;
      v22 = *(_QWORD *)(v21 + 8);
      if ( *(_DWORD *)(v21 + 20) != 6 && *(_QWORD *)(v22 + 376) )
      {
        v28 = *(struct _ERESOURCE **)(v22 + 384);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v28, 1u);
        if ( (*(_DWORD *)(v22 + 240))-- == 1 )
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v22 + 376) + 8LL), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v22 + 384));
        KeLeaveCriticalRegion();
      }
      v23 = (_QWORD *)*((_QWORD *)this + 16);
      v24 = *((_QWORD *)this + 14);
      if ( v23 )
        *v23 = v24;
      else
        *((_QWORD *)this + 15) = v24;
      v25 = (_QWORD *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 16) = v25;
      *v25 = 0LL;
      *((_QWORD *)this + 14) = v20;
    }
    v7 = v31;
    v4 = v34;
    if ( v10 )
    {
      if ( v36 )
      {
        *((_QWORD *)v36 + 1) = v33;
      }
      else
      {
        v4 = v33;
        v34 = v33;
      }
      v7 = v31;
      v36 = v5;
    }
  }
  *a3 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)UserModeViewAtOffset;
}
