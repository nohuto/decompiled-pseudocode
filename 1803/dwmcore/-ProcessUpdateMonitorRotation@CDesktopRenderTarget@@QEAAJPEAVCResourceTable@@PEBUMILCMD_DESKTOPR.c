/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1801580A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180062E94 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessUpdateMonitorRotation(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *a3)
{
  __int64 *v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v11) = *((_DWORD *)a3 + 2);
  v5 = (__int64 *)*((_QWORD *)this + 22);
  DWORD1(v11) = *((_DWORD *)a3 + 3);
  v6 = *((_DWORD *)a3 + 10);
  v7 = *v5;
  *((_QWORD *)&v11 + 1) = *((_QWORD *)a3 + 2);
  v12 = *(_OWORD *)((char *)a3 + 24);
  CHwndRenderTarget::SetTransformParameters(v7, v6, &v12, &v11);
  v8 = 0LL;
  *(_BYTE *)(**((_QWORD **)this + 22) + 858LL) = 1;
  if ( *((_DWORD *)this + 50) )
  {
    do
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *(_BYTE *)(v9 + 858) = 1;
    }
    while ( (unsigned int)v8 < *((_DWORD *)this + 50) );
    *((float *)this + 70) = (float)*((int *)a3 + 3);
    *((float *)this + 72) = (float)*((int *)a3 + 5);
    *((float *)this + 69) = (float)*((int *)a3 + 2);
    *((float *)this + 71) = (float)*((int *)a3 + 4);
  }
  return 0LL;
}
