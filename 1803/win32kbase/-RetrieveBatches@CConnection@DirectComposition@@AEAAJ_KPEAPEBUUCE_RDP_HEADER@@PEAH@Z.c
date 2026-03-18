/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0045910 (NtDCompositionGetConnectionBatch.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0144F34 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000FFB4 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C0017EB8 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C001AFD0 (-GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     EtwTraceDCompGetBatchEvent @ 0x1C0047550 (EtwTraceDCompGetBatchEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0x @ 0x1C0145760 (McTemplateK0x.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3,
        int *a4)
{
  int v4; // r15d
  int v5; // ebx
  int UserModeViewAtOffset; // r14d
  struct UCE_RDP_HEADER *v8; // r12
  struct UCE_RDP_HEADER *v9; // rsi
  __int64 v10; // rcx
  int v11; // edx
  _QWORD *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  struct UCE_RDP_HEADER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r15
  struct _ERESOURCE *v26; // r12
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  int ChannelRDPHeaders; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v39; // [rsp+58h] [rbp-69h]
  struct UCE_RDP_HEADER *v40; // [rsp+60h] [rbp-61h] BYREF
  struct UCE_RDP_HEADER *v41; // [rsp+68h] [rbp-59h] BYREF
  struct UCE_RDP_HEADER *v42; // [rsp+70h] [rbp-51h]
  __int64 v43; // [rsp+78h] [rbp-49h] BYREF
  __int64 v44; // [rsp+80h] [rbp-41h] BYREF
  struct UCE_RDP_HEADER *v45; // [rsp+88h] [rbp-39h]
  __int64 v46; // [rsp+90h] [rbp-31h] BYREF
  __int64 v47; // [rsp+98h] [rbp-29h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-19h] BYREF
  struct UCE_RDP_HEADER *v50; // [rsp+B0h] [rbp-11h]
  __int64 v51; // [rsp+B8h] [rbp-9h]
  __int64 v52; // [rsp+C0h] [rbp-1h]
  __int64 v53; // [rsp+C8h] [rbp+7h]
  DirectComposition::CBatchSharedMemoryPool *v54; // [rsp+D0h] [rbp+Fh] BYREF
  unsigned __int64 v55[8]; // [rsp+D8h] [rbp+17h] BYREF
  const struct UCE_RDP_HEADER **v57; // [rsp+138h] [rbp+77h]

  v57 = a3;
  v5 = 0;
  v45 = 0LL;
  UserModeViewAtOffset = 0;
  v42 = 0LL;
  v8 = 0LL;
  v40 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  if ( a2
    || (v35 = *((_QWORD *)this + 14)) == 0
    || (LOBYTE(v4) = 1,
        (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 8) + 8LL))(*(_QWORD *)(v35 + 8)) == 3) )
  {
    LOBYTE(v4) = 0;
  }
  HIDWORD(v39) = v4;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 14);
    if ( !v10 || (_BYTE)v4 )
      break;
    LOBYTE(a3) = 0;
    BYTE1(v39) = 0;
    if ( *((_DWORD *)this + 37) == 1 )
    {
      BYTE1(v39) = 1;
      DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
        (DirectComposition::CConnection *)((char *)this + 192),
        (unsigned int)(*((_DWORD *)this + 37) - 1),
        &v54,
        v55);
      v9 = (struct UCE_RDP_HEADER *)(v55[0] + *((_QWORD *)v54 + 7));
      v40 = v9;
      UserModeViewAtOffset = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
                               v54,
                               v55[0],
                               (void **)&v41);
      if ( UserModeViewAtOffset < 0 )
        return (unsigned int)UserModeViewAtOffset;
      *((_DWORD *)v9 + 1) = 40;
      LOBYTE(a3) = 0;
      *(_DWORD *)v9 = 5;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_DWORD *)v9 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      *((_DWORD *)v9 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
      *((_QWORD *)v9 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 680LL);
      *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      *((_DWORD *)this + 37) = 2;
    }
    else
    {
      if ( *((_DWORD *)this + 37) != 2 )
        goto LABEL_18;
      v11 = *(_DWORD *)(v10 + 20);
      if ( (*(_BYTE *)(v10 + 32) & 1) != 0 )
      {
        if ( v11 == 6 )
        {
          LOBYTE(a3) = 1;
        }
        else
        {
          BYTE1(v39) = 1;
          ChannelRDPHeaders = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                &v40,
                                &v41);
          v9 = v40;
          UserModeViewAtOffset = ChannelRDPHeaders;
          LOBYTE(a3) = 0;
          if ( ChannelRDPHeaders >= 0 )
          {
            *((_DWORD *)v40 + 1) = 40;
            *(_DWORD *)v9 = 5;
            *((_QWORD *)v9 + 1) = 0LL;
            *((_DWORD *)v9 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            *((_DWORD *)v9 + 5) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 688LL);
            *((_QWORD *)v9 + 3) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 680LL);
          }
        }
        *(_BYTE *)(*((_QWORD *)this + 14) + 32LL) &= ~1u;
      }
      else
      {
        LOWORD(v39) = 257;
        if ( v11 != 6 )
        {
          v12 = *(_QWORD **)(v10 + 136);
          v13 = 0LL;
          UserModeViewAtOffset = 0;
          v14 = *(_QWORD *)(v10 + 144);
          v53 = *(_QWORD *)(v10 + 152);
          v52 = v12[7];
          v15 = v12[6];
          v51 = v14;
          if ( v15 )
            goto LABEL_11;
          v31 = v12[3];
          v47 = 0LL;
          v32 = v12[2];
          v46 = 0LL;
          v43 = 0LL;
          UserModeViewAtOffset = MmMapViewOfSection(
                                   v31,
                                   *(_QWORD *)(v32 + 16),
                                   &v43,
                                   0LL,
                                   4096LL,
                                   &v47,
                                   &v46,
                                   2,
                                   0x400000,
                                   2,
                                   v39);
          if ( UserModeViewAtOffset >= 0 )
          {
            v15 = v43;
            v12[6] = v43;
LABEL_11:
            v13 = v15 + v14 + 40;
          }
          if ( UserModeViewAtOffset < 0 )
            return (unsigned int)UserModeViewAtOffset;
          v16 = *((_QWORD *)this + 14);
          v17 = *(_QWORD **)(v16 + 136);
          v18 = *(_QWORD *)(v16 + 144);
          v19 = v17[6];
          v9 = (struct UCE_RDP_HEADER *)(v18 + v17[7]);
          v40 = v9;
          if ( v19 )
          {
LABEL_14:
            v20 = (struct UCE_RDP_HEADER *)(v18 + v19);
            v50 = v20;
          }
          else
          {
            v36 = v17[3];
            v49 = 0LL;
            v37 = v17[2];
            v48 = 0LL;
            v44 = 0LL;
            if ( (int)MmMapViewOfSection(v36, *(_QWORD *)(v37 + 16), &v44, 0LL, 4096LL, &v49, &v48, 2, 0x400000, 2, v39) >= 0 )
            {
              v19 = v44;
              v17[6] = v44;
              goto LABEL_14;
            }
            v20 = v50;
          }
          v41 = v20;
          *(_DWORD *)v9 = *(_DWORD *)(*((_QWORD *)this + 14) + 20LL);
          *((_DWORD *)v9 + 1) = 40;
          *((_QWORD *)v9 + 1) = 0LL;
          v21 = *((_QWORD *)this + 14);
          if ( *(_DWORD *)(v21 + 20) == 7 )
          {
            *(_QWORD *)(v21 + 72) = *((_QWORD *)this + 21);
            *((_DWORD *)v9 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
            v33 = v53;
            *((_QWORD *)v9 + 3) = v13;
            *((_DWORD *)v9 + 8) = v33;
            EtwTraceDCompGetBatchEvent(*((_QWORD *)this + 14), v21, a3);
            LOBYTE(a3) = v39;
            LOBYTE(v4) = BYTE4(v39);
          }
          else
          {
            LOBYTE(a3) = v39;
            LOBYTE(v4) = BYTE4(v39);
            if ( *(_DWORD *)(v21 + 20) == 8 )
            {
              v22 = v51;
              *((_DWORD *)v9 + 4) = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 28LL);
              *((_QWORD *)v9 + 3) = *(_QWORD *)(v52 + v22 + 40);
            }
          }
          goto LABEL_18;
        }
        UserModeViewAtOffset = DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
                                 *(DirectComposition::CApplicationChannel **)(v10 + 8),
                                 &v40,
                                 &v41);
        if ( UserModeViewAtOffset < 0 )
          return (unsigned int)UserModeViewAtOffset;
        v9 = v40;
        LOBYTE(a3) = 1;
        *((_DWORD *)v40 + 1) = 40;
        *(_DWORD *)v9 = 6;
        *((_QWORD *)v9 + 1) = 0LL;
        *((_DWORD *)v9 + 4) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL) + 28LL);
      }
    }
LABEL_18:
    if ( UserModeViewAtOffset < 0 )
      return (unsigned int)UserModeViewAtOffset;
    if ( (_BYTE)a3 )
    {
      v23 = **((_QWORD **)this + 14);
      if ( !a2 && v23 )
      {
        v4 = (unsigned __int8)v4;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 8) + 8LL))(*(_QWORD *)(v23 + 8)) != 3 )
          v4 = 1;
        HIDWORD(v39) = v4;
      }
      v24 = *((_QWORD *)this + 14);
      *(_BYTE *)(v24 + 32) |= 4u;
      v25 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v24 + 20) != 6 )
      {
        v26 = *(struct _ERESOURCE **)(v25 + 368);
        if ( v26 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v26, 1u);
          if ( (*(_DWORD *)(v25 + 224))-- == 1 )
            KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v25 + 360) + 8LL), 1, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(v25 + 368));
          KeLeaveCriticalRegion();
        }
      }
      v27 = (_QWORD *)*((_QWORD *)this + 16);
      v28 = (_QWORD *)*((_QWORD *)this + 14);
      if ( v27 )
      {
        *v27 = v28;
        v28 = (_QWORD *)*((_QWORD *)this + 14);
      }
      else
      {
        *((_QWORD *)this + 15) = v28;
      }
      *((_QWORD *)this + 16) = v28;
      *v28 = 0LL;
      *((_QWORD *)this + 14) = v23;
    }
    LOBYTE(v4) = BYTE4(v39);
    v8 = v42;
    if ( BYTE1(v39) )
    {
      if ( v45 )
      {
        *((_QWORD *)v45 + 1) = v41;
      }
      else
      {
        v8 = v41;
        v42 = v41;
      }
      LOBYTE(v4) = BYTE4(v39);
      v45 = v9;
    }
  }
  *v57 = v8;
  v29 = *((_DWORD *)this + 64);
  *((_DWORD *)this + 65) = v29;
  *((_DWORD *)this + 36) = 0;
  LOBYTE(v5) = v29 > 0;
  *a4 = v5;
  if ( (WORD2(Microsoft_Windows_Win32kEnableBits) & 0x100) != 0 )
    McTemplateK0x(v10, &HighWorkLoadBatchCountUpdatedSubmit, a3, *((int *)this + 65));
  return (unsigned int)UserModeViewAtOffset;
}
