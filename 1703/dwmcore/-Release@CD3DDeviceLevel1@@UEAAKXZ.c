/*
 * XREFs of ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180077780
 * Callers:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Release@CD3DDeviceLevel1@@WBOI@EAAKXZ @ 0x1800D5F50 (-Release@CD3DDeviceLevel1@@WBOI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Release(CD3DDeviceLevel1 *this)
{
  char *v1; // r8
  unsigned __int32 v2; // ebx
  void (__fastcall ***v4)(_QWORD, char *); // rcx

  v1 = (char *)this + 488;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 124);
  if ( !v2 )
  {
    v4 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 63);
    if ( v4 )
      (**v4)(v4, v1);
    else
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  }
  return v2;
}
