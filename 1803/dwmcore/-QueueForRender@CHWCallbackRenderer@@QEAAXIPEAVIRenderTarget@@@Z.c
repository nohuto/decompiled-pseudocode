/*
 * XREFs of ?QueueForRender@CHWCallbackRenderer@@QEAAXIPEAVIRenderTarget@@@Z @ 0x180059CA4
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180095F00 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180096530 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHWCallbackRenderer::QueueForRender(CHWCallbackRenderer *this, int a2, struct IRenderTarget *a3)
{
  int v5; // edx
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  *((_DWORD *)this + 23) = a2;
  v5 = *(_DWORD *)((*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a3 + 24LL))(a3, v7) + 8);
  *((_DWORD *)this + 28) = v5;
  if ( v5 == 1 )
    *((float *)this + 29) = (*(float (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a3 + 168LL))(a3);
  v6 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a3 + 112LL))(a3);
  *((float *)this + 24) = 2.0 / (float)*(int *)(v6 + 140);
  LODWORD(v6) = *(_DWORD *)(v6 + 144);
  *((_DWORD *)this + 26) = -1082130432;
  *((_DWORD *)this + 27) = 1065353216;
  *((float *)this + 25) = -2.0 / (float)(int)v6;
}
