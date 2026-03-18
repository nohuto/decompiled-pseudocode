/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C67C
 * Callers:
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010AFD4 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0019A3C (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0028204 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C010B0CC (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  struct DXGALLOCATION *v10; // r9
  char IsAllocationInPresentQueue; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned int v18; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v8) = 0;
  if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, (struct DXGALLOCATION *)a3) )
  {
    v9 = *((_QWORD *)this + 2);
    v18 = 0;
    IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                   *(VIDMM_EXPORT **)(v9 + 544),
                                   *(struct VIDMM_GLOBAL **)(v9 + 552),
                                   a3[3],
                                   &v18);
    if ( a4 )
      COREDEVICEACCESS::Release(a4);
    if ( IsAllocationInPresentQueue )
    {
      if ( v18 <= 1 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 696LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                a3[3],
                a2);
        v8 = v12;
        if ( v12 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v16[3] = a3;
          v16[4] = a3[3];
          v16[5] = v8;
          WdLogEvent5_WdWarning(v16);
        }
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary((struct _KTHREAD **)this, a2, (const struct DXGALLOCATION *)a3, v10);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck(a4);
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
      a3[3]);
  }
  return (unsigned int)v8;
}
