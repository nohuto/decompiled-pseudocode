/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B14E4
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C016C1CC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, struct COREDEVICEACCESS *a3)
{
  unsigned int v4; // esi
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  struct _KTHREAD *v10; // r8
  unsigned int v11; // edx
  int v12; // r11d
  __int64 v13; // rbx
  __int64 v15; // rcx
  DXGDEVICE *v16; // r10
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 176LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
    v8 = *((_DWORD *)v7 + 62);
    v9 = (v4 >> 6) & 0xFFFFFF;
    if ( v9 < v8
      && (v10 = v7[29], v11 = *((_DWORD *)v10 + 4 * v9 + 2), v12 = (v11 >> 5) & 3, v4 >> 30 == v12)
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) == 5 )
    {
      v13 = *((_QWORD *)v10 + 2 * v9);
      if ( v13 && v9 < v8 && v4 >> 30 == v12 && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
        *((_DWORD *)v10 + 4 * ((v4 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
    }
    else
    {
      v13 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    if ( !v13 )
      return 3221225485LL;
    v15 = *(unsigned int *)(*((_QWORD *)this + 2) + 424LL);
    v16 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( (_DWORD)v15 == 4 )
      DxgkDestroyClientAllocation(v15, (__int64)v16, 0, 0LL, *(struct DXGALLOCATION ****)(v13 + 40));
    else
      DXGDEVICE::DestroyAllocationInternal(
        v16,
        0,
        0LL,
        *(struct DXGRESOURCE **)(v13 + 40),
        a3,
        DXGDEVICE::DestroyFlagsDefault);
  }
  return 0LL;
}
