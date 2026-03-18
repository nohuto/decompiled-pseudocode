/*
 * XREFs of ?ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A3770
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1C0028430 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D878 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ResumeDevicesOnAllocationCB(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        bool *a3,
        void *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdi
  _QWORD **v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  VIDMM_DEVICE *v11; // rcx

  if ( a2 )
  {
    if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    {
      if ( *((_BYTE *)this + 497) )
        VidSchiUpdateFlipQueueEntriesForMove(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 416LL), a2);
      *((_DWORD *)a2 + 20) &= ~0x400u;
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    v7 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    while ( v7 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      v8 = (_QWORD **)((char *)v7 - 16);
      v7 = *(struct _VIDMM_GLOBAL_ALLOC **)v7;
      v9 = *v8;
      while ( v9 != v8 )
      {
        v10 = v9 - 5;
        v9 = (_QWORD *)*v9;
        v11 = (VIDMM_DEVICE *)v10[1];
        if ( (*((_DWORD *)v11 + 13) & 7) == 0 )
          VIDMM_DEVICE::ResumeSchedulerDevice(v11, 1);
      }
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v5, v6);
  }
  return 0LL;
}
