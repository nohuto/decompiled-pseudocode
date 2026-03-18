/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180132C00 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800BB064 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800C0DC8 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x18013BBF8 (-RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVCDesktopRenderTarget@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::~CDesktopRenderTarget(CDesktopRenderTarget *this)
{
  _QWORD *v2; // rdi
  struct CVisualTree *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // edx
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx

  v2 = (_QWORD *)((char *)this + 112);
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  v3 = (struct CVisualTree *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  v4 = *((_QWORD *)this + 2);
  *v2 = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(v4 + 24), v3);
  CUINTDesktopAssociation::RemoveDesktopRenderTarget((CUINTDesktopAssociation *)(*((_QWORD *)this + 2) + 32LL), this);
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 72LL);
  v7 = *(_DWORD *)(v6 + 80);
  v8 = *(_QWORD *)(v6 + 56);
  if ( v7 )
  {
    do
    {
      if ( v2 == *(_QWORD **)(v8 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v7 );
  }
  if ( (unsigned int)v5 < v7 )
  {
    if ( (unsigned int)v5 < v7 - 1 )
    {
      do
      {
        v9 = (unsigned int)(v5 + 1);
        *(_QWORD *)(v8 + 8 * v5) = *(_QWORD *)(v8 + 8 * v9);
        v5 = v9;
      }
      while ( (unsigned int)v9 < *(_DWORD *)(v6 + 80) - 1 );
    }
    --*(_DWORD *)(v6 + 80);
  }
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  SAFE_DELETE<CComposeTop>((CComposeTop **)this + 46, v10);
  v11 = (void *)*((_QWORD *)this + 48);
  if ( v11 )
    CloseHandle(v11);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
    *(_BYTE *)(v12 + 32) = 0;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 49));
  *((_QWORD *)this + 49) = 0LL;
  v13 = *((_QWORD *)this + 51);
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    *((_QWORD *)this + 51) = 0LL;
  }
  ReleaseInterface<CDisplay>((__int64 *)this + 54);
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 55);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  CRenderTarget::~CRenderTarget(this);
}
