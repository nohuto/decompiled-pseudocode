/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x18001F50C
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180019470 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x180019520 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001A5A4 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001F2BC (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18001FB24 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CBaseObject **this)
{
  CBaseObject **v2; // rdi
  unsigned int i; // esi
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rax
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  bool v33; // zf
  char v34; // al
  bool v35; // [rsp+40h] [rbp+8h] BYREF

  *this = (CBaseObject *)&CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation((CTopLevelWindow *)this);
  CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  if ( ((_BYTE)this[30] & 0x54) == 0 )
    SetWindowRgnEx(*((_QWORD *)this[90] + 5), 0LL, 1LL);
  v2 = this + 60;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  v4 = 0;
  v5 = (__int64 *)(this + 37);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 && v6 )
        (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
      *v5 = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x16 );
  CTopLevelWindow::ReleaseHolographicSlate((CTopLevelWindow *)this);
  v7 = this[102];
  if ( v7 )
  {
    (*(void (__fastcall **)(CBaseObject *, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, 0LL);
    v32 = this[102];
    if ( v32 )
    {
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v32 + 16LL))(v32);
      this[102] = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget((CTopLevelWindow *)this, &v35);
  v8 = this[98];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[98] = 0LL;
  }
  v9 = this[68];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[68] = 0LL;
  }
  v10 = this[69];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[69] = 0LL;
  }
  v11 = this[32];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[32] = 0LL;
  }
  v12 = this[64];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    this[64] = 0LL;
  }
  v13 = this[33];
  if ( v13 )
  {
    CBaseObject::Release(v13);
    this[33] = 0LL;
  }
  v14 = this[66];
  if ( v14 )
  {
    CBaseObject::Release(v14);
    this[66] = 0LL;
  }
  v15 = this[67];
  if ( v15 )
  {
    CBaseObject::Release(v15);
    this[67] = 0LL;
  }
  v16 = this[34];
  if ( v16 )
  {
    CBaseObject::Release(v16);
    this[34] = 0LL;
  }
  v17 = this[59];
  if ( v17 )
  {
    CBaseObject::Release(v17);
    this[59] = 0LL;
  }
  v18 = this[65];
  if ( v18 )
  {
    CBaseObject::Release(v18);
    this[65] = 0LL;
  }
  v19 = this[91];
  if ( v19 )
  {
    CBaseObject::Release(v19);
    this[91] = 0LL;
  }
  v20 = this[92];
  if ( v20 )
  {
    CBaseObject::Release(v20);
    this[92] = 0LL;
  }
  v21 = this[70];
  if ( v21 )
  {
    CBaseObject::Release(v21);
    this[70] = 0LL;
  }
  v22 = this[36];
  if ( v22 )
  {
    CBaseObject::Release(v22);
    this[36] = 0LL;
  }
  v23 = this[35];
  if ( v23 )
  {
    CBaseObject::Release(v23);
    this[35] = 0LL;
  }
  v24 = this[71];
  if ( v24 )
  {
    CBaseObject::Release(v24);
    this[71] = 0LL;
  }
  v25 = this[72];
  if ( v25 )
  {
    CBaseObject::Release(v25);
    this[72] = 0LL;
  }
  v26 = this[84];
  if ( v26 )
  {
    v33 = (*((_DWORD *)v26 + 2))-- == 1;
    v34 = CDesktopManager::s_fTimelineDirty;
    if ( v33 )
      v34 = 1;
    this[84] = 0LL;
    CDesktopManager::s_fTimelineDirty = v34;
  }
  v27 = this[93];
  if ( v27 )
  {
    CBaseObject::Release(v27);
    this[93] = 0LL;
  }
  v28 = this[94];
  if ( v28 )
  {
    CBaseObject::Release(v28);
    this[94] = 0LL;
  }
  v29 = this[95];
  if ( v29 )
  {
    CBaseObject::Release(v29);
    this[95] = 0LL;
  }
  v30 = this[100];
  if ( v30 )
  {
    CBaseObject::Release(v30);
    this[100] = 0LL;
  }
  v31 = this[101];
  if ( (unsigned __int64)v31 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v31);
  CVisual::~CVisual((CVisual *)this);
}
