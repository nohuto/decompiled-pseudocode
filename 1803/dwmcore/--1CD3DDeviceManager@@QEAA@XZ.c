/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800DA580
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800DEB50 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1802D6728 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1802D6730 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_1802D6768 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_1802D6768 + 3) + 192LL))(
      *((_QWORD *)qword_1802D6768 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_1802D6768 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_1802D6768 + 16LL))(qword_1802D6768);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_1802D67A0);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_1802D6770);
  DeleteCriticalSection(&stru_1802D6738);
}
