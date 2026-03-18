/*
 * XREFs of ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C
 * Callers:
 *     ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x1801468D0 (--_ECDesktopRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800C9130 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800CB658 (--$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z.c)
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
  unsigned int v13; // edx

  v2 = (_QWORD *)((char *)this + 112);
  *(_QWORD *)this = &CDesktopRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CDesktopRenderTarget::`vftable'{for `IRenderTargetResource'};
  v3 = (struct CVisualTree *)*((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = &CDesktopRenderTarget::`vftable'{for `IVisualTreeClient'};
  v4 = *((_QWORD *)this + 2);
  *v2 = &CDesktopRenderTarget::`vftable';
  CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(v4 + 24), v3);
  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
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
  ReleaseInterface<CDisplay>((__int64 *)this + 50);
  SAFE_DELETE<COcclusionContext>((COcclusionContext **)this + 51, v13);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 33);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 15);
  CRenderTarget::~CRenderTarget(this);
}
