/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C009E868
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0023740 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0004DC8 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0005084 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C0022868 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  char *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  VIDMM_GLOBAL *v6; // rcx
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 )
    VidSchiReleaseSyncObjectReference(v2);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      do
      {
        VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * v4));
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 8) );
      v3 = (void *)*((_QWORD *)this + 8);
    }
    operator delete(v3);
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
        (struct _KTHREAD **)(*(_QWORD *)v5 + 56LL));
      if ( *((_QWORD *)this + 14) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
      v5 = *((_QWORD *)this + 11);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(v5 + 24), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v7 = (volatile signed __int32 **)((char *)this + 96);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (volatile signed __int32 *)v7 )
      break;
    if ( *((volatile signed __int32 ***)v8 + 1) != v7
      || (v9 = *(volatile signed __int32 **)v8, *(volatile signed __int32 **)(*(_QWORD *)v8 + 8LL) != v8) )
    {
      __fastfail(3u);
    }
    *v7 = v9;
    *((_QWORD *)v9 + 1) = v7;
    *((_QWORD *)v8 + 1) = 0LL;
    *(_QWORD *)v8 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v8 - 2);
  }
}
