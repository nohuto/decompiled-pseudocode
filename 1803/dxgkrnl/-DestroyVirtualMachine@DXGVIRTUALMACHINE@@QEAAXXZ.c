/*
 * XREFs of ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B6688
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(DXGVIRTUALMACHINE *this)
{
  DXGPUSHLOCK *v2; // rsi
  char *v3; // rdi
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-20h] BYREF

  DXGVIRTUALMACHINE::ResetVirtualMachine(this);
  v2 = (DXGVIRTUALMACHINE *)((char *)this + 64);
  v3 = (char *)this + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive(v2);
    v4 = *(char **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( v4 == v3 )
      break;
    *(_QWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
    v6 = *((_QWORD *)v4 - 23);
    if ( *(v4 - 80) )
      v7 = *(_QWORD *)(v6 + 1504);
    else
      v7 = *(_QWORD *)(v6 + 1496);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)(v7 + 40));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)v4 - 17);
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)v4 - 24) + 16LL))((_QWORD *)v4 - 24, 0LL, v8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
}
