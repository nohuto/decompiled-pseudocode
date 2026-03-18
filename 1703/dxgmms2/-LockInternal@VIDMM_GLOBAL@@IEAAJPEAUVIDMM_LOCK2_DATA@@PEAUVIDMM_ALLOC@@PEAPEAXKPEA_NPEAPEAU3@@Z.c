/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0056D00
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0063270 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0002850 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqt @ 0x1C001FB14 (Template_pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C0093A30 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0093B3C (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C0093C34 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
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
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  int v30; // [rsp+A0h] [rbp+8h]

  v8 = a3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2244LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 665LL) )
  {
    v11 = 0;
    v12 = 0;
    v13 = *(_QWORD **)a3;
    v14 = **(_QWORD **)a3;
    if ( *(int *)a2 < 2 )
    {
LABEL_4:
      ++*(_DWORD *)(v14 + 344);
      ++*((_DWORD *)v13 + 19);
      *(_DWORD *)(v14 + 84) |= 0x20u;
      if ( (**(_DWORD **)(v14 + 520) & 8) != 0 )
        v15 = *(void **)(v14 + 368);
      else
        v15 = (void *)v13[2];
      *a4 = v15;
      *(_BYTE *)(v14 + 97) = 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v24 = *(unsigned int *)a2;
        LODWORD(v28) = v24 == 4;
        LODWORD(v27) = *(_DWORD *)a2;
        LODWORD(v26) = a5;
        Template_pqqt(v24, &EventLock2, (__int64)a3, v8, v26, v27, v28);
      }
      if ( *(_DWORD *)a2 == 4 )
        v11 = 1;
      VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), a5, 0, v11);
      return (unsigned int)v12;
    }
    switch ( *(_DWORD *)a2 )
    {
      case 2:
        if ( (v13[4] & 1) != 0 )
          goto LABEL_4;
        v12 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
                this,
                a3,
                *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v14 + 136) + 504LL));
        if ( v12 >= 0 )
          goto LABEL_29;
        *(_DWORD *)a2 = 4;
        *((_BYTE *)a2 + 4) = 1;
        break;
      case 3:
        v12 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
        break;
      case 4:
        ExReleasePushLockExclusiveEx(v14 + 512, 0LL);
        KeLeaveCriticalRegion();
        v12 = VIDMM_GLOBAL::LockInAperture(this, a3, a6, a7);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 512, 0LL);
        break;
      case 5:
        v17 = **(_DWORD **)(v14 + 520);
        if ( (v17 & 0x20000000) != 0 )
        {
          v29 = 0LL;
          v30 = ~((_WORD)v17 << 8) & 0x400 | 4;
          CurrentProcess = PsGetCurrentProcess(0LL);
          v12 = MmMapViewOfSection(
                  *(_QWORD *)(v14 + 360),
                  CurrentProcess,
                  v13 + 2,
                  0LL,
                  *(_QWORD *)(v14 + 8),
                  &v29,
                  v14 + 8,
                  2,
                  0,
                  v30);
          if ( v12 >= 0 )
            goto LABEL_29;
          goto LABEL_22;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct VIDMM_ALLOC *))(**(_QWORD **)(v13[1] + 24LL)
                                                                                      + 72LL))(
                *(_QWORD *)(v13[1] + 24LL),
                v13[3],
                *(_QWORD *)(v14 + 8),
                a3);
        v13[2] = v20;
        if ( !v20 )
        {
          v12 = -1073741801;
LABEL_22:
          _InterlockedIncrement(&dword_1C003C660);
          v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19);
          v21[3] = v14;
          v23 = PsGetCurrentProcess(v22);
          v21[5] = v12;
          v21[4] = v23;
          WdLogEvent5_WdLowResource(v21);
          break;
        }
LABEL_29:
        v8 = a3;
        goto LABEL_4;
      default:
        goto LABEL_4;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_29;
  }
  v25 = WdLogNewEntry5_WdWarning(this, a2);
  WdLogEvent5_WdWarning(v25);
  return 3221226166LL;
}
