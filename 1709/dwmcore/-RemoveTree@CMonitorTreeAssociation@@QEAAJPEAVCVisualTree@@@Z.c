/*
 * XREFs of ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800BB064
 * Callers:
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180016FD8 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180134910 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801BEDF4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::RemoveTree(CMonitorTreeAssociation *this, struct CVisualTree *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 v6; // rbp
  CMILRefCountBase *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 10) - 1;
  if ( v3 >= 0 )
  {
    v6 = 16LL * v3;
    do
    {
      v7 = *(CMILRefCountBase **)(*((_QWORD *)this + 2) + v6 + 8);
      if ( v7 == a2 )
      {
        CMILRefCountBase::Release(v7);
        v8 = *((_DWORD *)this + 10);
        if ( v3 >= v8 )
        {
          v2 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x64u);
          return v2;
        }
        v9 = *((_QWORD *)this + 2);
        v10 = v3;
        if ( v3 < v8 - 1 )
        {
          do
          {
            v12 = 2LL * v10;
            v13 = 2LL * ++v10;
            *(_OWORD *)(v9 + 8 * v12) = *(_OWORD *)(v9 + 8 * v13);
          }
          while ( v10 < *((_DWORD *)this + 10) - 1 );
        }
        --*((_DWORD *)this + 10);
      }
      v6 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return v2;
}
