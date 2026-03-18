/*
 * XREFs of ??1CGenericInk@@UEAA@XZ @ 0x18018EC6C
 * Callers:
 *     ??_GCGenericInk@@UEAAPEAXI@Z @ 0x18016E600 (--_GCGenericInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C3D08 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ @ 0x18016D914 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@UEAA@XZ.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180171C48 (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

void __fastcall CGenericInk::~CGenericInk(CGenericInk *this)
{
  __int64 v2; // rdx
  CGenericInk **v3; // rax
  CGenericInk **i; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CGenericInk::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  v3 = *(CGenericInk ***)(v2 + 16);
  for ( i = *(CGenericInk ***)(v2 + 8); i != v3 && *i != this; i += 9 )
    ;
  if ( i != v3 )
    std::vector<CWetInkManager::SuperWetStroke>::erase(v2 + 8, &v5, (__int64)i);
  FastRegion::CRegion::FreeMemory((void **)this + 28);
  Microsoft::WRL::ComPtr<CVisualTree>::InternalRelease((CMILRefCountBase **)this + 27);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::~CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>((CGenericInk *)((char *)this + 72));
  CResource::~CResource(this);
}
