/*
 * XREFs of ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800C9130
 * Callers:
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x18006942C (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180069FC0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801A428C (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall CMonitorTreeAssociation::RemoveTree(CMonitorTreeAssociation *this, struct CVisualTree *a2)
{
  unsigned int v2; // esi
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x64u);
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
        v2 = 0;
      }
      v6 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return v2;
}
