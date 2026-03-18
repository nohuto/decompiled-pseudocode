/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C005E500
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C006AE50 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0005170 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt @ 0x1C002451C (McTemplateK0pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00A12E8 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00A13F4 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00A14E8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00A1598 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        struct VIDMM_ALLOC *a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  struct VIDMM_ALLOC *v8; // r9
  __int64 *v11; // rsi
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rbx
  int v15; // eax
  void *v16; // rax
  char v17; // bl
  __int64 v19; // rcx
  int v20; // edi
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  __int64 v36; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v37; // [rsp+A0h] [rbp+18h]

  v37 = a3;
  v8 = a3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2414LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 777LL) )
  {
    v11 = *(__int64 **)a3;
    v12 = 0;
    v13 = 0;
    v14 = **(_QWORD **)a3;
    if ( *(int *)a2 < 2 )
      goto LABEL_4;
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( (v11[4] & 1) != 0 )
        goto LABEL_4;
      v13 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              a3,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v14 + 136) + 488LL));
      if ( v13 >= 0 )
        goto LABEL_33;
      *(_DWORD *)a2 = 4;
      *((_BYTE *)a2 + 4) = 1;
    }
    else if ( *(_DWORD *)a2 == 3 )
    {
      v13 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
    }
    else
    {
      v19 = (unsigned int)(*(_DWORD *)a2 - 4);
      if ( *(_DWORD *)a2 != 4 )
      {
        if ( *(_DWORD *)a2 != 5 )
          goto LABEL_4;
        v20 = **(_DWORD **)(v14 + 504);
        if ( (v20 & 0x20000000) != 0 )
        {
          v36 = 0LL;
          CurrentProcess = PsGetCurrentProcess(v19, a2, a3, a3);
          v13 = MmMapViewOfSection(
                  *(_QWORD *)(v14 + 360),
                  CurrentProcess,
                  v11 + 2,
                  0LL,
                  *(_QWORD *)(v14 + 8),
                  &v36,
                  v14 + 8,
                  2,
                  0,
                  ~((_WORD)v20 << 8) & 0x400 | 4u);
          if ( v13 >= 0 )
            goto LABEL_33;
          goto LABEL_26;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct VIDMM_ALLOC *))(**(_QWORD **)(v11[1] + 24)
                                                                                       + 72LL))(
                *(_QWORD *)(v11[1] + 24),
                v11[3],
                *(_QWORD *)(v14 + 8),
                a3);
        v11[2] = v23;
        if ( !v23 )
        {
          v13 = -1073741801;
LABEL_26:
          _InterlockedIncrement(&dword_1C0047670);
          v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
          v24[3] = v14;
          v29 = PsGetCurrentProcess(v26, v25, v27, v28);
          v24[5] = v13;
          v24[4] = v29;
          WdLogEvent5_WdLowResource(v24);
          goto LABEL_32;
        }
LABEL_33:
        v8 = v37;
LABEL_4:
        ++*(_DWORD *)(v14 + 344);
        ++*((_DWORD *)v11 + 19);
        *(_DWORD *)(v14 + 84) |= 0x20u;
        v15 = *(_DWORD *)(v14 + 80);
        if ( (v15 & 0x2000) != 0 )
        {
          v16 = *(void **)(v14 + 528);
        }
        else
        {
          if ( (v15 & 0x1000) != 0 )
          {
            v30 = LockParavirtualizedAllocationOnHost(v8, a4);
            v8 = v37;
            v13 = v30;
LABEL_9:
            if ( v13 >= 0 )
            {
              *(_BYTE *)(v14 + 97) = 1;
              v17 = a5;
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v31 = *(unsigned int *)a2;
                LODWORD(v35) = v31 == 4;
                LODWORD(v34) = *(_DWORD *)a2;
                LODWORD(v33) = a5;
                McTemplateK0pqqt(v31, &EventLock2, (__int64)a3, v8, v33, v34, v35);
              }
              if ( *(_DWORD *)a2 == 4 )
                v12 = 1;
              VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7704), v17, 0, v12);
            }
            return (unsigned int)v13;
          }
          if ( (**(_DWORD **)(v14 + 504) & 8) != 0 )
            v16 = *(void **)(v14 + 368);
          else
            v16 = (void *)v11[2];
        }
        *a4 = v16;
        goto LABEL_9;
      }
      ExReleasePushLockExclusiveEx(v14 + 480, 0LL);
      KeLeaveCriticalRegion();
      v13 = VIDMM_GLOBAL::LockInAperture(this, v37, a6, a7);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
    }
LABEL_32:
    if ( v13 < 0 )
      return (unsigned int)v13;
    goto LABEL_33;
  }
  v32 = WdLogNewEntry5_WdWarning(this, a2);
  WdLogEvent5_WdWarning(v32);
  return 3221226166LL;
}
