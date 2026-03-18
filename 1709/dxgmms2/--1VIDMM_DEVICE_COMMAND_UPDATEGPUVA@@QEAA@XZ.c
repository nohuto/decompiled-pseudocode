/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C00996F0
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0020FC0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C002033C (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  char *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rax
  VIDMM_GLOBAL *v5; // rcx
  char *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)*((_QWORD *)this + 9);
  if ( v2 )
    VidSchiReleaseSyncObjectReference(v2);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * i));
    operator delete(*((void **)this + 8));
  }
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
        (struct _KTHREAD **)(*(_QWORD *)v4 + 56LL));
      if ( *((_QWORD *)this + 14) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 11) + 24LL), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v6 = (char *)this + 96;
  while ( *(char **)v6 != v6 )
  {
    v7 = *(__int64 **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *v7, *(__int64 **)(*v7 + 8) != v7) )
      __fastfail(3u);
    *(_QWORD *)v6 = v8;
    v9 = v7 - 1;
    *(_QWORD *)(v8 + 8) = v6;
    v9[1] = 0LL;
    v9[2] = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v9);
  }
}
