/*
 * XREFs of ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00AEF30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005E3F4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0078B70 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C007A6B4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::LockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
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
  __int64 v16; // r8
  __int64 v17; // r9
  VIDMM_GLOBAL *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  _QWORD *v23; // rax
  enum _LOCK_OPERATION v24; // [rsp+28h] [rbp-D0h]
  char v25; // [rsp+40h] [rbp-B8h]
  void *v26; // [rsp+48h] [rbp-B0h] BYREF
  struct _MDL **v27; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v28; // [rsp+58h] [rbp-A0h]
  size_t Size; // [rsp+60h] [rbp-98h]
  VIDMM_APERTURE_SEGMENT *v30; // [rsp+68h] [rbp-90h]
  PRKPROCESS **v31; // [rsp+70h] [rbp-88h]
  struct _VIDMM_GLOBAL_ALLOC *v32; // [rsp+78h] [rbp-80h]
  unsigned __int64 v33; // [rsp+80h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v30 = this;
  v32 = a2;
  v33 = a3;
  Size = a4;
  v11 = a6;
  v28 = a6;
  v27 = a7;
  v12 = 0;
  v25 = 0;
  *a7 = 0LL;
  v13 = (PRKPROCESS **)*((_QWORD *)a2 + 13);
  v26 = v13;
  v31 = v13;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a6);
    v14[3] = a2;
    v14[4] = a3;
    v14[5] = a4;
    v11 = v28;
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
    v13 = (PRKPROCESS **)v26;
  }
  if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v13 )
  {
    KeStackAttachProcess(*v13[1], &ApcState);
    v12 = 1;
  }
  if ( a5 )
  {
    v25 = 1;
    v15 = VidMmMapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, a3, a4, &v26, 0);
    if ( v15 )
    {
      memmove(*((void **)this + 32), v15, a4);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v13, v26, v16, v17);
    }
    else
    {
      memset(*((void **)this + 32), 0, a4);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    *v27 = *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL);
    goto LABEL_16;
  }
  v19 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)this + 1) + 7040LL);
  if ( ((unsigned __int8)v19 & 4) != 0 )
  {
    _InterlockedIncrement(&dword_1C0047564);
    v20 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v20 + 24) = 1562LL;
    WdLogEvent5_WdLowResource(v20);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return 3223191809LL;
  }
  else
  {
    v22 = VIDMM_GLOBAL::ProbeAndLockAllocation(v19, (struct _VIDMM_LOCAL_ALLOC *)v13, a2, a3, a4, v24, this, 1u);
    if ( v22 >= 0 )
    {
LABEL_16:
      *((_QWORD *)a2 + 35) = a4;
      *((_QWORD *)a2 + 34) = a3;
      *((_BYTE *)a2 + 288) = v25;
      *((_BYTE *)a2 + 289) = 1;
      if ( v12 )
        KeUnstackDetachProcess(&ApcState);
      return 0LL;
    }
    _InterlockedIncrement(&dword_1C0047564);
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v21);
    v23[3] = a2;
    v23[4] = a3;
    v23[5] = a4;
    WdLogEvent5_WdLowResource(v23);
    if ( v12 )
      KeUnstackDetachProcess(&ApcState);
    return (unsigned int)v22;
  }
}
