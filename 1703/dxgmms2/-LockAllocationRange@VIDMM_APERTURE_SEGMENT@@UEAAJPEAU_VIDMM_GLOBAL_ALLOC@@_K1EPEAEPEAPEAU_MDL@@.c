/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C009F470
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0015C80 (memmove.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0048320 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0048608 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00486A8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0056C04 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        size_t a4,
        char a5,
        unsigned __int8 *a6,
        struct _MDL **a7)
{
  unsigned __int8 *v11; // rcx
  int v12; // r13d
  PRKPROCESS **v13; // rbx
  _QWORD *v14; // rax
  char *v15; // rax
  VIDMM_GLOBAL *v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rcx
  int v20; // ebx
  _QWORD *v21; // rax
  enum _LOCK_OPERATION v22; // [rsp+28h] [rbp-D0h]
  char v23; // [rsp+40h] [rbp-B8h]
  void *v24; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v25; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v26; // [rsp+58h] [rbp-A0h]
  size_t Size; // [rsp+60h] [rbp-98h]
  VIDMM_APERTURE_SEGMENT *v28; // [rsp+68h] [rbp-90h]
  PRKPROCESS **v29; // [rsp+70h] [rbp-88h]
  struct _VIDMM_GLOBAL_ALLOC *v30; // [rsp+78h] [rbp-80h]
  __int64 v31; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v28 = this;
  v30 = a2;
  v31 = a3;
  Size = a4;
  v11 = a6;
  v26 = a6;
  v25 = a7;
  v12 = 0;
  v23 = 0;
  *a7 = 0LL;
  v13 = (PRKPROCESS **)*((_QWORD *)a2 + 13);
  v24 = v13;
  v29 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = v26;
  }
  *v11 = 0;
  if ( *((_BYTE *)a2 + 289) )
  {
    if ( a3 == *((_QWORD *)a2 + 34) && a4 == *((_QWORD *)a2 + 35) )
    {
      *v11 = 1;
      return 0LL;
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
    _guard_dispatch_icall_fptr();
    _guard_dispatch_icall_fptr();
    v13 = (PRKPROCESS **)v24;
  }
  if ( (**((_DWORD **)a2 + 65) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(*v13[1], &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v23 = 1;
    v15 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v24, 0);
    if ( v15 )
    {
      memmove(*((void **)this + 35), v15, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v24);
    }
    else
    {
      memset(*((void **)this + 35), 0, a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v25 = *(struct _MDL **)(*((_QWORD *)this + 36) + 8LL);
    goto LABEL_24;
  }
  v16 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 6464LL);
  if ( ((unsigned __int8)v16 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C003C554);
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = 1550LL;
    WdLogEvent5_WdLowResource(v17);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v20 = VIDMM_GLOBAL::ProbeAndLockAllocation(v16, (struct _VIDMM_LOCAL_ALLOC *)v13, a2, a3, a4, v22, this, 1u);
    if ( v20 >= 0 )
    {
LABEL_24:
      *((_QWORD *)a2 + 35) = a4;
      *((_QWORD *)a2 + 34) = a3;
      *((_BYTE *)a2 + 288) = v23;
      *((_BYTE *)a2 + 289) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C003C554);
    v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19);
    v21[3] = a2;
    v21[4] = a3;
    v21[5] = a4;
    WdLogEvent5_WdLowResource(v21);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v20;
  }
}
