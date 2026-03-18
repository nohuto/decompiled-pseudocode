/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x18014778C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x18006ED38 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessUpdateMonitorRotation(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *a3)
{
  __int64 *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r10
  int *v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  LODWORD(v11) = *((_DWORD *)a3 + 2);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  DWORD1(v11) = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 10);
  v5 = *v3;
  *((_QWORD *)&v11 + 1) = *((_QWORD *)a3 + 2);
  v12 = *(_OWORD *)((char *)a3 + 24);
  CHwndRenderTarget::SetTransformParameters(v5, v4, &v12, &v11);
  v8 = 0LL;
  if ( *(_DWORD *)(v6 + 144) )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 120) + 8 * v8);
      v8 = (unsigned int)(v8 + 1);
      *(_BYTE *)(v9 + 802) = 1;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 144) );
    *(float *)(v6 + 320) = (float)v7[3];
    *(float *)(v6 + 328) = (float)v7[5];
    *(float *)(v6 + 316) = (float)v7[2];
    *(float *)(v6 + 324) = (float)v7[4];
  }
  return 0LL;
}
