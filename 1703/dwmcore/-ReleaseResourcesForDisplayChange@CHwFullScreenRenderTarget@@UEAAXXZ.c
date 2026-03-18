/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800CDBD0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801A0700 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  CD3DDeviceLevel1 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) )
  {
    v5 = *(_QWORD *)this;
    v6 = 0LL;
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, CD3DDeviceLevel1 **))(v5 + 352))(this, 0LL, &v6);
    ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v6);
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 21);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this - 22);
  v6 = 0LL;
  (*(void (__fastcall **)(char *, CD3DDeviceLevel1 **))(v4 + 208))((char *)this - 176, &v6);
  ReleaseInterface<CD3DVidMemOnlyTexture>((CMILPoolResource **)this - 1);
  if ( v6 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v6);
}
