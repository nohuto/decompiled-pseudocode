/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800C21EC
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800C7760 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  struct CD2DFactory *v1; // rcx

  v1 = qword_18026EF28;
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18026EEE8 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18026EEF0 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_18026EF28 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_18026EF28 + 3) + 192LL))(
      *((_QWORD *)qword_18026EF28 + 3),
      &CLSID_Mesh2DEffect);
    v1 = qword_18026EF28;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_18026EF60);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_18026EF30);
  DeleteCriticalSection(&CriticalSection);
}
