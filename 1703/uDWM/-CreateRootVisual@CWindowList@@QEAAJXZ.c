/*
 * XREFs of ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18004217C
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043D10 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CVisual **this)
{
  CVisual **v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  CVisual *v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x427u);
  }
  else
  {
    v4 = *v1;
    v9 = 0x7FFFFFFF;
    v10 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(CVisual *, int *))(*(_QWORD *)v4 + 80LL))(v4, &v9);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x42Au);
    }
    else
    {
      v6 = CVisual::RenderRecursive(*v1);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x42Du);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x42Fu);
      }
    }
  }
  return v3;
}
