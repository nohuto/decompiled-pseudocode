/*
 * XREFs of RawCleanup @ 0x140494D90
 * Callers:
 *     RawDispatch @ 0x1404948A0 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x1400066DC (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     IoRemoveLinkShareAccess @ 0x140494E50 (IoRemoveLinkShareAccess.c)
 *     FsRtlNotifyVolumeEvent @ 0x1405E66C0 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r14
  char v7; // bp
  void *v8; // rax

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  IoRemoveLinkShareAccess(*(_QWORD *)(a3 + 48), (char *)&AdvancedHeader[1].Resource + 4, 0LL);
  v8 = *(void **)(a3 + 48);
  if ( v8 == *(void **)&AdvancedHeader[2].NodeTypeCode )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
    v8 = *(void **)(a3 + 48);
  }
  if ( v8 == AdvancedHeader[1].ReservedContext )
  {
    AdvancedHeader[1].ReservedContext = 0LL;
    RawInitiateDeleteVolume(AdvancedHeader, 1, 0);
  }
  KeReleaseGuardedMutex(p_PagingIoResource);
  if ( v7 )
    FsRtlNotifyVolumeEvent(*(PFILE_OBJECT *)(a3 + 48), 5u);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
