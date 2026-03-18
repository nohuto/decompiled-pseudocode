/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800B0300
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800AFCD0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180145010 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800B01C4 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800B01E8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  CResponseItem *v3; // rcx

  v2 = 0;
  v3 = (CResponseItem *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 292) )
    {
      CResponseItem::ReleaseResponseRef(v3);
      *((_BYTE *)this + 292) = 0;
    }
    CResponseItem::QueueResponse(*((CResponseItem **)this + 35));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 8LL))(*((_QWORD *)this + 35));
    *((_QWORD *)this + 35) = 0LL;
    *((_DWORD *)this + 72) = 0;
    return 1;
  }
  return v2;
}
