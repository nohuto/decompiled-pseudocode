/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800D2940
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800D6DD0 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18023E818 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18023E820 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_18023E858 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_18023E858 + 3) + 192LL))(
      *((_QWORD *)qword_18023E858 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_18023E858 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_18023E858 + 16LL))(qword_18023E858);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_18023E890);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_18023E860);
  DeleteCriticalSection(&CriticalSection);
}
