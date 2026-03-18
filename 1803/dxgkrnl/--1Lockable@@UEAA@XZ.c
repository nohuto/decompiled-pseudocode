/*
 * XREFs of ??1Lockable@@UEAA@XZ @ 0x1C0220DA0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004385C (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??_ELockable@@UEAAPEAXI@Z @ 0x1C0045C30 (--_ELockable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall Lockable::~Lockable(Lockable *this)
{
  struct _KTHREAD **v2; // rcx

  *(_QWORD *)this = &Lockable::`vftable';
  v2 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  if ( v2[1] == KeGetCurrentThread() )
  {
    DXGFASTMUTEX::Release(v2);
    v2 = (struct _KTHREAD **)*((_QWORD *)this + 3);
  }
  if ( v2 )
    DXGFASTMUTEX::`scalar deleting destructor'((DXGFASTMUTEX *)v2);
}
