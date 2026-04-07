/*
 * XREFs of ??1CTopLevelWindow@@MEAA@XZ @ 0x18002AD8C
 * Callers:
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180024840 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025A70 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002ABA4 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rax
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  bool v31; // zf
  char v32; // al

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
  v7 = this[100];
  if ( v7 )
  {
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v7 + 16LL))(v7);
    this[100] = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
  v8 = this[98];
  if ( v8 )
  {
    CBaseObject::Release(v8);
    this[98] = 0LL;
  }
  v9 = this[97];
  if ( v9 )
  {
    CBaseObject::Release(v9);
    this[97] = 0LL;
  }
  v10 = this[68];
  if ( v10 )
  {
    CBaseObject::Release(v10);
    this[68] = 0LL;
  }
  v11 = this[69];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    this[69] = 0LL;
  }
  v12 = this[32];
  if ( v12 )
  {
    CBaseObject::Release(v12);
    this[32] = 0LL;
  }
  v13 = this[64];
  if ( v13 )
  {
    CBaseObject::Release(v13);
    this[64] = 0LL;
  }
  v14 = this[33];
  if ( v14 )
  {
    CBaseObject::Release(v14);
    this[33] = 0LL;
  }
  v15 = this[66];
  if ( v15 )
  {
    CBaseObject::Release(v15);
    this[66] = 0LL;
  }
  v16 = this[67];
  if ( v16 )
  {
    CBaseObject::Release(v16);
    this[67] = 0LL;
  }
  v17 = this[34];
  if ( v17 )
  {
    CBaseObject::Release(v17);
    this[34] = 0LL;
  }
  v18 = this[59];
  if ( v18 )
  {
    CBaseObject::Release(v18);
    this[59] = 0LL;
  }
  v19 = this[65];
  if ( v19 )
  {
    CBaseObject::Release(v19);
    this[65] = 0LL;
  }
  v20 = this[91];
  if ( v20 )
  {
    CBaseObject::Release(v20);
    this[91] = 0LL;
  }
  v21 = this[92];
  if ( v21 )
  {
    CBaseObject::Release(v21);
    this[92] = 0LL;
  }
  v22 = this[70];
  if ( v22 )
  {
    CBaseObject::Release(v22);
    this[70] = 0LL;
  }
  v23 = this[36];
  if ( v23 )
  {
    CBaseObject::Release(v23);
    this[36] = 0LL;
  }
  v24 = this[35];
  if ( v24 )
  {
    CBaseObject::Release(v24);
    this[35] = 0LL;
  }
  v25 = this[71];
  if ( v25 )
  {
    CBaseObject::Release(v25);
    this[71] = 0LL;
  }
  v26 = this[72];
  if ( v26 )
  {
    CBaseObject::Release(v26);
    this[72] = 0LL;
  }
  v27 = this[84];
  if ( v27 )
  {
    v31 = (*((_DWORD *)v27 + 2))-- == 1;
    v32 = CDesktopManager::s_fTimelineDirty;
    if ( v31 )
      v32 = 1;
    this[84] = 0LL;
    CDesktopManager::s_fTimelineDirty = v32;
  }
  v28 = this[93];
  if ( v28 )
  {
    CBaseObject::Release(v28);
    this[93] = 0LL;
  }
  v29 = this[94];
  if ( v29 )
  {
    CBaseObject::Release(v29);
    this[94] = 0LL;
  }
  v30 = this[95];
  if ( v30 )
  {
    CBaseObject::Release(v30);
    this[95] = 0LL;
  }
  CVisual::~CVisual((CVisual *)this);
}
