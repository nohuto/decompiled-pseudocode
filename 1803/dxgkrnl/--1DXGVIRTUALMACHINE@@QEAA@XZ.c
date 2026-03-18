/*
 * XREFs of ??1DXGVIRTUALMACHINE@@QEAA@XZ @ 0x1C01B5FB8
 * Callers:
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0034350 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::~DXGVIRTUALMACHINE(void **this)
{
  _QWORD *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v4; // rbx
  char v5; // dl
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = this + 1;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v4 = Global;
  if ( *((struct _KTHREAD **)Global + 34) == KeGetCurrentThread() )
  {
    v5 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 264));
    v5 = 1;
  }
  v6 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*((_DWORD *)v4 + 310);
  if ( v5 )
  {
    *((_QWORD *)v4 + 34) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 264, 0LL);
    KeLeaveCriticalRegion();
  }
  operator delete(this[15]);
}
