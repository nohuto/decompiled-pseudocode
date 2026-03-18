/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000122C
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004DCF0 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C0079718 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C000111C (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001638 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C0099434 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C009944C (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rax
  struct _VIDMM_GLOBAL_ALLOC *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v17; // r15
  VIDMM_CPU_HOST_APERTURE *v18; // r14
  VIDMM_CPU_HOST_APERTURE *v19; // rcx
  _QWORD *v20; // rax
  char *v21; // r13
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // r12
  VIDMM_PROCESS *v25; // rcx
  _QWORD *v26; // rax
  __int64 v28; // [rsp+50h] [rbp-78h]
  struct _KAPC_STATE v29; // [rsp+58h] [rbp-70h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = a2;
  v5 = (unsigned int)(*(_DWORD *)(v3 + 376) - 1);
  if ( *((_QWORD *)a2 + 28) )
    v6 = *((_QWORD *)a2 + 27);
  else
    v6 = *((_QWORD *)a2 + 18);
  v7 = *(unsigned int *)(v3 + 376);
  v8 = *((_DWORD *)this + 15);
  v9 = v6 & ~v5;
  v10 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) / v7;
  v11 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) % v7;
  v12 = v10;
  if ( v8 < (unsigned int)v10 )
  {
    v17 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v18 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v19 = v18;
    if ( v18 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_12:
      if ( v8 < (unsigned int)v10 )
      {
        *((_DWORD *)v4 + 118) = -1;
        *((_DWORD *)v4 + 119) = -1;
        v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v11);
        v20[3] = v12;
        v20[4] = v8;
        v20[5] = v7;
        WdLogEvent5_WdEvent(v20);
        return 3221225495LL;
      }
    }
    else
    {
      v11 = *((_QWORD *)this + 5);
      while ( 1 )
      {
        v8 += *(_DWORD *)(v11 + 4LL * *((unsigned int *)v19 + 5));
        if ( v8 >= (unsigned int)v10 )
          break;
        v19 = *(VIDMM_CPU_HOST_APERTURE **)v19;
        if ( v19 == v17 )
          goto LABEL_12;
      }
    }
    if ( v18 != v17 )
    {
      do
      {
        v21 = (char *)v18 - 456;
        v18 = *(VIDMM_CPU_HOST_APERTURE **)v18;
        v22 = *((_QWORD *)v21 + 13);
        if ( v22 && (*(_BYTE *)(v22 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace();
          VIDMM_PROCESS::SafeAttach(*(VIDMM_PROCESS **)(v22 + 8), &v29);
          v23 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL),
                  *(_QWORD *)(*(_QWORD *)(v22 + 8) + 24LL),
                  *(_QWORD *)(v22 + 24),
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v21);
          v24 = v23;
          v25 = (VIDMM_PROCESS *)(v23 + 0x80000000);
          if ( ((unsigned int)v25 & 0x80000000) == 0 && v23 != -1073741558 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v26[7] = 0LL;
            v26[3] = 270LL;
            v26[4] = 4LL;
            v26[5] = 3LL;
            v26[6] = v24;
            WdLogEvent5_WdCriticalError(v26);
          }
          *(_BYTE *)(v22 + 32) &= ~1u;
          VIDMM_PROCESS::SafeDetach(v25, &v29);
        }
        VIDMM_CPU_HOST_APERTURE::UnmapRange(this, (struct _VIDMM_GLOBAL_ALLOC *)v21);
        VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v21 + 472));
      }
      while ( *((_DWORD *)this + 15) < v12 && v18 != v17 );
      v4 = a2;
    }
  }
  v13 = *((unsigned int *)this + 16);
  v14 = v12 - 1;
  LODWORD(v28) = *((_DWORD *)this + 16);
  if ( v12 != 1 )
  {
    do
    {
      v13 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v13);
      --v14;
    }
    while ( v14 );
  }
  v15 = *((_QWORD *)this + 5);
  HIDWORD(v28) = v13;
  *((_DWORD *)this + 16) = *(_DWORD *)(v15 + 4 * v13);
  *(_DWORD *)(v15 + 4LL * (unsigned int)v13) = v12;
  *((_DWORD *)this + 15) -= v12;
  *((_QWORD *)v4 + 59) = v28;
  return 0LL;
}
