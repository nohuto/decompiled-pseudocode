/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064540
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00113A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011400 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067F38 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_GLOBAL *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        enum _MM_ROTATE_DIRECTION a4,
        struct _MDL *a5,
        SIZE_T Size,
        int (*a7)(struct _MDL *, struct _MDL *, void *),
        void *a8,
        int a9)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  struct VIDMM_GLOBAL *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // r8
  struct _VIDMM_GLOBAL_ALLOC *v21; // [rsp+40h] [rbp-28h]
  _BYTE v22[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22, v11, v12);
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerEnter, v15, 8005);
  v18 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, v13, a4, a5, Size, a7, a8, a9, v21);
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v19, 8005);
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v16, v19);
  return v18;
}
