/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AF9F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005E324 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0078B70 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3)
{
  int v6; // r15d
  __int64 v7; // r14
  size_t *v8; // rsi
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v6 = 0;
  v7 = *((_QWORD *)a2 + 13);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 288) )
  {
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v7 )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v7 + 8), &ApcState);
      v6 = 1;
    }
    v8 = (size_t *)((char *)a2 + 280);
    v9 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35), &v12, 0);
    if ( v9 )
    {
      memmove(v9, *((const void **)this + 32), *v8);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, v12, v10, v11);
    }
    else
    {
      memset(*((void **)this + 32), 0, *v8);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    if ( v6 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v8 = (size_t *)((char *)a2 + 280);
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      (struct _VIDMM_LOCAL_ALLOC *)v7,
      *((_QWORD *)a2 + 34),
      *((_QWORD *)a2 + 35),
      1u,
      a3);
  }
  *((_QWORD *)a2 + 34) = 0LL;
  *v8 = 0LL;
  *((_WORD *)a2 + 144) = 0;
}
