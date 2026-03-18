/*
 * XREFs of ??1Lockable@@QEAA@XZ @ 0x1C01DBB38
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0043EEC (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000BA00 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD **v5; // rcx
  DXGFASTMUTEX *v6; // rcx

  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  v5 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  if ( v5[1] == KeGetCurrentThread() )
    DXGFASTMUTEX::Release(v5, a2, a3, a4);
  v6 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( v6 )
    DXGFASTMUTEX::`scalar deleting destructor'(v6);
}
