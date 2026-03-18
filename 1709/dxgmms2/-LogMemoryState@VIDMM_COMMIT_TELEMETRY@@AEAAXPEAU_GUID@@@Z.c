/*
 * XREFs of ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00AE914
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00AE5D8 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00AE754 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AECFC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00AF124 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00240A0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C00240D4 (_TlgWrite.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogMemoryState(VIDMM_GLOBAL **this, struct _GUID *a2)
{
  const CHAR *v4; // rdx
  unsigned __int16 *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  LPCGUID v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r13
  VIDMM_GLOBAL *v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rsi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v15; // r9
  struct VIDMM_SEGMENT_GROUP_STATE *v16; // rax
  unsigned __int64 v17; // r8
  struct VIDMM_SEGMENT_GROUP_STATE *v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // al
  unsigned __int16 *v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  VIDMM_GLOBAL *v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // al
  unsigned __int16 *v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+30h] [rbp-99h] BYREF
  __int64 v34; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-89h] BYREF
  struct VIDMM_SEGMENT_GROUP_STATE *v36; // [rsp+48h] [rbp-81h]
  unsigned __int64 v37; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-69h] BYREF
  int *v39; // [rsp+80h] [rbp-49h]
  __int64 v40; // [rsp+88h] [rbp-41h]
  __int64 v41; // [rsp+90h] [rbp-39h]
  int v42; // [rsp+98h] [rbp-31h] BYREF
  int v43; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 *v45; // [rsp+B0h] [rbp-19h]
  __int64 v46; // [rsp+B8h] [rbp-11h]
  __int64 *v47; // [rsp+C0h] [rbp-9h]
  __int64 v48; // [rsp+C8h] [rbp-1h]
  unsigned __int64 *v49; // [rsp+D0h] [rbp+7h]
  __int64 v50; // [rsp+D8h] [rbp+Fh]

  if ( *((_BYTE *)this + 24) )
  {
    v4 = "Discrete";
    if ( (*(_BYTE *)(*((_QWORD *)*this + 5021) + 528LL) & 2) == 0 )
      v4 = "Integrated";
    if ( (unsigned int)hProvider > 5
      && (qword_1C0040060 & 0x400000000008LL) != 0
      && (qword_1C0040068 & 0x400000000008LL) == qword_1C0040068 )
    {
      v5 = *(unsigned __int16 **)(*((_QWORD *)*this + 3) + 1248LL);
      v39 = &v42;
      v40 = 2LL;
      v6 = *v5;
      v7 = *((_QWORD *)v5 + 1);
      v42 = v6;
      v41 = v7;
      v43 = 0;
      TlgCreateSz(&pDesc, v4);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00338E2, a2, v8, 5u, &pData);
    }
    if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v10 = *(_QWORD *)(v9 + 8);
    else
      v10 = 0LL;
    v11 = *this;
    v12 = 0;
    if ( *((_DWORD *)*this + 1604) )
    {
      v13 = qword_1C0040068;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                              v11,
                              v12,
                              D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL,
                              *(struct VIDMM_PARTITION **)(v10 + 168));
        v16 = VIDMM_GLOBAL::GetSegmentGroupState(v11, v12, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v15);
        v17 = *((_QWORD *)SegmentGroupState + 1);
        v18 = v16;
        v36 = v16;
        v33 = v17;
        v19 = 100LL * *((_QWORD *)SegmentGroupState + 14);
        v34 = *((_QWORD *)SegmentGroupState + 14);
        v20 = v19 / v17;
        v21 = 0LL;
        if ( (__int64)(100 - v20) > 0 )
          v21 = 100 - v20;
        if ( (unsigned int)hProvider > 5 )
        {
          if ( (qword_1C0040060 & 0x400000000008LL) == 0 || (v22 = 1, (v13 & 0x400000000008LL) != v13) )
            v22 = 0;
          if ( v22 )
          {
            v23 = *(unsigned __int16 **)(*((_QWORD *)v11 + 3) + 1248LL);
            v39 = &v42;
            v40 = 2LL;
            v24 = *v23;
            v41 = *((_QWORD *)v23 + 1);
            v25 = -1LL;
            v42 = v24;
            v43 = 0;
            do
              ++v25;
            while ( aLocal[v25] );
            pDesc.Ptr = (ULONGLONG)"Local";
            pDesc.Size = v25 + 1;
            pDesc.Reserved = 0;
            v45 = &v33;
            v47 = &v34;
            v49 = &v35;
            v46 = 8LL;
            v48 = 8LL;
            v35 = v21;
            v50 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033863, a2, (LPCGUID)v18, 8u, &pData);
            v18 = v36;
            v13 = qword_1C0040068;
          }
        }
        v26 = *this;
        if ( (*(_BYTE *)(1552LL * v12 + *((_QWORD *)*this + 5021) + 528) & 2) != 0 )
        {
          v33 = *((_QWORD *)v18 + 1);
          v34 = *((_QWORD *)v18 + 14);
          v27 = 100 * v34 / v33;
          v28 = 0LL;
          if ( (__int64)(100 - v27) > 0 )
            v28 = 100 - v27;
          if ( (unsigned int)hProvider > 5 )
          {
            if ( (qword_1C0040060 & 0x400000000008LL) == 0 || (v29 = 1, (v13 & 0x400000000008LL) != v13) )
              v29 = 0;
            if ( v29 )
            {
              v30 = *(unsigned __int16 **)(*((_QWORD *)v26 + 3) + 1248LL);
              v39 = &v42;
              v40 = 2LL;
              v31 = *v30;
              v41 = *((_QWORD *)v30 + 1);
              v32 = -1LL;
              v42 = v31;
              v43 = 0;
              do
                ++v32;
              while ( aNonlocal[v32] );
              pDesc.Ptr = (ULONGLONG)"NonLocal";
              pDesc.Size = v32 + 1;
              v45 = &v33;
              v47 = &v34;
              v49 = &v37;
              pDesc.Reserved = 0;
              v46 = 8LL;
              v48 = 8LL;
              v37 = v28;
              v50 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0033863, a2, (LPCGUID)v18, 8u, &pData);
              v13 = qword_1C0040068;
            }
          }
        }
        v11 = *this;
        ++v12;
      }
      while ( v12 < *((_DWORD *)*this + 1604) );
    }
  }
}
