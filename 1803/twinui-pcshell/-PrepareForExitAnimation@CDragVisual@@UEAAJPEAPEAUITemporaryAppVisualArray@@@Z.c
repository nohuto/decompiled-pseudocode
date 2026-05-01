/*
 * XREFs of ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F1580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1802F2880 (-_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 */

__int64 __fastcall CDragVisual::PrepareForExitAnimation(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  int v4; // esi
  __int64 v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0LL;
  v4 = 0;
  if ( *((_BYTE *)this + 255)
    || !*((_QWORD *)this + 11)
    || (v7 = *((_QWORD *)this + 6),
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7),
        DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v6, &v7, (__int64)&GUID_NULL, 0LL),
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7),
        v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
               *((_QWORD *)this + 11),
               (char *)this + 216,
               0LL,
               0LL),
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v6),
        v4 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CDragVisual::_CreateTempAppVisuals((CDragVisual *)((char *)this - 24), a2);
  }
  return (unsigned int)v4;
}
