/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004DCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000122C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004F1A0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  VIDMM_CPU_HOST_APERTURE *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 488) )
  {
    LODWORD(v4) = VIDMM_SEGMENT::ReserveResource(a1, a2);
    if ( (int)v4 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v6 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488);
      if ( v6 )
      {
        v7 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v6, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v4 = v7;
        if ( v7 < 0 )
        {
          v10 = WdLogNewEntry5_WdWarning(v8);
          *(_QWORD *)(v10 + 24) = a1;
          *(_QWORD *)(v10 + 32) = v4;
          WdLogEvent5_WdWarning(v10);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            *(_QWORD *)(a2 + 208),
            *(_QWORD *)(a2 + 16));
          *(_QWORD *)(a2 + 224) = 0LL;
          *(_QWORD *)(a2 + 208) = 0LL;
        }
      }
    }
    return (unsigned int)v4;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(a1);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdWarning(v9);
    return 3221225473LL;
  }
}
