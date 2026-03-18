/*
 * XREFs of ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017352C
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A59D4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01594B8 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(DXGVIRTUALGPUMANAGER *this, struct DXGDEVICE *a2)
{
  DXGPUSHLOCK *v3; // rcx
  DXGVIRTUALGPUMANAGER *v5; // rdi
  struct DXGDEVICE **v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v9 = 0;
  v3 = (DXGVIRTUALGPUMANAGER *)((char *)this + 40);
  v8 = v3;
  if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v3);
    v9 = 2;
  }
  v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 8);
  while ( v5 != (DXGVIRTUALGPUMANAGER *)((char *)this + 64) )
  {
    v6 = (struct DXGDEVICE **)((char *)v5 - 96);
    v5 = *(DXGVIRTUALGPUMANAGER **)v5;
    if ( a2 )
    {
      if ( v6[16] == a2 )
        (*((void (__fastcall **)(struct DXGDEVICE **))*v6 + 18))(v6);
    }
    else
    {
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER *, struct DXGDEVICE **))(*(_QWORD *)this + 24LL))(this, v6);
    }
  }
  if ( !a2 )
  {
    operator delete[](*((void **)this + 3));
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 3) = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
