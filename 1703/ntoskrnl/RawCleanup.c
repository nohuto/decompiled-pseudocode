/*
 * XREFs of RawCleanup @ 0x140421EB0
 * Callers:
 *     RawDispatch @ 0x1404219E0 (RawDispatch.c)
 * Callees:
 *     RawInitiateDeleteVolume @ 0x140005468 (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     IoRemoveShareAccess @ 0x140421F70 (IoRemoveShareAccess.c)
 *     FsRtlNotifyVolumeEvent @ 0x1405757A0 (FsRtlNotifyVolumeEvent.c)
 */

__int64 __fastcall RawCleanup(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r14
  char v7; // bp

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  v7 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  IoRemoveShareAccess(*(PFILE_OBJECT *)(a3 + 48), (PSHARE_ACCESS)((char *)&AdvancedHeader[1].Resource + 4));
  if ( *(_QWORD *)(a3 + 48) == *(_QWORD *)&AdvancedHeader[2].NodeTypeCode )
  {
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode &= ~1u;
    v7 = 1;
    *(_QWORD *)&AdvancedHeader[2].NodeTypeCode = 0LL;
  }
  if ( *(void **)(a3 + 48) == AdvancedHeader[1].ReservedContext )
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
