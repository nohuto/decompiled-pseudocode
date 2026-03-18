/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAXAEBUtagRECT@@@Z @ 0x18015D1F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18015CA7C (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET.c)
 * Callees:
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800292B4 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015CE10 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::SetWindowBounds(CRemoteAppRenderTarget *this, struct tagRECT *a2)
{
  char *v2; // rbx
  _OWORD *v4; // rdx
  bool v5; // zf

  v2 = (char *)this + 288;
  if ( !operator==((_DWORD *)this + 72, a2) )
  {
    v5 = *((_BYTE *)this + 304) == 0;
    *(_OWORD *)v2 = *v4;
    if ( !v5 )
    {
      if ( *((_DWORD *)this + 22) != *((_DWORD *)v2 + 2) - *(_DWORD *)v2
        || *((_DWORD *)this + 23) != *((_DWORD *)v2 + 3) - *((_DWORD *)v2 + 1) )
      {
        CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)((char *)this + 64));
      }
      *((_WORD *)this + 136) = 32085;
      *((_OWORD *)this + 13) = _xmm;
      *((_OWORD *)this + 14) = _xmm;
      *((_OWORD *)this + 15) = _xmm;
      *((_OWORD *)this + 16) = _xmm;
      CMILMatrix::Translate(
        (CRemoteAppRenderTarget *)((char *)this + 208),
        (float)-*(_DWORD *)v2,
        (float)-*((_DWORD *)this + 73));
    }
    *((_DWORD *)this + 22) = *((_DWORD *)v2 + 2) - *(_DWORD *)v2;
    *((_DWORD *)this + 23) = *((_DWORD *)v2 + 3) - *((_DWORD *)v2 + 1);
    *((_BYTE *)this + 161) = 1;
  }
}
