/*
 * XREFs of ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180034C3C
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180044550 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x1800454C8 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::RemoveTree(CMonitorTreeAssociation *this, struct CVisualTree *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 v6; // rsi
  CMILRefCountBase *v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned int i; // r8d
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
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x64u);
          return v2;
        }
        v9 = *((_QWORD *)this + 2);
        for ( i = v3; i < v8 - 1; v8 = *((_DWORD *)this + 10) )
        {
          v12 = 2LL * i;
          v13 = 2LL * ++i;
          *(_OWORD *)(v9 + 8 * v12) = *(_OWORD *)(v9 + 8 * v13);
        }
        *((_DWORD *)this + 10) = v8 - 1;
      }
      v6 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
  return v2;
}
