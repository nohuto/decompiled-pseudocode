/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4
 * Callers:
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C002BFFC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C0036910 (--_EBLTENTRY@@QEAAPEAXI@Z.c)
 *     ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C0038890 (--_EVIDPNSOURCEINFO@@QEAAPEAXI@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D661C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0110284 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0110C70 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C01476CC (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0147AB8 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C01508E8 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C019D95C (-DeAllocate@DripsBlockerInfoList@@QEAAXXZ.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C01BD5B0 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C01D42F8 (--1BLTQUEUE@@QEAA@XZ.c)
 *     DxgkCheckDisplayState @ 0x1C01EB330 (DxgkCheckDisplayState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
