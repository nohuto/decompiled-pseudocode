/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0059AE0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00665D0 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0001EA0 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt @ 0x1C0021BD0 (McTemplateK0pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C009B440 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C009B54C (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C009B640 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C009B6F0 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
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
  int v11; // r12d
  int v12; // esi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  void *v15; // rax
  int v17; // eax
  __int64 CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  int v35; // [rsp+A0h] [rbp+8h]

  v8 = a3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2269LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 761LL) )
  {
    v11 = 0;
    v12 = 0;
    v13 = *(_QWORD **)a3;
    v14 = **(_QWORD **)a3;
    if ( *(int *)a2 < 2 )
      goto LABEL_4;
    switch ( *(_DWORD *)a2 )
    {
      case 2:
        if ( (v13[4] & 1) != 0 )
          goto LABEL_4;
        v12 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
                this,
                a3,
                *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v14 + 136) + 488LL));
        if ( v12 >= 0 )
          goto LABEL_32;
        *(_DWORD *)a2 = 4;
        *((_BYTE *)a2 + 4) = 1;
        break;
      case 3:
        v12 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
        break;
      case 4:
        ExReleasePushLockExclusiveEx(v14 + 480, 0LL);
        KeLeaveCriticalRegion();
        v12 = VIDMM_GLOBAL::LockInAperture(this, a3, a6, a7);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
        break;
      case 5:
        v17 = **(_DWORD **)(v14 + 504);
        if ( (v17 & 0x20000000) != 0 )
        {
          v34 = 0LL;
          v35 = ~((_WORD)v17 << 8) & 0x400 | 4;
          CurrentProcess = PsGetCurrentProcess(0LL, a2, a3, a3);
          v12 = MmMapViewOfSection(
                  *(_QWORD *)(v14 + 360),
                  CurrentProcess,
                  v13 + 2,
                  0LL,
                  *(_QWORD *)(v14 + 8),
                  &v34,
                  v14 + 8,
                  2,
                  0,
                  v35);
          if ( v12 >= 0 )
            goto LABEL_32;
          goto LABEL_25;
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct VIDMM_ALLOC *))(**(_QWORD **)(v13[1] + 24LL)
                                                                                      + 72LL))(
                *(_QWORD *)(v13[1] + 24LL),
                v13[3],
                *(_QWORD *)(v14 + 8),
                a3);
        v13[2] = v21;
        if ( !v21 )
        {
          v12 = -1073741801;
LABEL_25:
          _InterlockedIncrement(&dword_1C0040670);
          v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20, v19);
          v22[3] = v14;
          v27 = PsGetCurrentProcess(v24, v23, v25, v26);
          v22[5] = v12;
          v22[4] = v27;
          WdLogEvent5_WdLowResource(v22);
          break;
        }
LABEL_32:
        v8 = a3;
LABEL_4:
        ++*(_DWORD *)(v14 + 344);
        ++*((_DWORD *)v13 + 19);
        *(_DWORD *)(v14 + 84) |= 0x20u;
        if ( (*(_DWORD *)(v14 + 80) & 0x1000) != 0 )
        {
          v28 = LockParavirtualizedAllocationOnHost(v8, a4);
          v8 = a3;
          v12 = v28;
        }
        else
        {
          if ( (**(_DWORD **)(v14 + 504) & 8) != 0 )
            v15 = *(void **)(v14 + 368);
          else
            v15 = (void *)v13[2];
          *a4 = v15;
        }
        if ( v12 >= 0 )
        {
          *(_BYTE *)(v14 + 97) = 1;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v29 = *(unsigned int *)a2;
            LODWORD(v33) = v29 == 4;
            LODWORD(v32) = *(_DWORD *)a2;
            LODWORD(v31) = a5;
            McTemplateK0pqqt(v29, &EventLock2, (__int64)a3, v8, v31, v32, v33);
          }
          if ( *(_DWORD *)a2 == 4 )
            v11 = 1;
          VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), a5, 0, v11);
        }
        return (unsigned int)v12;
      default:
        goto LABEL_4;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_32;
  }
  v30 = WdLogNewEntry5_WdWarning(this);
  WdLogEvent5_WdWarning(v30);
  return 3221226166LL;
}
